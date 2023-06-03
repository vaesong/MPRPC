#设置 cmake 的最低版本和项目名称
<<<<<<< HEAD
cmake_minimum_required(VERSION 3.18)
=======
cmake_minimum_required(VERSION 3.14)
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
project(myrpc)

#生成 debug 版本。可以进行gdb调试
set(CMAKE_BUILD_TYPE "Debug")

# 设置生成的时候的栈空间
# add_compile_options(-Wl,--stack-size=4194304)
<<<<<<< HEAD
# set(CMAKE_CXX_FLAGS "-Wl,-z,stack-size=4194304")
=======
set(CMAKE_CXX_FLAGS "-Wl,-z,stack-size=4194304")

>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# 设置项目可执行文件输出的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 设置项目库文件输出的路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 设置项目编译头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/example)

# 设置项目库文件搜索路径 -L
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(example)
