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
            if(eResult == tinyxml2::XML_ERROR_FILE_NOT_FOUND)
                throw std::runtime_error("File not found!");
            else
                throw std::runtime_error("File could not be loaded!");

        // get OpenDRIVE element
        auto od = xml_doc.FirstChildElement("OpenDRIVE");
        if (od == nullptr)
            throw std::runtime_error("OpenDRIVE element bot found");

        // parse OpenDRIVE element
        data.OpenDRIVE1_5.reset(new odr1_5::OpenDRIVE);
        __parse__OpenDRIVE(od, *data.OpenDRIVE1_5);

    }

}