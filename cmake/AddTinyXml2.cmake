# 
#
# Downloads GTest and provides a helper macro to add tests. Add make check, as well, which
# gives output on failed tests without having to set an environment variable.
#
#

if (CMAKE_VERSION VERSION_LESS 3.11)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")

    include(DownloadProject)
    download_project(PROJ tinyxml2
            GIT_REPOSITORY https://github.com/leethomason/tinyxml2.git
            GIT_TAG 7.0.1
            UPDATE_DISCONNECTED 1
            QUIET
            )

    # CMake warning suppression will not be needed in version 1.9
    set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1 CACHE BOOL "")
    add_subdirectory(${tinyxml2_SOURCE_DIR} ${tinyxml2_SOURCE_DIR} EXCLUDE_FROM_ALL)
    unset(CMAKE_SUPPRESS_DEVELOPER_WARNINGS)
else ()
    include(FetchContent)
    FetchContent_Declare(tinyxml2
            GIT_REPOSITORY https://github.com/leethomason/tinyxml2.git
            GIT_TAG 7.0.1)
    FetchContent_GetProperties(tinyxml2)
    if (NOT tinyxml2_POPULATED)
        FetchContent_Populate(tinyxml2)
        set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1 CACHE BOOL "")
        add_subdirectory(${tinyxml2_SOURCE_DIR} ${tinyxml2_BINARY_DIR} EXCLUDE_FROM_ALL)
        unset(CMAKE_SUPPRESS_DEVELOPER_WARNINGS)
    endif ()
endif ()


include_directories(${tinyxml2_SOURCE_DIR})


set_target_properties(tinyxml2
        PROPERTIES FOLDER "Extern")
