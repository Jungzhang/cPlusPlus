cmake_minimum_required(VERSION 3.5)
project(TSHH)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread -lmysqlcppconn")

set(SOURCE_FILES main.cpp thread.cpp mutex.cpp condition.h atomic.cpp call_once.cpp asyn.cpp connecter.cpp)
add_executable(practice ${SOURCE_FILES})