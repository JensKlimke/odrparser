cmake_minimum_required(VERSION 3.10)
# based on https://cliutils.gitlab.io/modern-cmake/

project(OpenDRIVE-Parser VERSION 0.1
        DESCRIPTION "A very simple OpenDRIVE parser"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)


### Require out-of-source builds
file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if (EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif ()


# add ./cmake to CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})


### GTEST
enable_testing()


add_subdirectory(src)
add_subdirectory(tests)

add_executable(${PROJECT_NAME} apps/main.cpp)
target_link_libraries(${PROJECT_NAME} two)