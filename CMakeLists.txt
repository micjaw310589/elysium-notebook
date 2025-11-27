cmake_minimum_required(VERSION 4.0)
project(elysium_notebook)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(SOURCES
    src/main.cpp
        src/Entry.cpp
        src/Topic.cpp
        include/Topic.h
        src/Category.cpp
        include/Category.h
)

add_executable(elysium_notebook ${SOURCES})