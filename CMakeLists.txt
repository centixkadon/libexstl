
cmake_minimum_required(VERSION 2.8)

project(exstl)

find_package(Threads REQUIRED)

include_directories(include)

add_library(${PROJECT_NAME} src/exstl.cpp)
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
