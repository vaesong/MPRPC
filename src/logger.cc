#include "logger.h"
#include <thread>
#include <time.h>
#include <fstream>
#include <iostream>

//单例模式获取实例
Logger& Logger::GetInstance(){
    static Logger logger;
    return logger;
}

//初始化日志模块，设置线程，设置工作函数
Logger::Logger(){
    std::thread writeLogTask([&](){
        for(;;){
            //总任务就是向队列里面写入日志
            //首先获取时间，根据时间打开文件
            time_t now = time(nullptr);
            tm *nowtm = localtime(&now);

            //拼接文件名
            char filename[128];
            sprintf(filename, "%d-%d-%d-log.txt", nowtm->tm_year+1900, nowtm->tm_mon+1, nowtm->tm_mday);

            //打开文件
            FILE *fp = fopen(filename, "a+");
            if(fp == nullptr){
                std::cout << "logger file: " << filename << " open error!" << std::endl;
                exit(EXIT_FAILURE);
            }

            //获得消息队列里面的字符串
            std::string msg = m_lockQue.Pop();

            //当前时间，写入的时间
            char time_buf[64] = {0};
            sprintf(time_buf, "[%d:%d:%d] ==> [%s]", 
                                nowtm->tm_hour, 
                                nowtm->tm_min, 
                                nowtm->tm_sec, 
                                (m_loglevel == INFO ? "info" : "error"));

            //在错误信息前面插入当前的时间
            msg.insert(0, time_buf);
            msg.append("\n");

            //把错误信息写入到文件里面
            fputs(msg.c_str(), fp);
            fclose(fp);
        }
    });

    //设置线程分离
    writeLogTask.detach();
}

//设置日志级别
void Logger::SetLogLevel(LogLevel level){
    m_loglevel = level;
}

//写日志到日志队列
void Logger::Log(std::string msg){
    m_lockQue.Push(msg);
}


