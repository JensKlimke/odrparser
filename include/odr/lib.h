//
// Created by Jens Klimke on 2019-04-27.
//

#ifndef OPENDRIVE_PARSER_LIB_H
#define OPENDRIVE_PARSER_LIB_H

#include <string>
#include "odr1_5_structure.h"

namespace odr {

    struct OpenDRIVEFile {
        std::vector<std::unique_ptr<OpenDRIVE>> OpenDRIVE{};
    };

    void loadFile(const std::string &filename, OpenDRIVEFile &data);

}


#endif //OPENDRIVE_PARSER_LIB_H
