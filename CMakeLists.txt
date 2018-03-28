
cmake_minimum_required(VERSION 2.8)

project(exstl)

include_directories(include)

add_library(${PROJECT_NAME} src/exstl.cpp)
