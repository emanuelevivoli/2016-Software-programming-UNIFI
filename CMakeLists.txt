cmake_minimum_required(VERSION 3.4)
project(MatrixTemplate)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES main.cpp Matrix.h MatrixException.h index_exception.h math_exception.h)
add_executable(MatrixTemplate ${SOURCE_FILES})