cmake_minimum_required(VERSION 3.29)
project(queue)

set(CMAKE_CXX_STANDARD 20)

add_executable(queue main.cpp
        linked_list_queue.cpp
        linked_list_queue.h
        node.cpp
        node.h
        single_linked_list.cpp
        single_linked_list.h
        array_queue.cpp
        array_queue.h)
