cmake_minimum_required(VERSION 3.28)
project(linked_list)

set(CMAKE_CXX_STANDARD 20)

add_executable(linked_list main.cpp
        single_linked_list.cpp
        single_linked_list.h
        double_linked_list.cpp
        double_linked_list.h
        node.cpp
        node.h
)
