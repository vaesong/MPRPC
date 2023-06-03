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

    //controcoller 用来判断是否控制成功
    MprpcController controller;

    // Rpcchannel->callmethod，集中来做所有 rpc 方法调用的参数序列化和网络发送
    // 发起 rpc 方法调用，同步 RPC 调用过程
    stub.Login(&controller, &request, &response, nullptr);

    //首先判断是否发送成功,接收成功，如果都没发送接收成功，必然没有响应
    if(controller.Failed()){
        std::cout << controller.ErrorText() << std::endl;
    }
    else{
        //rpc调用完成，返回响应结果
        if(response.result().errcode() == 1){
            std::cout << "rpc login response success: " << response.success() << std::endl;
        }
        else{
            std::cout << "rpc login response error: " << response.result().errmsg() << std::endl;
        }
    }
    
    //进行注册服务的远程调用
    fixbug::RegisterRequest register_request;
    register_request.set_id(12);
    register_request.set_name("li si");
    register_request.set_pwd("woshilisi");

    fixbug::RegisterResponse register_response;
    stub.Register(nullptr, &register_request, &register_response, nullptr);
    
    //根据响应判断是否成功
    if(register_response.result().errcode() == 1){
        std::cout << "rpc register response success!!!" << std::endl;
    }
    else{
        std::cout << "rpc register response error!!! errmsg: " << register_response.result().errmsg() << std::endl;
    }

    return 0;
}