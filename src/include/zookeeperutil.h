#pragma once
#include <zookeeper/zookeeper.h>
#include <semaphore.h>
#include <string>

class ZkClient{
public:
    ZkClient();
    ~ZkClient();

    //启动 zookeeper 服务
    void Start();
    //根据指定的 path，创建 znode 节点，state表示永久性节点还是临时性节点
    void Create(const char *path, const char *data, int datalen, int state=0);
    //获得指定 path znode 的值
    std::string GetData(const char* path);

    //设置指定 path znode 的值
    void SetData(const char *path, const char *data);
    //删除指定的 znode
    void DelData(const char *path);

private:
    //zk客户端句柄
    zhandle_t * m_zhandle;
};