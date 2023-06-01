#pragma once

#include "mprpcconfig.h"

// mprpc 框架的基础类，主要是初始化框架，设计成为单例模式
class MprpcApplication{
public:
    static void Init(int argc, char** argv);
    static MprpcApplication& GetInstance();
    MyRpcConfig& GetConfig();

private:
    //删除默认构造函数，拷贝构造函数，移动构造函数
    MprpcApplication(){};
    MprpcApplication(const MprpcApplication& ) = delete;
    MprpcApplication(MprpcApplication&& ) = delete;

    static MyRpcConfig m_config;
};