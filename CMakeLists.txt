cmake_minimum_required(VERSION 3.4)
project(C___in_24_hours)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp exercises/exercise1.cpp exercises/exercise1.h exercises/hour03-exercise01.cpp)
add_executable(C___in_24_hours ${SOURCE_FILES})
add_executable(Sizer source/chapter03/Sizer.cpp)
add_executable(NewRectangle source/chapter03/NewRectangle.cpp)
add_executable(hour03-exercise01 exercises/hour03-exercise01.cpp exercises/hour03-exercise02.cpp)
add_executable(hour03-exercise02 exercises/hour03-exercise02.cpp)