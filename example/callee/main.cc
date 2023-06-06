#include "mprpcapplication.h"
#include "mprpcprovider.h"
#include "zookeeperutil.h"

int main(int argc, char ** argv){

    MprpcApplication::Init(argc, argv);

    ZkClient zkclient;
    zkclient.Start();
    // zkclient.Create("/Userservice", "method", sizeof("method"));
    zkclient.SetData("/Userservice", "setdata");
    std::cout << zkclient.GetData("/Userservice") << std::endl;
    zkclient.DelData("/Userservice");

    return 0;
}