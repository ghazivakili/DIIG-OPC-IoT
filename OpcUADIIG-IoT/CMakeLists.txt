cmake_minimum_required(VERSION 3.5)
project(OpcUADIIGIoTServer)
enable_language(C)
set(CMAKE_C_FLAGS "-std=c99"  )
set(CMAKE_C_FLAGS "-DUA_ARCHITECTURE_POSIX" )
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")

FIND_LIBRARY(RDKAFKA_LIBRARY rdkafka)
FIND_LIBRARY(CASSANDRA_LIBRARY cassandra)
FIND_LIBRARY(MONGODB_LIBRARY mongoclient)

set(SOURCE_FILES
        src/open62541.h
        src/open62541.c
        src/standards.h
        src/cassandradriver.h
        src/mongodbdriver.h
        src/kafkadriver.h
        src/main-server.cpp
        )


add_executable(${PROJECT_NAME}  ${SOURCE_FILES} )
target_link_libraries(${PROJECT_NAME} pthread ${RDKAFKA_LIBRARY} ${Boost_LIBRARIES} ${CASSANDRA_LIBRARY} rdkafka rt ssl crypto dl z ${MONGODB_LIBRARY} boost_thread boost_system boost_regex )
