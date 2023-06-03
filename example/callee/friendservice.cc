#include <iostream>
#include <string>
#include "friend.pb.h"
#include "mprpcapplication.h"
#include "rpcprovider.h"
#include <vector>

class FriendService : public fixbug::FriendsServiceRpc{
public:
    std::vector<std::string> GetFriendsList(uint32_t userid){
        std::cout << "doing remote GetFriendsList! userid: " << userid << std::endl;
        std::vector<std::string> vec;
        vec.push_back("zhang san");
        vec.push_back("li si");
        vec.push_back("wang wu");

        return vec;
    }

    void GetFriendsList(::google::protobuf::RpcController* controller,
                       const ::fixbug::GetFriendsRequest* request,
                       ::fixbug::GetFriendsResponse* response,
                       ::google::protobuf::Closure* done)
    {
        uint32_t userid = request->userid();

        std::vector<std::string> friendsList = GetFriendsList(userid);

        response->mutable_result()->set_errcode(1);
        response->mutable_result()->set_errmsg("");
        
        //列表操作
        // for(std::string &name : friendsList){
        //     std::string* p = response->add_friends();
        //     *p = name;
        // }
        for(std::string name : friendsList){
            response->add_friends(name);
        }
        
        done->Run();
    }

};

int main(int argc, char** argv){

    MprpcApplication::Init(argc, argv);

    RpcProvider provider;
    provider.NotifyService(new FriendService());

    provider.Run();

    return 0;
}