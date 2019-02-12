CMAKE_MINIMUM_REQUIRED(VERSION 3.5.0)
PROJECT(c-plus-study)

MESSAGE("config types: ${CMAKE_CONFIGRATION}")

SET(CMAKE_CXX_STANDARD 11)

AUX_SOURCE_DIRECTORY(. DIR_UNIT_01)

ADD_EXECUTABLE(unit-main.out main.cpp)
ADD_EXECUTABLE(unit-char.out char-string.cpp)
ADD_EXECUTABLE(unit-string.out string.cpp)