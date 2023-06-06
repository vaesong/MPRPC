#pragma once
#include <string>
#include "google/protobuf/service.h"
#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <unordered_map>

//框架提供的专门发布 rpc 服务的网络对象类
class MprpcProvider{
public:
    // 框架提供给外部使用的，可以发布 rpc 方法的接口
    void NotifyService(google::protobuf::Service * service);

    //启动rpc服务节点，开始提供 rpc 远程网络调用服务
    void Run();

private:
    //保存发布的 Service 的指针（也就是调用的类的指针），和该 service 所有的 method （也就是类的所有方法） 
    struct ServiceInfo{
        google::protobuf::Service * m_service;
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor *> m_methodMap;
    };

    //定义一个 m_map 来保存，发布的 Service 名，和其 ServiceInfo 信息
    std::unordered_map<std::string, ServiceInfo> m_serviceMap;

private:
    muduo::net::EventLoop m_eventloop;
    void OnConnection(const muduo::net::TcpConnectionPtr & conn);
    void OnMessage(const muduo::net::TcpConnectionPtr&, muduo::net::Buffer*, muduo::Timestamp);
    void SendRpcResponse(const muduo::net::TcpConnectionPtr& conn, google::protobuf::Message* response);
};