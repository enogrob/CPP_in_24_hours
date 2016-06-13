cmake_minimum_required(VERSION 2.8.4)
project(chapter02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Calculator2.cpp)
add_executable(chapter02 ${SOURCE_FILES})