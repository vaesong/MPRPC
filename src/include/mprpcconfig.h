#pragma once

#include <iostream>
#include <string>
#include <unordered_map>

// rpcserverip rpcserverport zookeeperip zookeeperport
//框架读取配置文件类
class MyRpcConfig{
public:
    //负责解析加载的配置文件
    void LoadConfigFile(const char* config_file);
    //负责根据 key 值查询
    std::string Load(const std::string& key);

private:
    std::unordered_map<std::string, std::string> m_configMap;
    void Trim(std::string& src_buf);
};