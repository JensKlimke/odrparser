add_library(odrparser STATIC
        ${PROJECT_SOURCE_DIR}/include/odrparser/odrparser.h
        ${PROJECT_SOURCE_DIR}/include/odrparser/Attribute.h
        ${PROJECT_SOURCE_DIR}/include/odrparser/odr1_5_structure.h
        odr1_5.cc odr1_5.hpp
        loadFile.cc
        )

# include directories
target_include_directories(odrparser
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        PRIVATE
        ${tinyxml_SOURCE_DIR}
        )

# link tinyxml2
target_link_libraries(odrparser PRIVATE tinyxml2)

# set public headers
file(GLOB_RECURSE HEADER_INCLUDE_FILES "../include/odrparser/*.h")
set_target_properties(PROPERTIES
        PUBLIC_HEADER "${HEADER_INCLUDE_FILES}"
        )

# installation
include(GNUInstallDirs)

# install commands
install(TARGETS odrparser LIBRARY DESTINATION lib)
install(FILES ${HEADER_INCLUDE_FILES} DESTINATION include/odrparser)