//
// Created by Jens Klimke on 2019-04-27.
//

#ifndef OPENDRIVE_PARSER_LIB_H
#define OPENDRIVE_PARSER_LIB_H

#include <string>
//#include "odr1_4_structure.h"
#include "odr1_5_structure.h"

namespace odr {

    struct OpenDRIVEFile {
        std::shared_ptr<odr1_5::OpenDRIVE> OpenDRIVE1_5{};
//        std::shared_ptr<odr1_4::OpenDRIVE> OpenDRIVE1_4{};
    };

    void loadFile(const std::string &filename, OpenDRIVEFile &data);

}


#endif //OPENDRIVE_PARSER_LIB_H
