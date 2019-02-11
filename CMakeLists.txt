cmake_minimum_required(VERSION 3.5.0)
project(c-plus-study)

set(CMAKE_CXX_STANDARD 11)

message("config types: ${CMAKE_CONFIGRATION}")

set(OUTPUT_ROOT ${PROJECT_SOURCE_DIR}/output)

add_executable(demo-1 src/demo.cpp)
add_executable(demo-2 src/demo-2.cpp)
