cmake_minimum_required(VERSION 3.29)
project(stack)

set(CMAKE_CXX_STANDARD 20)

add_executable(stack main.cpp
        node.cpp
        node.h
        single_linked_list.cpp
        single_linked_list.h
        linked_list_stack.cpp
        linked_list_stack.h)
