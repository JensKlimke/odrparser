add_library(odr STATIC
        ${PROJECT_SOURCE_DIR}/include/odr/lib.h
        ${PROJECT_SOURCE_DIR}/include/odr/Attribute.h
        ${PROJECT_SOURCE_DIR}/include/odr/odr1_5_structure.h
        odr1_5.cc odr1_5.hpp
        loadFile.cc
        )

target_include_directories(odr PRIVATE ${PROJECT_SOURCE_DIR}/include ${tinyxml_SOURCE_DIR})
target_link_libraries(odr PRIVATE tinyxml2)
