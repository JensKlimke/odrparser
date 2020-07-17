FROM ubuntu:18.04
MAINTAINER Jens Klimke (jens.klimke@rwth-aachen.de)

# installation
RUN apt-get update
RUN apt-get -y install git g++ make cmake nano libpthread-stubs0-dev
RUN cmake --version && g++ --version

# copy code
COPY . /app
RUN cd /app && git submodule update --init --recursive

# prepare inta
RUN cd /app && git clone https://github.com/google/googletest

# installation
RUN rm -rf /app/build
#RUN cd /app && mkdir build && cd build && cmake -G "Unix Makefiles" \
#    -DBUILD_TESTS=ON \
#    -DBUILD_GTEST=ON \
#    -DCMAKE_BUILD_TYPE=Debug ..

# documentation, compilation, tests
#RUN cd /app/build && make
#RUN cd /app/build && make test


CMD bash