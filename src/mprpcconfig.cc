#include "mprpcconfig.h"

#define CONFIG_BUF_SIZE 512

//去掉前后多余的空格
void MyRpcConfig::Trim(std::string& src_buf){
    int idx = src_buf.find_first_not_of(' ');
    if(idx != -1){
        //说明前面有空格
        src_buf = src_buf.substr(idx, src_buf.size() - idx);
    }

    //去掉字符串后面多余的空格
    idx = src_buf.find_last_not_of(' ');
    if(idx != -1){
        //说明后面有空格
        src_buf = src_buf.substr(0, idx + 1);
    }
}


//负责解析加载的配置文件
void MyRpcConfig::LoadConfigFile(const char* config_file){
    FILE *fp = fopen(config_file, "r");
    if(fp == nullptr){
        std::cout << config_file << " is not exist!" << std::endl;
        exit(EXIT_FAILURE);
    }

    //读取文件内容，一行一行读取，去掉每行的开头和末尾的空格，然后在判断是否合法
    // feof 到达文件结尾返回 非 0，否则返回 0
    while (!feof(fp))
    {
        char buf[CONFIG_BUF_SIZE] = {0};
        fgets(buf, CONFIG_BUF_SIZE, fp);

        //去掉字符串前面多余的空格
        std::string read_buf(buf);
        Trim(read_buf);

        //如果是注释
        if(read_buf[0] == '#' || read_buf.empty()){
            continue;
        }

        //解析配置项
        int idx = read_buf.find('=');
        //如果配置不合法
        if(idx == -1){
            continue;
        }

        std::string key;
        std::string value;
        //找到 key，并且去除空格
        key = read_buf.substr(0, idx);
        Trim(key);

        //找到 value，并且去除空格，查找是否存在 '\n'
        int end_idx = read_buf.find('\n', idx);
        //没有 '\n'，就用最后的大小减
        if(idx == -1)
            value = read_buf.substr(idx+1, read_buf.size() - idx - 1);
        else
            value = read_buf.substr(idx+1, end_idx - idx - 1);
        Trim(value);

        m_configMap.insert({key, value});
    }
    
}

//负责根据 key 值查询
std::string MyRpcConfig::Load(const std::string& key){
    auto it = m_configMap.find(key);
    if(it == m_configMap.end()){
        return "";
    }
    return it->second;
}