cmake_minimum_required(VERSION 3.13)
project(asio)

set(CMAKE_CXX_STANDARD 14)

add_executable(asio
        timer1.cpp
        timer2.cpp
        timer3.cpp
        timer4.cpp
        timer5.cpp
        daytime1-client.cpp
        daytime2-server.cpp)
