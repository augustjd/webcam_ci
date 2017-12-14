cmake_minimum_required(VERSION 3.5)
project(webcam)


add_library(${PROJECT_NAME}
    src/VideoFormat.hpp
    src/VideoFormat.cpp
    )


target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    )

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER library)
