cmake_minimum_required(VERSION 2.8)
project(plater)

set (CMAKE_CXX_FLAGS "-std=c++0x -Wall -pedantic")

set(ALL_SOURCES
    modelFile/modelFile.cpp
    log.cpp

    Bitmap.cpp
    PlacedPart.cpp
    Placer.cpp
    Plate.cpp
    Part.cpp
    Rectangle.cpp
    Request.cpp
    Solution.cpp
    Triangle.cpp
    )

include_directories("${CMAKE_SOURCE_DIR}/src")

add_library(libplater ${ALL_SOURCES})

add_executable(plater "main.cpp")
target_link_libraries(plater libplater)

install(TARGETS plater DESTINATION bin)