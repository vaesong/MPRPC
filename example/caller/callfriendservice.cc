#include <iostream>
#include "mprpcapplication.h"
#include "friend.pb.h"

int main(int argc, char** argv){

    MprpcApplication::Init(argc, argv);

    fixbug::FriendsServiceRpc_Stub stub(new MprpcChannel());

    fixbug::GetFriendsRequest request;
    request.set_userid(001);

    fixbug::GetFriendsResponse response;

    //controcoller 用来判断是否控制成功
    MprpcController controller;
    stub.GetFriendsList(&controller, &request, &response, nullptr);

    if(controller.Failed()){
        std::cout << controller.ErrorText() << std::endl;
    }
    else{
        if(response.result().errcode() == 1){
        std::cout << "rpc GetFriendsList response Success!" << std::endl;
        for(int i = 0; i < response.friends_size(); ++i){
            std::cout << "friend: " << response.friends(i) << std::endl;
        }
        
        }
        else{
            std::cout << "rpc GetFriendsList response error! errmsg: " << response.result().errmsg() << std::endl;
        }
    }

    return 0;
}