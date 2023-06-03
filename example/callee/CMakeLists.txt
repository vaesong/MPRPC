<<<<<<< HEAD
# set(SRC_LIST userservice.cc ../user.pb.cc)
set(SRC_LIST friendservice.cc ../friend.pb.cc)
=======
set(SRC_LIST userservice.cc ../user.pb.cc)
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

add_executable(provider ${SRC_LIST})
target_link_libraries(provider mprpc protobuf pthread)