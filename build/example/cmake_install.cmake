<<<<<<< HEAD
# Install script for directory: /home/vaesong/Data/Workspace/Vscode/Mprpc/example
=======
# Install script for directory: /home/hrj/mprpc/example
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
<<<<<<< HEAD
  set(CMAKE_INSTALL_SO_NO_EXE "1")
=======
  set(CMAKE_INSTALL_SO_NO_EXE "0")
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

<<<<<<< HEAD
# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/callee/cmake_install.cmake")
=======
if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hrj/mprpc/build/example/callee/cmake_install.cmake")
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
<<<<<<< HEAD
  include("/home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller/cmake_install.cmake")
=======
  include("/home/hrj/mprpc/build/example/caller/cmake_install.cmake")
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
endif()

