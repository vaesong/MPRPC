#include <iostream>
#include <string>
#include "user.pb.h"
#include "mprpcapplication.h"
#include "rpcprovider.h"


class Userservice : public fixbug::UserServiceRpc{
public:
    bool Login(std::string name, std::string pwd){
        std::cout << "doing local service: Login" << std::endl;
        std::cout << "name:" << name << " pwd:" << pwd << std::endl;
        return true;
    }

    /*
    重写基类的 UserserviceRpc 的虚函数，下面的方法是 RPC 框架调用的
    caller ==> Login(LoginRequest) ==> muduo ==> callee
    callee ==> Login(LoginRequest) ==> 交给下面重写的 Login 方法
    */

    void Login(::google::protobuf::RpcController* controller,
                       const ::fixbug::LoginRequest* request,
                       ::fixbug::LoginResponse* response,
                       ::google::protobuf::Closure* done)
    {
        //收到了远程的 Login 参数 request
        std::string name = request->name();
        std::string pwd = request->pwd();

        //获得远程的参数之后，交给本地的 Login 函数去执行
        bool login_result = Login(name, pwd);

        //然后封装到 response 里面去
        response->set_success(login_result);
        fixbug::ResultCode * code = response->mutable_result();
        code->set_errcode(0);
        code->set_errmsg("");

        //执行回调操作 执行相应对象数据的序列化和网络发送
        done->Run();
    }

};

int main(int argc, char** argv){

    //调用框架的初始化操作
    MprpcApplication::Init(argc, argv);

    //provider 是一个 rpc 网络服务对象，把 Userservice 对象发布到 rpc 节点上
    RpcProvider provider;
    provider.NotifyService(new Userservice());

    //启动一个 rpc 服务节点， Run 以后，进程进入阻塞状态，等待远程的 rpc 调用
    provider.Run();
    // std::cout << "===================================" << std::endl;

    return 0;
}
