#include "mprpcchannel.h"
#include "rpcheader.pb.h"
#include "mprpcapplication.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

/*
发送的请求头的数据格式
header: header_size + (service_name, method_name, args_size) + args
*/
void MprpcChannel::CallMethod(const google::protobuf::MethodDescriptor* method,
                          google::protobuf::RpcController* controller, const google::protobuf::Message* request,
                          google::protobuf::Message* response, google::protobuf::Closure* done)
{
    // request 参数的序列化
    const google::protobuf::ServiceDescriptor* sd = method->service();
    std::string service_name = sd->name();
    std::string method_name = method->name();

    uint32_t args_size = 0;
    std::string args_str;
    if(request->SerializeToString(&args_str)){
        args_size = args_str.size();
    }
    else{
        std::cout << "serialize request error!" << std::endl;
        return;
    }

    //构建请求头格式
    mprpc::RpcHeader rpcheader;
    rpcheader.set_service_name(service_name);
    rpcheader.set_method_name(method_name);
    rpcheader.set_args_size(args_size);

    uint32_t header_size = 0;
    std::string header_str;
    if(rpcheader.SerializeToString(&header_str)){
        header_size = header_str.size();
    }
    else{
        std::cout << "serialize header error!" << std::endl;
    }

    //组织发送的数据格式
    std::string send_rpc_str;
    send_rpc_str.insert(0, std::string((char*)&header_size, 4));
    send_rpc_str += header_str;
    send_rpc_str += args_str;

    //打印调试信息
    std::cout << "=============================================" << std::endl;
    std::cout << "header_size: " << header_size << std::endl;
    std::cout << "rpc_header_str: " << header_str << std::endl;
    std::cout << "service_name: " << service_name << std::endl;
    std::cout << "method_name: " << method_name << std::endl;
    std::cout << "arg_size: " << args_size << std::endl;
    std::cout << "arg_str: " << args_str << std::endl;
    std::cout << "=============================================" << std::endl;
    
    //通过 TCP 网络发送
    std::string ip = MprpcApplication::GetInstance().GetConfig().Load("rpcserver_ip");
    uint16_t port = atoi(MprpcApplication::GetInstance().GetConfig().Load("rpcserver_port").c_str());

    int clientfd = socket(AF_INET, SOCK_STREAM, 0);
    if(clientfd == -1){
        std::cout << "create socket error! errno: " << errno << std::endl;
        close(clientfd);
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in server_addr;
    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(ip.c_str());
    server_addr.sin_port = htons(port);

    if(connect(clientfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1){
        std::cout << "connetc error! errno: " << errno << std::endl;
        close(clientfd);
        exit(EXIT_FAILURE);
    }
    else
        std::cout << "clientfd: " << clientfd << std::endl;

    //发送请求
    if(send(clientfd, send_rpc_str.c_str(), send_rpc_str.size(), 0) == -1){
        std::cout << "send error! errno: " << errno << std::endl;
        return;
    }


    //接受返回结果，反序列化得到 response
    char recv_buf[1024] = {0};
    int recv_size = 0;
    if((recv_size = recv(clientfd, recv_buf, 1024, 0)) == -1){
        std::cout << "recv error! errno: " << errno << std::endl;
        close(clientfd);
        return;
    }

    std::string response_str(recv_buf, 0, recv_size);
    if(response->ParseFromString(response_str)){
        std::cout << "parse success! response_str: "<< response_str << std::endl;
    }
    else{
        std::cout << "parse error! response_str: " << response_str << std::endl;
        close(clientfd);
        return;
    }

    close(clientfd);
}