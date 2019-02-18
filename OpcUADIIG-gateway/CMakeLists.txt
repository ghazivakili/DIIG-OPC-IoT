cmake_minimum_required(VERSION 3.5)
project(DIIGatway)
enable_language(CXX)
set(CMAKE_CXX_STANDARD 11)



FIND_LIBRARY(SNAP7_SIEMENS snap7 library
        PATHS /usr/lib)

set(SOURCE_FILES
        src/main-Gateway.cpp
        src/open62541.c
        src/open62541.h
        src/snap7.cpp)

add_executable(${PROJECT_NAME}  ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} pthread)
TARGET_LINK_LIBRARIES(${PROJECT_NAME}  snap7 ${SNAP7_SIEMENS})
#target_link_libraries(OpcUAClient ${OPC_LIBRARY_CLI})
