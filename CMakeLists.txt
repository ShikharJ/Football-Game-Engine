cmake_minimum_required(VERSION 3.7)
project(Football-Game-Engine)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        main.cpp
        ObserverPattern/ball.cpp
        ObserverPattern/ball.h
        ObserverPattern/iobserver.h
        ObserverPattern/position.cpp
        ObserverPattern/position.h
        ObserverPattern/football.cpp
        ObserverPattern/football.h
        ObserverPattern/player.cpp
        ObserverPattern/player.h
        ObserverPattern/referee.cpp
        ObserverPattern/referee.h
        StrategyPattern/teamstrategy.h
        StrategyPattern/attackstrategy.cpp
        StrategyPattern/attackstrategy.h
        StrategyPattern/defendstrategy.cpp
        StrategyPattern/defendstrategy.h
        StrategyPattern/team.cpp
        StrategyPattern/team.h
        DecoratorPattern/player.cpp
        DecoratorPattern/player.h
        DecoratorPattern/fieldplayer.cpp
        DecoratorPattern/fieldplayer.h
        DecoratorPattern/goalkeeper.cpp
        DecoratorPattern/goalkeeper.h
        DecoratorPattern/playerrole.cpp
        DecoratorPattern/playerrole.h
        DecoratorPattern/forward.cpp
        DecoratorPattern/forward.h
        DecoratorPattern/midfielder.cpp
        DecoratorPattern/midfielder.h
        DecoratorPattern/defender.cpp
        DecoratorPattern/defender.h)
add_executable(Football-Game-Engine ${SOURCE_FILES})