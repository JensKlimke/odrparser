//
// Created by Jens Klimke on 2019-04-14.
//

#ifndef PARSE_XSD_ATTRIBUTE_H
#define PARSE_XSD_ATTRIBUTE_H

#include <memory>
#include <vector>

namespace odr {


    template<typename T>
    struct _Attribute : public std::unique_ptr<T> {

        _Attribute() = default;

        virtual ~_Attribute() = default;

        explicit _Attribute(const T &v) {
            std::unique_ptr<T>(std::make_unique<T>(v));
        }

        _Attribute<T> &operator=(const T &v) {
            this->reset(new T(v));
            return *this;
        }

    };


    template<typename T>
    struct _Vector : public _Attribute<std::vector<T>> {

        T &operator[](size_t i) {

            return *this->at(i);

        }

    };


    template<int N>
    struct _Union {

    };

}


#endif //PARSE_XSD_ATTRIBUTE_H
