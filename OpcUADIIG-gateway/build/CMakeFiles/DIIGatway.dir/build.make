# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build

# Include any dependencies generated for this target.
include CMakeFiles/DIIGatway.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DIIGatway.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DIIGatway.dir/flags.make

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o: CMakeFiles/DIIGatway.dir/flags.make
CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o: ../src/main-Gateway.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o -c /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/main-Gateway.cpp

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/main-Gateway.cpp > CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.i

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/main-Gateway.cpp -o CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.s

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.requires:

.PHONY : CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.requires

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.provides: CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.requires
	$(MAKE) -f CMakeFiles/DIIGatway.dir/build.make CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.provides.build
.PHONY : CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.provides

CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.provides.build: CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o


CMakeFiles/DIIGatway.dir/src/open62541.c.o: CMakeFiles/DIIGatway.dir/flags.make
CMakeFiles/DIIGatway.dir/src/open62541.c.o: ../src/open62541.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DIIGatway.dir/src/open62541.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DIIGatway.dir/src/open62541.c.o   -c /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/open62541.c

CMakeFiles/DIIGatway.dir/src/open62541.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DIIGatway.dir/src/open62541.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/open62541.c > CMakeFiles/DIIGatway.dir/src/open62541.c.i

CMakeFiles/DIIGatway.dir/src/open62541.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DIIGatway.dir/src/open62541.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/open62541.c -o CMakeFiles/DIIGatway.dir/src/open62541.c.s

CMakeFiles/DIIGatway.dir/src/open62541.c.o.requires:

.PHONY : CMakeFiles/DIIGatway.dir/src/open62541.c.o.requires

CMakeFiles/DIIGatway.dir/src/open62541.c.o.provides: CMakeFiles/DIIGatway.dir/src/open62541.c.o.requires
	$(MAKE) -f CMakeFiles/DIIGatway.dir/build.make CMakeFiles/DIIGatway.dir/src/open62541.c.o.provides.build
.PHONY : CMakeFiles/DIIGatway.dir/src/open62541.c.o.provides

CMakeFiles/DIIGatway.dir/src/open62541.c.o.provides.build: CMakeFiles/DIIGatway.dir/src/open62541.c.o


CMakeFiles/DIIGatway.dir/src/snap7.cpp.o: CMakeFiles/DIIGatway.dir/flags.make
CMakeFiles/DIIGatway.dir/src/snap7.cpp.o: ../src/snap7.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DIIGatway.dir/src/snap7.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DIIGatway.dir/src/snap7.cpp.o -c /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/snap7.cpp

CMakeFiles/DIIGatway.dir/src/snap7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DIIGatway.dir/src/snap7.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/snap7.cpp > CMakeFiles/DIIGatway.dir/src/snap7.cpp.i

CMakeFiles/DIIGatway.dir/src/snap7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DIIGatway.dir/src/snap7.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/src/snap7.cpp -o CMakeFiles/DIIGatway.dir/src/snap7.cpp.s

CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.requires:

.PHONY : CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.requires

CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.provides: CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.requires
	$(MAKE) -f CMakeFiles/DIIGatway.dir/build.make CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.provides.build
.PHONY : CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.provides

CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.provides.build: CMakeFiles/DIIGatway.dir/src/snap7.cpp.o


# Object files for target DIIGatway
DIIGatway_OBJECTS = \
"CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o" \
"CMakeFiles/DIIGatway.dir/src/open62541.c.o" \
"CMakeFiles/DIIGatway.dir/src/snap7.cpp.o"

# External object files for target DIIGatway
DIIGatway_EXTERNAL_OBJECTS =

DIIGatway: CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o
DIIGatway: CMakeFiles/DIIGatway.dir/src/open62541.c.o
DIIGatway: CMakeFiles/DIIGatway.dir/src/snap7.cpp.o
DIIGatway: CMakeFiles/DIIGatway.dir/build.make
DIIGatway: /usr/lib/libsnap7.so
DIIGatway: CMakeFiles/DIIGatway.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable DIIGatway"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DIIGatway.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DIIGatway.dir/build: DIIGatway

.PHONY : CMakeFiles/DIIGatway.dir/build

CMakeFiles/DIIGatway.dir/requires: CMakeFiles/DIIGatway.dir/src/main-Gateway.cpp.o.requires
CMakeFiles/DIIGatway.dir/requires: CMakeFiles/DIIGatway.dir/src/open62541.c.o.requires
CMakeFiles/DIIGatway.dir/requires: CMakeFiles/DIIGatway.dir/src/snap7.cpp.o.requires

.PHONY : CMakeFiles/DIIGatway.dir/requires

CMakeFiles/DIIGatway.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DIIGatway.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DIIGatway.dir/clean

CMakeFiles/DIIGatway.dir/depend:
	cd /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build /home/photonextdev/workspace/DIIG-OPC-IoT/OpcUADIIG-gateway/build/CMakeFiles/DIIGatway.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DIIGatway.dir/depend

