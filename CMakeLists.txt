cmake_minimum_required(VERSION 3.9)
project(DataStructureProject)

set(CMAKE_CXX_STANDARD 11)

add_library(LinkedList LinkedList/LinkedList.cpp)
add_executable(DataStructureProject main.cpp)
target_link_libraries(DataStructureProject LinkedList)