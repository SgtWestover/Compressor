cmake_minimum_required(VERSION 3.27)
project(compressor CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(compressor Huffman.cpp
        Huffman.h
        PriorityQueue.h
        TreeNode.h)
