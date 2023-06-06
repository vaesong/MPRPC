#include "mprpcapplication.h"
#include "mprpcprovider.h"
#include <google/protobuf/descriptor.h>
#include "rpcheader.pb.h"
#include <pthread.h>
#include "logger.h"
#include "zookeeperutil.h"


// 框架提供给外部使用的，可以发布 rpc 方法的接口
void MprpcProvider::NotifyService(google::protobuf::Service * service){

    //用来保存该服务的指针对象和方法信息
    ServiceInfo service_Info;
    service_Info.m_service = service;

    //获得该 Service 的服务对象的描述信息
    const google::protobuf::ServiceDescriptor * pserviceDesc = service->GetDescriptor();
    //获得该服务的名字
    std::string service_name = pserviceDesc->name();
    //获得该服务的方法的数量
    int methodCnt = pserviceDesc->method_count();

    //遍历所有的方法，存到 info 信息里面
    for(int i = 0; i < methodCnt; ++i){
        //获得每个方法的描述信息
        const google::protobuf::MethodDescriptor * pmethodDesc = pserviceDesc->method(i);
        //获得方法的名字
        std::string method_name = pmethodDesc->name();
        //存到 serviceInfo 信息里面
        service_Info.m_methodMap.insert({method_name, pmethodDesc});

        LOG_INFO("service: %s、method: %s", service_name.c_str(), method_name.c_str());
    }

    //存到表里
    m_serviceMap.insert({service_name, service_Info});

}

