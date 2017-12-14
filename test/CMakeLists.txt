cmake_minimum_required(VERSION 3.5)
project(webcam_tests)


set(gtest_force_shared_crt ON CACHE BOOL "Always use msvcrt.dll" FORCE)
add_subdirectory(external/googletest)

set_target_properties(gtest PROPERTIES FOLDER gtest)
set_target_properties(gmock PROPERTIES FOLDER gtest)
set_target_properties(gtest_main PROPERTIES FOLDER gtest)
set_target_properties(gmock_main PROPERTIES FOLDER gtest)


add_executable(${PROJECT_NAME}
    src/video_format_tests.cpp
    )


target_link_libraries(${PROJECT_NAME} gtest gmock gtest_main webcam)

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER tests)
