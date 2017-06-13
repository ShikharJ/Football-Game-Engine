cmake_minimum_required(VERSION 3.7)
project(Football-Game-Engine)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        main.cpp
        observer/ball.cpp
        observer/ball.h
        observer/iobserver.h
        observer/position.h
        observer/position.cpp)
add_executable(Football-Game-Engine ${SOURCE_FILES})