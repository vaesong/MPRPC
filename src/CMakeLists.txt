aux_source_directory(. SRC_LIST)
# 生成（静态/动态）库so或者.a文件，Windows下就是dll与lib文件
add_library(mprpc ${SRC_LIST})
# 指定链接给定目标和/或其依赖项时要使用的库。命名的<tartget>必须是由add_executable()或add_library()之类的命令创建的
target_link_libraries(mprpc muduo_net muduo_base pthread zookeeper_mt)