cmake_minimum_required(VERSION 3.13)
project(LearnBoost)

set(CMAKE_CXX_STANDARD 14)

add_executable(LearnBoost
        asio/daytime1-client.cpp
        asio/daytime2-server.cpp
        asio/timer1.cpp
        asio/timer2.cpp
        asio/timer3.cpp
        asio/timer4.cpp
        asio/timer5.cpp)
