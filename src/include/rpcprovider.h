#pragma once
#include "google/protobuf/service.h"

//框架提供的专门发布 rpc 服务的网络对象类
class RpcProvider{
public:
    // 框架提供给外部使用的，可以发布 rpc 方法的接口
    void NotifyService(google::protobuf::Service * service);

    //启动rpc服务节点，开始提供 rpc 远程网络调用服务
    void Run();
};