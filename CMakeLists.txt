cmake_minimum_required(VERSION 3.10)
# based on https://cliutils.gitlab.io/modern-cmake/

project(odrparser VERSION 0.1
        DESCRIPTION "A very simple OpenDRIVE parser"
        LANGUAGES CXX)

set(PROJECT_VERSION)
set(PROJECT_VERSION_MAJOR)
set(PROJECT_VERSION_MINOR)
set(PROJECT_VERSION_PATCH)

set(CMAKE_CXX_STANDARD 14)


# add ./cmake to CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
set(ODRPARSER_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR})


add_subdirectory(src)

## Add tinyxml2
set(BUILD_TESTING off CACHE BOOL "" FORCE)
set(BUILD_SHARED_LIBS off CACHE BOOL "" FORCE)
add_subdirectory(lib/tinyxml2)
set_target_properties(tinyxml2 PROPERTIES FOLDER "Extern")

### Check for testing
if(NOT DEFINED ODRLIB_ENABLE_TESTING)
    set(ODRLIB_ENABLE_TESTING true)
endif(NOT DEFINED ODRLIB_ENABLE_TESTING)

### GTEST
if(ODRLIB_ENABLE_TESTING)

    enable_testing()
    add_subdirectory(lib/gtest)
    include(AddGoogleTest)

    add_subdirectory(tests)

endif ()
