cmake_minimum_required(VERSION 3.5)

project("Vector")

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 17)

add_executable(Main main.cpp)
