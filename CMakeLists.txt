cmake_minimum_required(VERSION 3.10)
# based on https://cliutils.gitlab.io/modern-cmake/

project(odrparser
        DESCRIPTION "A very simple OpenDRIVE parser"
        LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 14)

# add ./cmake to CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

# unset testing for libs
option(BUILD_TESTS "Sets or unsets the option to generate the test target" OFF)
option(BUILD_GTEST "Sets or unsets the option to build gtest manually (do not set if gtest is installed)" OFF)

# add source directory
add_subdirectory(src)

## Add tinyxml2
set(BUILD_TESTING off CACHE BOOL "" FORCE)
set(BUILD_SHARED_LIBS off CACHE BOOL "" FORCE)
add_subdirectory(lib/tinyxml2)
set_target_properties(tinyxml2 PROPERTIES FOLDER "Extern")


### GTEST
if(BUILD_TESTS)

    # enable testing and load library
    enable_testing()

    # switch (build or use installed lib)
    if(BUILD_GTEST)

        # add subdirectory
        add_subdirectory(googletest)
        set(GTEST_BOTH_LIBRARIES gtest_main)
        include_directories(${PROJECT_SOURCE_DIR}/googletest/googletest/include)

    else()

        # find gtest
        find_package(GTest REQUIRED)
        include_directories(${GTEST_INCLUDE_DIRS})

    endif()

    # load macros for test
    include(AddGoogleTest)

    # add test sources
    add_subdirectory(tests)

endif ()
