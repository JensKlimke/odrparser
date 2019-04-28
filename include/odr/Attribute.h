//
// Created by Jens Klimke on 2019-04-14.
//

#ifndef PARSE_XSD_ATTRIBUTE_H
#define PARSE_XSD_ATTRIBUTE_H

#include <memory>
#include <vector>
#include <iostream>

namespace xsd {


    template<typename T>
    struct Attribute : public std::shared_ptr<T> {

        Attribute() = default;

        virtual ~Attribute() = default;

        Attribute<T> &operator=(const T &v) {
            this->reset(new T(v));
            return *this;
        }

        Attribute<T> &create() {
            this->reset(new T);
            return *this;
        }

    };


    typedef Attribute<double> d_double;
    typedef Attribute<int> d_int;
    typedef Attribute<unsigned int> d_uint;
    typedef Attribute<std::string> d_string;
    typedef Attribute<float> d_float;


    template<typename T>
    using Vector = std::vector<T>;

}


#endif //PARSE_XSD_ATTRIBUTE_H
