# CMAKE generated file: DO NOT EDIT!
<<<<<<< HEAD
# Generated by "Unix Makefiles" Generator, CMake Version 3.18
=======
# Generated by "Unix Makefiles" Generator, CMake Version 3.14
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


<<<<<<< HEAD
# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%

=======
# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

.SUFFIXES: .hpux_make_needs_suffix_list


<<<<<<< HEAD
# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

=======
# Suppress display of executed commands.
$(VERBOSE).SILENT:


>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
<<<<<<< HEAD
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f
=======
CMAKE_COMMAND = /usr/local/cmake/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake/bin/cmake -E remove -f
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /home/vaesong/Data/Workspace/Vscode/Mprpc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vaesong/Data/Workspace/Vscode/Mprpc/build
=======
CMAKE_SOURCE_DIR = /home/hrj/mprpc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hrj/mprpc/build
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# Include any dependencies generated for this target.
include example/caller/CMakeFiles/consumer.dir/depend.make

# Include the progress variables for this target.
include example/caller/CMakeFiles/consumer.dir/progress.make

# Include the compile flags for this target's objects.
include example/caller/CMakeFiles/consumer.dir/flags.make

<<<<<<< HEAD
example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.o: ../example/caller/callfriendservice.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vaesong/Data/Workspace/Vscode/Mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.o"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/consumer.dir/callfriendservice.cc.o -c /home/vaesong/Data/Workspace/Vscode/Mprpc/example/caller/callfriendservice.cc

example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/consumer.dir/callfriendservice.cc.i"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vaesong/Data/Workspace/Vscode/Mprpc/example/caller/callfriendservice.cc > CMakeFiles/consumer.dir/callfriendservice.cc.i

example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/callfriendservice.cc.s"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vaesong/Data/Workspace/Vscode/Mprpc/example/caller/callfriendservice.cc -o CMakeFiles/consumer.dir/callfriendservice.cc.s

example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.o: ../example/friend.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vaesong/Data/Workspace/Vscode/Mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.o"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/consumer.dir/__/friend.pb.cc.o -c /home/vaesong/Data/Workspace/Vscode/Mprpc/example/friend.pb.cc

example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/consumer.dir/__/friend.pb.cc.i"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vaesong/Data/Workspace/Vscode/Mprpc/example/friend.pb.cc > CMakeFiles/consumer.dir/__/friend.pb.cc.i

example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/__/friend.pb.cc.s"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vaesong/Data/Workspace/Vscode/Mprpc/example/friend.pb.cc -o CMakeFiles/consumer.dir/__/friend.pb.cc.s

# Object files for target consumer
consumer_OBJECTS = \
"CMakeFiles/consumer.dir/callfriendservice.cc.o" \
"CMakeFiles/consumer.dir/__/friend.pb.cc.o"
=======
example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o: ../example/caller/calluserservice.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hrj/mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/consumer.dir/calluserservice.cc.o -c /home/hrj/mprpc/example/caller/calluserservice.cc

example/caller/CMakeFiles/consumer.dir/calluserservice.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/consumer.dir/calluserservice.cc.i"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hrj/mprpc/example/caller/calluserservice.cc > CMakeFiles/consumer.dir/calluserservice.cc.i

example/caller/CMakeFiles/consumer.dir/calluserservice.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/calluserservice.cc.s"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hrj/mprpc/example/caller/calluserservice.cc -o CMakeFiles/consumer.dir/calluserservice.cc.s

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o: ../example/user.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hrj/mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/consumer.dir/__/user.pb.cc.o -c /home/hrj/mprpc/example/user.pb.cc

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/consumer.dir/__/user.pb.cc.i"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hrj/mprpc/example/user.pb.cc > CMakeFiles/consumer.dir/__/user.pb.cc.i

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/__/user.pb.cc.s"
	cd /home/hrj/mprpc/build/example/caller && /opt/rh/devtoolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hrj/mprpc/example/user.pb.cc -o CMakeFiles/consumer.dir/__/user.pb.cc.s

# Object files for target consumer
consumer_OBJECTS = \
"CMakeFiles/consumer.dir/calluserservice.cc.o" \
"CMakeFiles/consumer.dir/__/user.pb.cc.o"
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# External object files for target consumer
consumer_EXTERNAL_OBJECTS =

<<<<<<< HEAD
../bin/consumer: example/caller/CMakeFiles/consumer.dir/callfriendservice.cc.o
../bin/consumer: example/caller/CMakeFiles/consumer.dir/__/friend.pb.cc.o
../bin/consumer: example/caller/CMakeFiles/consumer.dir/build.make
../bin/consumer: ../lib/libmprpc.a
../bin/consumer: example/caller/CMakeFiles/consumer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vaesong/Data/Workspace/Vscode/Mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../bin/consumer"
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/consumer.dir/link.txt --verbose=$(VERBOSE)
=======
../bin/consumer: example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o
../bin/consumer: example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o
../bin/consumer: example/caller/CMakeFiles/consumer.dir/build.make
../bin/consumer: ../lib/libmprpc.a
../bin/consumer: example/caller/CMakeFiles/consumer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hrj/mprpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../bin/consumer"
	cd /home/hrj/mprpc/build/example/caller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/consumer.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013

# Rule to build all files generated by this target.
example/caller/CMakeFiles/consumer.dir/build: ../bin/consumer

.PHONY : example/caller/CMakeFiles/consumer.dir/build

example/caller/CMakeFiles/consumer.dir/clean:
<<<<<<< HEAD
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller && $(CMAKE_COMMAND) -P CMakeFiles/consumer.dir/cmake_clean.cmake
.PHONY : example/caller/CMakeFiles/consumer.dir/clean

example/caller/CMakeFiles/consumer.dir/depend:
	cd /home/vaesong/Data/Workspace/Vscode/Mprpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vaesong/Data/Workspace/Vscode/Mprpc /home/vaesong/Data/Workspace/Vscode/Mprpc/example/caller /home/vaesong/Data/Workspace/Vscode/Mprpc/build /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller /home/vaesong/Data/Workspace/Vscode/Mprpc/build/example/caller/CMakeFiles/consumer.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /home/hrj/mprpc/build/example/caller && $(CMAKE_COMMAND) -P CMakeFiles/consumer.dir/cmake_clean.cmake
.PHONY : example/caller/CMakeFiles/consumer.dir/clean

example/caller/CMakeFiles/consumer.dir/depend:
	cd /home/hrj/mprpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hrj/mprpc /home/hrj/mprpc/example/caller /home/hrj/mprpc/build /home/hrj/mprpc/build/example/caller /home/hrj/mprpc/build/example/caller/CMakeFiles/consumer.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> 8b4baa45c5657c41a2511b6ce8cdf3a9665db013
.PHONY : example/caller/CMakeFiles/consumer.dir/depend

