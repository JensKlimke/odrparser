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
