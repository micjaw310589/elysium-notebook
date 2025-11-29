cmake_minimum_required(VERSION 4.0)
project(elysium_notebook)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(SOURCES
        src/main.cpp
        src/Entry.cpp
        src/Topic.cpp
        src/Category.cpp
)

add_executable(elysium_notebook ${SOURCES})