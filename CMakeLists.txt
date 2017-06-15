cmake_minimum_required(VERSION 3.7)
project(Football-Game-Engine)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        main.cpp
        observer/ball.cpp
        observer/ball.h
        observer/iobserver.h
        observer/position.cpp
        observer/position.h
        observer/football.cpp
        observer/football.h
        observer/player.cpp
        observer/player.h
        observer/referee.cpp
        observer/referee.h
        strategy/teamstrategy.h
        strategy/attackstrategy.cpp
        strategy/attackstrategy.h
        strategy/defendstrategy.cpp
        strategy/defendstrategy.h
        strategy/team.cpp
        strategy/team.h)
add_executable(Football-Game-Engine ${SOURCE_FILES})