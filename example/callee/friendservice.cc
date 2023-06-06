#include <iostream>
#include <string>
#include "friend.pb.h"
#include "mprpcapplication.h"
#include "mprpcprovider.h"
#include <vector>
#include "logger.h"

class FriendService : public fixbug::FriendsServiceRpc{
public:
    std::vector<std::string> GetFriendsList(uint32_t userid){
        LOG_INFO("doing remote GetFriendsList! userid: %d", userid);
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

        for(std::string name : friendsList){
            response->add_friends(name);
        }
        
        done->Run();
    }

};

int main(int argc, char** argv){

    MprpcApplication::Init(argc, argv);

    MprpcProvider provider;
    provider.NotifyService(new FriendService());

    provider.Run();

    return 0;
}