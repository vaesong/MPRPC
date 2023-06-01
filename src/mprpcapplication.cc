#include "mprpcapplication.h"
#include <iostream>
#include <string>
#include <unistd.h>

MyRpcConfig MprpcApplication::m_config;

//打印错误信息
void ShowArgsHelp(){
    std::cout << "format: command -i <configfile>" << std::endl;
}

void MprpcApplication::Init(int argc, char** argv){
    //如果参数量不够，直接报错
    if(argc < 2){
        ShowArgsHelp();
        exit(EXIT_FAILURE);
    }

    int opt = 0;
    const char* optstring = "i:";
    std::string config_file;

    while((opt = getopt(argc, argv, optstring)) != -1){
        switch (opt)
        {
        case 'i':
            config_file = optarg;
            break;
        case '?':
            std::cout << "invalid arg" << std::endl;
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        case ':':
            std::cout << "need <configfile" << std::endl;
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        default:
            break;
        }
    }

    //加载配置文件，获得 rpcserver_ip、rpcserver_port、zookeeper_ip、zookeeper_port
    m_config.LoadConfigFile(config_file.c_str()); 
}

MprpcApplication& MprpcApplication::GetInstance(){
    static MprpcApplication app;
    return app;
}

MyRpcConfig& MprpcApplication::GetConfig(){
    return m_config;
}