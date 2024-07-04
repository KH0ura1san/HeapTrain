cmake_minimum_required(VERSION 3.28)
project(HeapTrain C)

set(CMAKE_C_STANDARD 23)

add_executable(HeapTrain main.c
        heap.c
        utils.c
        leak.c)
