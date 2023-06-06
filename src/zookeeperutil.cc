#include "zookeeperutil.h"
#include "mprpcapplication.h"
#include "logger.h"

//全局的watcher观察器，回调函数，是一个单独的线程
void global_watcher(zhandle_t *zh, int type, int state, const char *path, void *watcherCtx){
    //回调消息类型是和会话相关的消息类型
    if(type == ZOO_SESSION_EVENT){
        // ZkClient 和 zkserver 连接成功
        if(state == ZOO_CONNECTED_STATE){
            sem_t *sem = (sem_t*) zoo_get_context(zh);
            sem_post(sem);
        }
    }
}


ZkClient::ZkClient() : m_zhandle(nullptr){}

ZkClient::~ZkClient(){
    if(m_zhandle != nullptr){
        zookeeper_close(m_zhandle);
    }
}
//启动 zookeeper 服务
void ZkClient::Start(){
    std::string host = MprpcApplication::GetInstance().GetConfig().Load("zookeeper_ip");
    std::string port = MprpcApplication::GetInstance().GetConfig().Load("zookeeper_port");
    std::string connstr = host + ":" + port;

    /*
    zookeeper_mt 多线程版本
    zookeeper 的 API 客户端程序提供了三个线程
    API调用线程
    网络I/O线程
    watcher回调线程
    */
    m_zhandle = zookeeper_init(connstr.c_str(), global_watcher, 30000, nullptr, nullptr, 0);
    if(m_zhandle == nullptr){
        LOG_ERROR("zookeeper_init error!");
        exit(EXIT_FAILURE);
    }

    sem_t sem;
    sem_init(&sem, 0, 0);
    zoo_set_context(m_zhandle, &sem);

    //主线程等待回调函数，对于信号量的增加
    sem_wait(&sem);
    LOG_INFO("zookeeper_init success!");
}

//根据指定的 path，创建 znode 节点，state表示永久性节点还是临时性节点
void ZkClient::Create(const char *path, const char *data, int datalen, int state){
    char path_buffer[128];
    int buff_len = sizeof(path_buffer);
    int flag;

    //首选判断节点是否存在
    flag = zoo_exists(m_zhandle, path, 0, nullptr);
    
    //如果该节点并不存在
    if(flag == ZNONODE){
        //那么就创建该节点
        flag = zoo_create(m_zhandle, path, data, datalen, &ZOO_OPEN_ACL_UNSAFE, state, path_buffer, buff_len);
        if(flag == ZOK){
            LOG_INFO("znode create success... path: %s", path);
        }
        else{
            LOG_ERROR("znode create error... path: %s, flag: %d", path, flag);
            exit(EXIT_FAILURE);
        }
    }
}

//获得指定 path znode 的值
std::string ZkClient::GetData(const char* path){
    char buffer[128];
    int buffer_len = sizeof(buffer);
    int flag = zoo_get(m_zhandle, path, 0, buffer, &buffer_len, nullptr);
    if(flag != ZOK){
        LOG_ERROR("get znode error... path: %s", path);
    }
    else{
        return buffer;
    }
    return "";
}

void ZkClient::SetData(const char *path, const char *data){
    const char *buffer = data;
    int buffer_len = sizeof(buffer);
    int flag = zoo_set(m_zhandle, path, buffer, buffer_len, -1);

    if(flag != ZOK){
        LOG_INFO("set znode error... path: %s", path);
    }
    else{
        LOG_INFO("set znode success... path: %s, data: %s", path, data);
    }
}

void ZkClient::DelData(const char *path){

    int flag = zoo_delete(m_zhandle, path, -1);

    if(flag != ZOK){
        LOG_INFO("del znode error... path: %s", path);
    }
    else{
        LOG_INFO("del znode success... path: %s", path);
    }
}