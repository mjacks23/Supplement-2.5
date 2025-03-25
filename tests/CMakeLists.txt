cmake_minimum_required(VERSION 3.10)
project(AdvancedPointers_Tests)

set(CMAKE_CXX_STANDARD 17)

include_directories(../include)

add_executable(tests tests.cpp ../src/functions.cpp)
