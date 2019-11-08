# opendrive-parser
A very simple OpenDRIVE parser

## Usage

Create with cmake and compile

    > cd <source folder>
    > mkdir build && cd build
    > cmake <your options> ..
    > make 
    ...


To load and access an OpenDRIVE file simply use the following code:

    odr::OpenDRIVEFile odrFile;
    odr::loadFile(<filename>, odrFile);
    odr1_5::OpenDRIVE *odrr = odrFile.OpenDRIVE1_5.get();
    const auto header = odrr->sub_header.get();
    std::cout << *header->_date << std::endl; // e.g. "Thu Feb  8 14:24:06 2007"
    const auto &roads = odrr->sub_road;
    std::cout << roads.size() << std::endl; // e.g. 36
    const auto &rd = odrr->sub_road.front();
    std::cout << rd.sub_lanes->sub_laneSection.size() << std::endl; // e.g. 1
    
    
## License

see LICENSE file
