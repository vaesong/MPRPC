#include <iostream>
#include "mprpcapplication.h"
#include "user.pb.h"
#include "mprpcchannel.h"

int main(int argc, char **argv){

    // mprpc 框架的初始化
    MprpcApplication::Init(argc, argv);

    //演示调用远程发布的 rpc 方法,传入 rpcchannel
    fixbug::UserServiceRpc_Stub stub(new MprpcChannel());

    fixbug::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123456");

    fixbug::LoginResponse response;

    // Rpcchannel->callmethod，集中来做所有 rpc 方法调用的参数序列化和网络发送
    // 发起 rpc 方法调用，同步 RPC 调用过程
    stub.Login(nullptr, &request, &response, nullptr);

    //rpc调用完成，返回响应结果
    if(response.result().errcode() == 0){
        std::cout << "rpc login response success: " << response.success() << std::endl;
    }
    else{
        std::cout << "rpc login response error: " << response.result().errmsg() << std::endl;
    }
    
    return 0;
}