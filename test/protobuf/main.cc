#include "test.pb.h"
#include <iostream>
#include <string>

int main(){

    // fixbug::LoginResponse rsp;
    // fixbug::ResultCode *rc = rsp.mutable_result();
    // rc->set_errcode(1);
    // rc->set_errmsg("登录处理失败");

    fixbug::GetFriendListsResponse rspB;
    fixbug::ResultCode *rc = rspB.mutable_result();
    rc->set_errcode(0);

    fixbug::User *user1 = rspB.add_friend_list();
    user1->set_name("zhang san");
    user1->set_age(20);
    user1->set_sex(fixbug::User::MAN);

    fixbug::User *user2 = rspB.add_friend_list();
    user2->set_name("li si");
    user2->set_age(22);
    user2->set_sex(fixbug::User::WOMAN);

    std::cout << rspB.friend_list_size() << std::endl;

    return 0;
}