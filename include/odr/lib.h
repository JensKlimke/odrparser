//
// Created by Jens Klimke on 2019-04-27.
//

#ifndef OPENDRIVE_PARSER_LIB_H
#define OPENDRIVE_PARSER_LIB_H

#include <string>
#include "odr1_5_structure.h"

namespace odr {

    const OpenDRIVE *loadFile(const std::string &filename);

}


#endif //OPENDRIVE_PARSER_LIB_H
