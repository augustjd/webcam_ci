cmake_minimum_required(VERSION 3.5)
project(webcam_solution)


add_subdirectory(webcam)


set(BUILD_TESTS on)

if (BUILD_TESTS)
    add_subdirectory(test)
    set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/.travis/cmake)
    if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
        include(CodeCoverage)
        setup_target_for_coverage(webcam_coverage webcam_tests coverage)

        SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
        SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"
endif()
