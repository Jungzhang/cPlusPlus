cmake_minimum_required(VERSION 3.5)
project(DatabaseConnectionPool)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmysqlcppconn")

set(SOURCE_FILES main.cpp ConnectionPool.h ConnectionPool.cpp)
add_executable(DatabaseConnectionPool ${SOURCE_FILES})