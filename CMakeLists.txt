cmake_minimum_required(VERSION 3.22.1)
project(wallppaper)

set(CMAKE_CXX_STANDARD 20)

add_executable(wallppaper main.cpp)

target_link_libraries(wallppaper PRIVATE)