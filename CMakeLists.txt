cmake_minimum_required(VERSION 3.26)
project(lab3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab3 main.cpp
        List.h
        LinkedList.h
        ArrayList.h
        Node.h
        Iterator.h)
