#include "test.pb.h"
#include <iostream>
#include <string>

int main(){
    //首先实例化一个登录类
    fixbug::LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123456");

    //序列化，需要有字符串接受
    std::string send_str;
    if(req.SerializeToString(&send_str)){
        std::cout << send_str << std::endl;
    }
    
    //反序列化
    fixbug::LoginRequest req2;
    if(req2.ParseFromString(send_str)){
        std::cout << req2.name() << std::endl;
        std::cout << req2.pwd() << std::endl;
    }

}