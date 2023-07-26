cmake_minimum_required(VERSION 3.25)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(基础课程)
include_directories(基础课程/async-copy)
include_directories(基础课程/hello-world)
include_directories(/usr/local/include)

add_executable(cpp_learn
        基础课程/async-copy/main.cpp
        基础课程/hello-world/main.cpp)
