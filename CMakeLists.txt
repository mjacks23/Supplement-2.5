cmake_minimum_required(VERSION 3.10)
project(AdvancedPointers)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(AdvancedPointers src/main.cpp src/functions.cpp)
