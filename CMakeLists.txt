cmake_minimum_required(VERSION 3.7)
project(Ass4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        archer.cpp
        archer.h
        container.cpp
        container.h
        main.cpp
        player.cpp
        player.h
        swordsman.cpp
        swordsman.h mage.h mage.cpp)

add_executable(Ass4 ${SOURCE_FILES})