cmake_minimum_required(VERSION 3.9)
project(MyLibRtmp)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyLibRtmp main.cpp TcpNetworkHelper.cpp TcpNetworkHelper.h NetworkHelper.cpp NetworkHelper.h)