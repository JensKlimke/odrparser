//
// Copyright (c) 2019 Jens Klimke <jens.klimke@rwth-aachen.de>. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// Created by Jens Klimke on 2019-04-14.
//

#ifndef PARSE_XSD_ATTRIBUTE_H
#define PARSE_XSD_ATTRIBUTE_H

#include <memory>
#include <vector>
#include <iostream>

namespace xsd {


    /**
     * @brief A wrapper class for a shared_ptr to store ODR attributes
     * @tparam T Type of the attribute
     */
    template<typename T>
    struct Attribute : public std::shared_ptr<T> {

        /**
         * Constructor
         */
        Attribute() = default;

        /**
         * Destructor
         */
        virtual ~Attribute() = default;

        /**
         * Operator to set the content. A new instance of the corresponding data type is created.
         * @param v Value of the attribute
         * @return The attribute
         */
        Attribute<T> &operator=(const T &v) {
            this->reset(new T(v));
            return *this;
        }

        /**
         * Creates a new attribute by instancing an object.
         * @return The attribute
         */
        Attribute<T> &create() {
            this->reset(new T);
            return *this;
        }

    };

    /*!< Attribute of type double */
    typedef Attribute<double> d_double;

    /*!< Attribute of type int */
    typedef Attribute<int> d_int;

    /*!< Attribute of type unsigned int */
    typedef Attribute<unsigned int> d_uint;

    /*!< Attribute of type std::string */
    typedef Attribute<std::string> d_string;

    /*!< Attribute of type float */
    typedef Attribute<float> d_float;

    /*!< A shortcut for and std::vector<T> */
    template<typename T>
    using Vector = std::vector<T>;

}


#endif //PARSE_XSD_ATTRIBUTE_H
