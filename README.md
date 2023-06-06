# RPC分布式框架项目
## 目录
- bin: 可执行文件
- build: 项目编译文件
- example: 框架代码使用示例
- lib: 项目库文件
- src: 源代码
- test: 测试代码
- autobuild.sh: 一键编译脚本
- CMakeList.txt: cmake 文件

## 架构图
![](https://raw.githubusercontent.com/vaesong/Images/master/20230606211316.png)

## 一些模块

整个框架的模块主要是几个

- `MprpcApplication` 模块，全局的 `Init` 函数，调用 `MprpcConfig` 模块加载配置文件，初始化整个框架
- `MprpcConfig` 模块，配置模块，加载配置
- `MprpcProvider` 模块
  - 主要是 `NotifyService` 方法来注册 RPC 服务
  - `Run` 方法用来连接 `zookeeper` 创建 `znode` 节点。创建 TcpServer 对象，绑定连接回调函数，接受消息的回调函数，发送消息的回调函数
    - 其中 `OnMessage` 回调函数用来对网络接收的 request 反序列化，分析调用的服务和方法
    - `SendRpcResponse` 回调函数绑定到 `google::protobuf::Closure* done` 指针上，重写 `google::protobuf::NewCallback` 函数来绑定。接收 response 然后序列化通过网络发送
- `Mprpcchannel` 模块，在 RPC 调用端使用，通过继承了 `google::protobuf::RpcChannel` 类，重写其 `CallMethod` 方法，用于客户端 `request` 参数对象的序列化，构建发送请求的格式，连接 `zookeeper` 获得提供服务的 ip 和 port，建立 TCP 连接，发送数据，接受序列化数据，反序列化得到 `response`
- `Mprpccontroller` 模块，调用方针对错误的情况，设置相应的错误信息，例如当调用方序列化失败的时候，或者 TCP 发送失败等
- `Logger` 模块，日志模块，采用单例模式，用于记录服务端的日志信息
- `zookeeperutil` 模块，被调用方连接后，创建 `znode` 节点，记录被调用方的 ip 和 port，调用方连接后，根据服务和方法名查询 `znode` 节点保存的数据