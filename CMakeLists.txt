cmake_minimum_required(VERSION 3.5.0)
project(c-plus-study)

set(CMAKE_CXX_STANDARD 11)

message("config types: ${CMAKE_CONFIGRATION}")

set(OUTPUT_ROOT ./output)

add_executable(unit-main src/unit-01/main.cpp)
add_executable(unit-char src/unit-01/char-string.cpp)
add_executable(unit-string src/unit-01/string.cpp)