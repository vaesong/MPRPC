<<<<<<< HEAD
# set(SRC_LIST calluserservice.cc ../user.pb.cc)
set(SRC_LIST callfriendservice.cc ../friend.pb.cc)
=======
set(SRC_LIST calluserservice.cc ../user.pb.cc)
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

add_executable(consumer ${SRC_LIST})
target_link_libraries(consumer PRIVATE mprpc protobuf pthread ${CMAKE_CXX_FLAGS})