//
// Created by Jens Klimke on 2019-04-27.
//

#include <string>
#include <tinyxml2.h>
#include <odr/lib.h>
#include "odr1_5.hpp"

namespace odr {

    void loadFile(const std::string &filename, OpenDRIVEFile &data) {

        // xml document
        tinyxml2::XMLDocument xml_doc;

        // load and check file
        tinyxml2::XMLError eResult = xml_doc.LoadFile(filename.c_str());
        if (eResult != tinyxml2::XML_SUCCESS)
            throw std::runtime_error("File could not be loaded!");

        __parse__OpenDRIVE((tinyxml2::XMLElement *) &xml_doc, "OpenDRIVE", data.OpenDRIVE);

    }

}