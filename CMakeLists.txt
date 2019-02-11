CMAKE_MINIMUM_REQUIRED(VERSION 3.5.0)
PROJECT(c-plus-study)

MESSAGE("config types: ${CMAKE_CONFIGRATION}")

SET(CMAKE_CXX_STANDARD 11)
SET(OUTPUT_ROOT ./output)
SET(SET_TARGET_PROPERTIES ./target)
SET(CMAKE_INSTALL_PREFIX /usr/local)

ADD_EXECUTABLE(unit-main src/unit-01/main.cpp)
ADD_EXECUTABLE(unit-char src/unit-01/char-string.cpp)
ADD_EXECUTABLE(unit-string src/unit-01/string.cpp)