//启动rpc服务节点，开始提供 rpc 远程网络调用服务
void MprpcProvider::Run(){
    std::string ip = MprpcApplication::GetInstance().GetConfig().Load("rpcserver_ip");
    uint16_t port = atoi(MprpcApplication::GetInstance().GetConfig().Load("rpcserver_port").c_str());
    muduo::net::InetAddress address(ip, port);

    //创建 TcpServer 对象
    // muduo::net::TcpServer server(&m_eventloop, address, "MprpcProvider");
    muduo::net::TcpServer* server = new muduo::net::TcpServer(&m_eventloop, address, "MprpcProvider");

    //绑定连接回调和消息读写回调方法， 分离了网络代码和业务代码
    server->setConnectionCallback(std::bind(&MprpcProvider::OnConnection, this, std::placeholders::_1));
    server->setMessageCallback(std::bind(&MprpcProvider::OnMessage, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

    //设置 muduo 库的线程数量
    server->setThreadNum(0); 

    //定义 zookeeper, session timeout 30s, zkclient 网络I/O线程， 1/3 * timeout 时间发送 ping 消息
    ZkClient zkcli;
    zkcli.Start();
    
    // service_name 永久性节点，method_name 临时性节点
    for(auto &sp : m_serviceMap){
        //获得 service_name
        std::string service_path = "/" + sp.first;
        zkcli.Create(service_path.c_str(), nullptr, 0);
        
        //遍历该 service 的所有的 method
        for(auto &mp : sp.second.m_methodMap){
            std::string method_path = service_path + "/" + mp.first;
            char method_path_data[128] = {0};
            // ip port 拼接成数据，作为 znode 节点的数据
            sprintf(method_path_data, "%s:%d", ip.c_str(), port);
            zkcli.Create(method_path.c_str(), method_path_data, strlen(method_path_data), ZOO_EPHEMERAL);
        }
    }

    LOG_INFO("Rpcservice start service at ip: %s port: %d", ip.c_str(), port);
    //启动网络服务
    server->start();
    m_eventloop.loop();
}

//新的连接回调
void MprpcProvider::OnConnection(const muduo::net::TcpConnectionPtr& conn){
    if(!conn->connected()){
        //如果和 rpc client 的连接断开了
        conn->shutdown();
    }
}

/*
需要协商好通信用的 protobuf 数据类型

首先是四个字节的数字，代表了 header 的大小，然后是 header_str，最后是 arg_str
header_size(4字节，一个int) + header_str(里面包含了service_name，method_name，arg_size) + arg_str
例如（18UserServiceLogin15zhang san123456）
*/

//已建立连接用户的读写事件回调,如果远端有 rpc 服务的调用请求，那么就会相应 OnMessage
void MprpcProvider::OnMessage(const muduo::net::TcpConnectionPtr& conn, muduo::net::Buffer* buffer, muduo::Timestamp){

    //从网络上接收的远程 RPC 调用请求的字符流
    std::string recv_buf = buffer->retrieveAllAsString();

    //从字符流中读取前四个字节的数据
    uint32_t header_size = 0;
    recv_buf.copy((char *)&header_size, 4, 0);

    //根据 header_size 读取数据头的原始字符流，反序列化数据，得到 RPC 请求的详细信息
    std::string rpc_header_str = recv_buf.substr(4, header_size);
    mprpc::RpcHeader rpcheader;
    std::string service_name;
    std::string method_name;
    uint32_t args_size;

    if(rpcheader.ParseFromString(rpc_header_str)){
        //数据头反序列化成功
        service_name = rpcheader.service_name();
        method_name = rpcheader.method_name();
        args_size = rpcheader.args_size();
    }
    else{
        //数据头反序列化失败
        LOG_ERROR("rpc_header_str: %s parse error!", rpc_header_str.c_str());
        return;
    }

    //获取 RPC 方法参数的字符流数据
    std::string args_str = recv_buf.substr(4 + header_size, args_size);

    //打印调试信息
    LOG_INFO("=============================================");
    LOG_INFO("header_size: %d", header_size);
    LOG_INFO("rpc_header_str: %s", rpc_header_str.c_str());
    LOG_INFO("service_name: %s", service_name.c_str());
    LOG_INFO("method_name: %s", method_name.c_str());
    LOG_INFO("args_size: %d", args_size);
    LOG_INFO("args_str: %s", args_str.c_str());
    LOG_INFO("=============================================");

    //然后在注册表中查找 service 和 method
    auto it = m_serviceMap.find(service_name);
    //如果 service 不存在
    if(it == m_serviceMap.end()){
        LOG_ERROR("%s is not exist!", service_name.c_str());
        return;
    }
    auto mit = it->second.m_methodMap.find(method_name);
    if(mit == it->second.m_methodMap.end()){
        LOG_ERROR("%s exist! But %s is not exist!", service_name.c_str(), method_name.c_str());
        return;
    }

    //获取 Service 对象和 method 对象
    google::protobuf::Service * service = it->second.m_service;
    const google::protobuf::MethodDescriptor * method = mit->second;

    //生成 RPC 方法调用的请求 request 和相应 response 参数
    //根据 service 和 method 获得 request 和 response 属性，然后创建
    google::protobuf::Message *request = service->GetRequestPrototype(method).New();
    google::protobuf::Message *response = service->GetResponsePrototype(method).New();
    
    //然后把请求参数 反序列化成 request Message
    if(request->ParseFromString(args_str)){
        LOG_INFO("request parse success, content: %s", args_str.c_str());
    }

    //然后给下面的 Method 方法的调用，绑定一个 Closure 的回调函数
    google::protobuf::Closure* done = google::protobuf::NewCallback<MprpcProvider,
                                                                    const muduo::net::TcpConnectionPtr&, 
                                                                    google::protobuf::Message*>
                                                                    (this, &MprpcProvider::SendRpcResponse, conn, response);

    //在框架上根据远端的 rpc 请求，调用当前 rpc 节点上发布的方法
    service->CallMethod(method, nullptr, request, response, done);
}

//Closure的回调操作，用于序列化 RPC 的响应和网络发送
void MprpcProvider::SendRpcResponse(const muduo::net::TcpConnectionPtr& conn, google::protobuf::Message* response){
    
    //接收 response 然后序列化并发送
    std::string response_str;
    if(response->SerializeToString(&response_str)){
        //序列化成功后，通过网络把 RPC 方法执行的结果发送到 RPC 的调用方
        conn->send(response_str);
    }
    else{
        LOG_ERROR("serialize response_str error!");
    }
    
    //模拟 http 的短连接服务，由 rpcprovider 主动断开连接
    conn->shutdown();
}