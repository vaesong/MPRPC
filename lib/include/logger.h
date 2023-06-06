#pragma once
#include <string>
#include "lockqueue.h"

//日志的两个级别
enum LogLevel{
    //普通信息
    INFO,
    //错误信息
    ERROR,
};

//日志系统
class Logger{
public:

    //单例模式获取实例
    static Logger& GetInstance();
    //设置日志级别
    void SetLogLevel(LogLevel level);
    //写日志到日志队列
    void Log(std::string msg);

private:
    //日志级别
    int m_loglevel;
    //异步写日志的日志队列
    LockQueue<std::string> m_lockQue;

private:
    //设置成单例模式，private 构造函数，删掉拷贝构造，移动构造
    Logger();
    Logger(const Logger&) = delete;
    Logger(Logger&& ) = delete;

};

//定义宏,do...while(0)有什么意义呢?
//让后面的代码变成一个整体，相当于一个 大括号变成了一条语句
#define LOG_INFO(logmsgformat, ...) \
    do{ \
        Logger &logger = Logger::GetInstance(); \
        logger.SetLogLevel(INFO); \
        char c[1024]; \
        snprintf(c, 1024, logmsgformat, ##__VA_ARGS__); \
        logger.Log(c); \
    } while(0)

#define LOG_ERROR(logmsgformat, ...) \
    do{ \
        Logger &logger = Logger::GetInstance(); \
        logger.SetLogLevel(ERROR); \
        char c[1024]; \
        snprintf(c, 1024, logmsgformat, ##__VA_ARGS__); \
        logger.Log(c); \
    } while(0)
