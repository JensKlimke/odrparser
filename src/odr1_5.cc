#include "odr1_5.hpp"

namespace odr {

    bool __parse__t_maxSpeed(const tinyxml2::XMLElement *elem, const std::string &name, t_maxSpeed &obj) {

// TODO

        return true;

    }

    bool __parse__e_unit(const tinyxml2::XMLElement *elem, const std::string &name, e_unit &obj) {

// TODO

        return true;

    }

    bool __parse__e_countryCode(const tinyxml2::XMLElement *elem, const std::string &name, e_countryCode &obj) {

// TODO

        return true;

    }

    bool __parse__t_header(const tinyxml2::XMLElement *elem, const std::string &name,
                           std::vector<std::unique_ptr<t_header>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_header>();
            if (e->Attribute("date") != nullptr)
                tmp->_f__date = std::string(e->Attribute("date"));
            if (e->Attribute("east") != nullptr)
                tmp->_f__east = e->DoubleAttribute("east", 0.0);
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("north") != nullptr)
                tmp->_f__north = e->DoubleAttribute("north", 0.0);
            if (e->Attribute("revMajor") != nullptr)
                tmp->_f__revMajor = e->IntAttribute("revMajor", 0);
            if (e->Attribute("revMinor") != nullptr)
                tmp->_f__revMinor = e->IntAttribute("revMinor", 0);
            if (e->Attribute("south") != nullptr)
                tmp->_f__south = e->DoubleAttribute("south", 0.0);
            if (e->Attribute("vendor") != nullptr)
                tmp->_f__vendor = std::string(e->Attribute("vendor"));
            if (e->Attribute("version") != nullptr)
                tmp->_f__version = e->FloatAttribute("version", 0.0f);
            if (e->Attribute("west") != nullptr)
                tmp->_f__west = e->DoubleAttribute("west", 0.0);
            __parse__t_header_GeoReference(e, "geoReference", tmp->_s__geoReference);
            __parse__t_header_Offset(e, "offset", tmp->_s__offset);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_header_GeoReference(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_header_GeoReference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_header_GeoReference>();

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_header_Offset(const tinyxml2::XMLElement *elem, const std::string &name,
                                  std::vector<std::unique_ptr<t_header_Offset>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_header_Offset>();
            if (e->Attribute("hdg") != nullptr)
                tmp->_f__hdg = e->FloatAttribute("hdg", 0.0f);
            if (e->Attribute("x") != nullptr)
                tmp->_f__x = e->DoubleAttribute("x", 0.0);
            if (e->Attribute("y") != nullptr)
                tmp->_f__y = e->DoubleAttribute("y", 0.0);
            if (e->Attribute("z") != nullptr)
                tmp->_f__z = e->DoubleAttribute("z", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road(const tinyxml2::XMLElement *elem, const std::string &name,
                         std::vector<std::unique_ptr<t_road>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("junction") != nullptr)
                tmp->_f__junction = std::string(e->Attribute("junction"));
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("rule") != nullptr)
                tmp->_f__rule = std::string(e->Attribute("rule"));
            __parse__t_road_elevationProfile(e, "elevationProfile", tmp->_s__elevationProfile);
            __parse__t_road_lanes(e, "lanes", tmp->_s__lanes);
            __parse__t_road_lateralProfile(e, "lateralProfile", tmp->_s__lateralProfile);
            __parse__t_road_link(e, "link", tmp->_s__link);
            __parse__t_road_objects(e, "objects", tmp->_s__objects);
            __parse__t_road_planView(e, "planView", tmp->_s__planView);
            __parse__t_road_railroad(e, "railroad", tmp->_s__railroad);
            __parse__t_road_signals(e, "signals", tmp->_s__signals);
            __parse__t_road_surface(e, "surface", tmp->_s__surface);
            __parse__t_road_type(e, "type", tmp->_s__type);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_link(const tinyxml2::XMLElement *elem, const std::string &name,
                              std::vector<std::unique_ptr<t_road_link>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_link>();
            __parse__t_road_link_neighbor(e, "neighbor", tmp->_s__neighbor);
            __parse__t_road_link_predecessorSuccessor(e, "predecessor", tmp->_s__predecessor);
            __parse__t_road_link_predecessorSuccessor(e, "successor", tmp->_s__successor);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_link_predecessorSuccessor(const tinyxml2::XMLElement *elem, const std::string &name,
                                                   std::vector<std::unique_ptr<t_road_link_predecessorSuccessor>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_link_predecessorSuccessor>();
            if (e->Attribute("contactPoint") != nullptr)
                tmp->_f__contactPoint = std::string(e->Attribute("contactPoint"));
            if (e->Attribute("elementDir") != nullptr)
                tmp->_f__elementDir = std::string(e->Attribute("elementDir"));
            if (e->Attribute("elementId") != nullptr)
                tmp->_f__elementId = std::string(e->Attribute("elementId"));
            if (e->Attribute("elementS") != nullptr)
                tmp->_f__elementS = e->DoubleAttribute("elementS", 0.0);
            if (e->Attribute("elementType") != nullptr)
                tmp->_f__elementType = std::string(e->Attribute("elementType"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_link_neighbor(const tinyxml2::XMLElement *elem, const std::string &name,
                                       std::vector<std::unique_ptr<t_road_link_neighbor>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_link_neighbor>();
            if (e->Attribute("direction") != nullptr)
                tmp->_f__direction = std::string(e->Attribute("direction"));
            if (e->Attribute("elementId") != nullptr)
                tmp->_f__elementId = std::string(e->Attribute("elementId"));
            if (e->Attribute("side") != nullptr)
                tmp->_f__side = std::string(e->Attribute("side"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_type(const tinyxml2::XMLElement *elem, const std::string &name,
                              std::vector<std::unique_ptr<t_road_type>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_type>();
            if (e->Attribute("country") != nullptr)
                // TODO: union
                if (e->Attribute("s") != nullptr)
                    tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_road_type_speed(e, "speed", tmp->_s__speed);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_type_speed(const tinyxml2::XMLElement *elem, const std::string &name,
                                    std::vector<std::unique_ptr<t_road_type_speed>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_type_speed>();
            if (e->Attribute("max") != nullptr)
                // TODO: union
                if (e->Attribute("unit") != nullptr)
                    tmp->_f__unit = std::string(e->Attribute("unit"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView(const tinyxml2::XMLElement *elem, const std::string &name,
                                  std::vector<std::unique_ptr<t_road_planView>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView>();
            __parse__t_road_planView_geometry(e, "geometry", tmp->_s__geometry);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry(const tinyxml2::XMLElement *elem, const std::string &name,
                                           std::vector<std::unique_ptr<t_road_planView_geometry>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry>();
            if (e->Attribute("hdg") != nullptr)
                tmp->_f__hdg = e->DoubleAttribute("hdg", 0.0);
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("x") != nullptr)
                tmp->_f__x = e->DoubleAttribute("x", 0.0);
            if (e->Attribute("y") != nullptr)
                tmp->_f__y = e->DoubleAttribute("y", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry_line(const tinyxml2::XMLElement *elem, const std::string &name,
                                                std::vector<std::unique_ptr<t_road_planView_geometry_line>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry_line>();

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry_spiral(const tinyxml2::XMLElement *elem, const std::string &name,
                                                  std::vector<std::unique_ptr<t_road_planView_geometry_spiral>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry_spiral>();
            if (e->Attribute("curvEnd") != nullptr)
                tmp->_f__curvEnd = e->DoubleAttribute("curvEnd", 0.0);
            if (e->Attribute("curvStart") != nullptr)
                tmp->_f__curvStart = e->DoubleAttribute("curvStart", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry_arc(const tinyxml2::XMLElement *elem, const std::string &name,
                                               std::vector<std::unique_ptr<t_road_planView_geometry_arc>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry_arc>();
            if (e->Attribute("curvature") != nullptr)
                tmp->_f__curvature = e->DoubleAttribute("curvature", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry_poly3(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_planView_geometry_poly3>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry_poly3>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_planView_geometry_paramPoly3(const tinyxml2::XMLElement *elem, const std::string &name,
                                                      std::vector<std::unique_ptr<t_road_planView_geometry_paramPoly3>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_planView_geometry_paramPoly3>();
            if (e->Attribute("aU") != nullptr)
                tmp->_f__aU = e->DoubleAttribute("aU", 0.0);
            if (e->Attribute("aV") != nullptr)
                tmp->_f__aV = e->DoubleAttribute("aV", 0.0);
            if (e->Attribute("bU") != nullptr)
                tmp->_f__bU = e->DoubleAttribute("bU", 0.0);
            if (e->Attribute("bV") != nullptr)
                tmp->_f__bV = e->DoubleAttribute("bV", 0.0);
            if (e->Attribute("cU") != nullptr)
                tmp->_f__cU = e->DoubleAttribute("cU", 0.0);
            if (e->Attribute("cV") != nullptr)
                tmp->_f__cV = e->DoubleAttribute("cV", 0.0);
            if (e->Attribute("dU") != nullptr)
                tmp->_f__dU = e->DoubleAttribute("dU", 0.0);
            if (e->Attribute("dV") != nullptr)
                tmp->_f__dV = e->DoubleAttribute("dV", 0.0);
            if (e->Attribute("pRange") != nullptr)
                tmp->_f__pRange = std::string(e->Attribute("pRange"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_elevationProfile(const tinyxml2::XMLElement *elem, const std::string &name,
                                          std::vector<std::unique_ptr<t_road_elevationProfile>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_elevationProfile>();
            __parse__t_road_elevationProfile_elevation(e, "elevation", tmp->_s__elevation);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_elevationProfile_elevation(const tinyxml2::XMLElement *elem, const std::string &name,
                                                    std::vector<std::unique_ptr<t_road_elevationProfile_elevation>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_elevationProfile_elevation>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lateralProfile(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_road_lateralProfile>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lateralProfile>();
            __parse__t_road_lateralProfile_crossfall(e, "crossfall", tmp->_s__crossfall);
            __parse__t_road_lateralProfile_shape(e, "shape", tmp->_s__shape);
            __parse__t_road_lateralProfile_superelevation(e, "superelevation", tmp->_s__superelevation);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lateralProfile_superelevation(const tinyxml2::XMLElement *elem, const std::string &name,
                                                       std::vector<std::unique_ptr<t_road_lateralProfile_superelevation>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lateralProfile_superelevation>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lateralProfile_crossfall(const tinyxml2::XMLElement *elem, const std::string &name,
                                                  std::vector<std::unique_ptr<t_road_lateralProfile_crossfall>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lateralProfile_crossfall>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("side") != nullptr)
                tmp->_f__side = std::string(e->Attribute("side"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lateralProfile_shape(const tinyxml2::XMLElement *elem, const std::string &name,
                                              std::vector<std::unique_ptr<t_road_lateralProfile_shape>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lateralProfile_shape>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes(const tinyxml2::XMLElement *elem, const std::string &name,
                               std::vector<std::unique_ptr<t_road_lanes>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes>();
            __parse__t_road_lanes_laneOffset(e, "laneOffset", tmp->_s__laneOffset);
            __parse__t_road_lanes_laneSection(e, "laneSection", tmp->_s__laneSection);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneOffset(const tinyxml2::XMLElement *elem, const std::string &name,
                                          std::vector<std::unique_ptr<t_road_lanes_laneOffset>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneOffset>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection(const tinyxml2::XMLElement *elem, const std::string &name,
                                           std::vector<std::unique_ptr<t_road_lanes_laneSection>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection>();
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("singleSide") != nullptr)
                tmp->_f__singleSide = std::string(e->Attribute("singleSide"));
            __parse__t_road_lanes_laneSection_center(e, "center", tmp->_s__center);
            __parse__t_road_lanes_laneSection_left(e, "left", tmp->_s__left);
            __parse__t_road_lanes_laneSection_right(e, "right", tmp->_s__right);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_left(const tinyxml2::XMLElement *elem, const std::string &name,
                                                std::vector<std::unique_ptr<t_road_lanes_laneSection_left>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_left>();
            __parse__t_road_lanes_laneSection_left_lane(e, "lane", tmp->_s__lane);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_center(const tinyxml2::XMLElement *elem, const std::string &name,
                                                  std::vector<std::unique_ptr<t_road_lanes_laneSection_center>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_center>();
            __parse__t_road_lanes_laneSection_center_lane(e, "lane", tmp->_s__lane);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_right(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_lanes_laneSection_right>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_right>();
            __parse__t_road_lanes_laneSection_right_lane(e, "lane", tmp->_s__lane);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_center_lane(const tinyxml2::XMLElement *elem, const std::string &name,
                                                       std::vector<std::unique_ptr<t_road_lanes_laneSection_center_lane>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_center_lane>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->IntAttribute("id", 0);
            if (e->Attribute("level") != nullptr)
                tmp->_f__level = std::string(e->Attribute("level"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_road_lanes_laneSection_lcr_lane_link(e, "link", tmp->_s__link);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark(e, "roadMark", tmp->_s__roadMark);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane(const tinyxml2::XMLElement *elem, const std::string &name,
                                                   std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane>();
            if (e->Attribute("level") != nullptr)
                tmp->_f__level = std::string(e->Attribute("level"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_road_lanes_laneSection_lr_lane_access(e, "access", tmp->_s__access);
            __parse__t_road_lanes_laneSection_lr_lane_height(e, "height", tmp->_s__height);
            __parse__t_road_lanes_laneSection_lcr_lane_link(e, "link", tmp->_s__link);
            __parse__t_road_lanes_laneSection_lr_lane_material(e, "material", tmp->_s__material);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark(e, "roadMark", tmp->_s__roadMark);
            __parse__t_road_lanes_laneSection_lr_lane_rule(e, "rule", tmp->_s__rule);
            __parse__t_road_lanes_laneSection_lr_lane_speed(e, "speed", tmp->_s__speed);
            __parse__t_road_lanes_laneSection_lr_lane_visibility(e, "visibility", tmp->_s__visibility);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_left_lane(const tinyxml2::XMLElement *elem, const std::string &name,
                                                     std::vector<std::unique_ptr<t_road_lanes_laneSection_left_lane>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_left_lane>();

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_right_lane(const tinyxml2::XMLElement *elem, const std::string &name,
                                                      std::vector<std::unique_ptr<t_road_lanes_laneSection_right_lane>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_right_lane>();

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_link(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_link>();
            __parse__t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(e, "predecessor",
                                                                                 tmp->_s__predecessor);
            __parse__t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(e, "successor", tmp->_s__successor);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(const tinyxml2::XMLElement *elem,
                                                                              const std::string &name,
                                                                              std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->IntAttribute("id", 0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_width(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_width>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_width>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_border(const tinyxml2::XMLElement *elem, const std::string &name,
                                                          std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_border>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_border>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_roadMark(const tinyxml2::XMLElement *elem, const std::string &name,
                                                             std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark>();
            if (e->Attribute("color") != nullptr)
                tmp->_f__color = std::string(e->Attribute("color"));
            if (e->Attribute("height") != nullptr)
                tmp->_f__height = e->DoubleAttribute("height", 0.0);
            if (e->Attribute("laneChange") != nullptr)
                tmp->_f__laneChange = std::string(e->Attribute("laneChange"));
            if (e->Attribute("material") != nullptr)
                tmp->_f__material = std::string(e->Attribute("material"));
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            if (e->Attribute("weight") != nullptr)
                tmp->_f__weight = std::string(e->Attribute("weight"));
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark_explicit(e, "explicit", tmp->_s__explicit);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark_sway(e, "sway", tmp->_s__sway);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark_type(e, "type", tmp->_s__type);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool
    __parse__t_road_lanes_laneSection_lcr_lane_roadMark_sway(const tinyxml2::XMLElement *elem, const std::string &name,
                                                             std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark_sway>();
            if (e->Attribute("a") != nullptr)
                tmp->_f__a = e->DoubleAttribute("a", 0.0);
            if (e->Attribute("b") != nullptr)
                tmp->_f__b = e->DoubleAttribute("b", 0.0);
            if (e->Attribute("c") != nullptr)
                tmp->_f__c = e->DoubleAttribute("c", 0.0);
            if (e->Attribute("d") != nullptr)
                tmp->_f__d = e->DoubleAttribute("d", 0.0);
            if (e->Attribute("ds") != nullptr)
                tmp->_f__ds = e->DoubleAttribute("ds", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool
    __parse__t_road_lanes_laneSection_lcr_lane_roadMark_type(const tinyxml2::XMLElement *elem, const std::string &name,
                                                             std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark_type>();
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark_type_line(e, "line", tmp->_s__line);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_roadMark_type_line(const tinyxml2::XMLElement *elem,
                                                                       const std::string &name,
                                                                       std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>();
            if (e->Attribute("color") != nullptr)
                tmp->_f__color = std::string(e->Attribute("color"));
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("rule") != nullptr)
                tmp->_f__rule = std::string(e->Attribute("rule"));
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("space") != nullptr)
                tmp->_f__space = e->DoubleAttribute("space", 0.0);
            if (e->Attribute("tOffset") != nullptr)
                tmp->_f__tOffset = e->DoubleAttribute("tOffset", 0.0);
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_roadMark_explicit(const tinyxml2::XMLElement *elem,
                                                                      const std::string &name,
                                                                      std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>();
            __parse__t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(e, "line", tmp->_s__line);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(const tinyxml2::XMLElement *elem,
                                                                           const std::string &name,
                                                                           std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>();
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("rule") != nullptr)
                tmp->_f__rule = std::string(e->Attribute("rule"));
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("tOffset") != nullptr)
                tmp->_f__tOffset = e->DoubleAttribute("tOffset", 0.0);
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_material(const tinyxml2::XMLElement *elem, const std::string &name,
                                                            std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_material>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_material>();
            if (e->Attribute("friction") != nullptr)
                tmp->_f__friction = e->DoubleAttribute("friction", 0.0);
            if (e->Attribute("roughness") != nullptr)
                tmp->_f__roughness = e->DoubleAttribute("roughness", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("surface") != nullptr)
                tmp->_f__surface = std::string(e->Attribute("surface"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_visibility(const tinyxml2::XMLElement *elem, const std::string &name,
                                                              std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_visibility>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_visibility>();
            if (e->Attribute("back") != nullptr)
                tmp->_f__back = e->DoubleAttribute("back", 0.0);
            if (e->Attribute("forward") != nullptr)
                tmp->_f__forward = e->DoubleAttribute("forward", 0.0);
            if (e->Attribute("left") != nullptr)
                tmp->_f__left = e->DoubleAttribute("left", 0.0);
            if (e->Attribute("right") != nullptr)
                tmp->_f__right = e->DoubleAttribute("right", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_speed(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_speed>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_speed>();
            if (e->Attribute("max") != nullptr)
                tmp->_f__max = e->DoubleAttribute("max", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("unit") != nullptr)
                tmp->_f__unit = std::string(e->Attribute("unit"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_access(const tinyxml2::XMLElement *elem, const std::string &name,
                                                          std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_access>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_access>();
            if (e->Attribute("restriction") != nullptr)
                tmp->_f__restriction = std::string(e->Attribute("restriction"));
            if (e->Attribute("rule") != nullptr)
                tmp->_f__rule = std::string(e->Attribute("rule"));
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_height(const tinyxml2::XMLElement *elem, const std::string &name,
                                                          std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_height>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_height>();
            if (e->Attribute("inner") != nullptr)
                tmp->_f__inner = e->DoubleAttribute("inner", 0.0);
            if (e->Attribute("outer") != nullptr)
                tmp->_f__outer = e->DoubleAttribute("outer", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_lanes_laneSection_lr_lane_rule(const tinyxml2::XMLElement *elem, const std::string &name,
                                                        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_rule>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_lanes_laneSection_lr_lane_rule>();
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("value") != nullptr)
                tmp->_f__value = std::string(e->Attribute("value"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects(const tinyxml2::XMLElement *elem, const std::string &name,
                                 std::vector<std::unique_ptr<t_road_objects>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects>();
            __parse__t_road_objects_bridge(e, "bridge", tmp->_s__bridge);
            __parse__t_road_objects_object(e, "object", tmp->_s__object);
            __parse__t_road_objects_objectReference(e, "objectReference", tmp->_s__objectReference);
            __parse__t_road_objects_tunnel(e, "tunnel", tmp->_s__tunnel);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_road_objects_object>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object>();
            if (e->Attribute("dynamic") != nullptr)
                tmp->_f__dynamic = std::string(e->Attribute("dynamic"));
            if (e->Attribute("hdg") != nullptr)
                tmp->_f__hdg = e->DoubleAttribute("hdg", 0.0);
            if (e->Attribute("height") != nullptr)
                tmp->_f__height = e->DoubleAttribute("height", 0.0);
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("orientation") != nullptr)
                tmp->_f__orientation = std::string(e->Attribute("orientation"));
            if (e->Attribute("pitch") != nullptr)
                tmp->_f__pitch = e->DoubleAttribute("pitch", 0.0);
            if (e->Attribute("radius") != nullptr)
                tmp->_f__radius = e->DoubleAttribute("radius", 0.0);
            if (e->Attribute("roll") != nullptr)
                tmp->_f__roll = e->DoubleAttribute("roll", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("subtype") != nullptr)
                tmp->_f__subtype = std::string(e->Attribute("subtype"));
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            if (e->Attribute("validLength") != nullptr)
                tmp->_f__validLength = e->DoubleAttribute("validLength", 0.0);
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            __parse__t_road_objects_object_borders(e, "borders", tmp->_s__borders);
            __parse__t_road_objects_object_markings(e, "markings", tmp->_s__markings);
            __parse__t_road_objects_object_material(e, "material", tmp->_s__material);
            __parse__t_road_objects_object_outlines_outline(e, "outline", tmp->_s__outline);
            __parse__t_road_objects_object_outlines(e, "outlines", tmp->_s__outlines);
            __parse__t_road_objects_object_parkingSpace(e, "parkingSpace", tmp->_s__parkingSpace);
            __parse__t_road_objects_object_repeat(e, "repeat", tmp->_s__repeat);
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_repeat(const tinyxml2::XMLElement *elem, const std::string &name,
                                               std::vector<std::unique_ptr<t_road_objects_object_repeat>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_repeat>();
            if (e->Attribute("distance") != nullptr)
                tmp->_f__distance = e->DoubleAttribute("distance", 0.0);
            if (e->Attribute("heightEnd") != nullptr)
                tmp->_f__heightEnd = e->DoubleAttribute("heightEnd", 0.0);
            if (e->Attribute("heightStart") != nullptr)
                tmp->_f__heightStart = e->DoubleAttribute("heightStart", 0.0);
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("lengthEnd") != nullptr)
                tmp->_f__lengthEnd = e->DoubleAttribute("lengthEnd", 0.0);
            if (e->Attribute("lengthStart") != nullptr)
                tmp->_f__lengthStart = e->DoubleAttribute("lengthStart", 0.0);
            if (e->Attribute("radiusEnd") != nullptr)
                tmp->_f__radiusEnd = e->DoubleAttribute("radiusEnd", 0.0);
            if (e->Attribute("radiusStart") != nullptr)
                tmp->_f__radiusStart = e->DoubleAttribute("radiusStart", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("tEnd") != nullptr)
                tmp->_f__tEnd = e->DoubleAttribute("tEnd", 0.0);
            if (e->Attribute("tStart") != nullptr)
                tmp->_f__tStart = e->DoubleAttribute("tStart", 0.0);
            if (e->Attribute("widthEnd") != nullptr)
                tmp->_f__widthEnd = e->DoubleAttribute("widthEnd", 0.0);
            if (e->Attribute("widthStart") != nullptr)
                tmp->_f__widthStart = e->DoubleAttribute("widthStart", 0.0);
            if (e->Attribute("zOffsetEnd") != nullptr)
                tmp->_f__zOffsetEnd = e->DoubleAttribute("zOffsetEnd", 0.0);
            if (e->Attribute("zOffsetStart") != nullptr)
                tmp->_f__zOffsetStart = e->DoubleAttribute("zOffsetStart", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_outlines(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_objects_object_outlines>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_outlines>();
            __parse__t_road_objects_object_outlines_outline(e, "outline", tmp->_s__outline);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_outlines_outline(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_objects_object_outlines_outline>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_outlines_outline>();
            if (e->Attribute("closed") != nullptr)
                tmp->_f__closed = std::string(e->Attribute("closed"));
            if (e->Attribute("fillType") != nullptr)
                tmp->_f__fillType = std::string(e->Attribute("fillType"));
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->UnsignedAttribute("id", 0);
            if (e->Attribute("laneType") != nullptr)
                tmp->_f__laneType = std::string(e->Attribute("laneType"));
            if (e->Attribute("outer") != nullptr)
                tmp->_f__outer = std::string(e->Attribute("outer"));
            __parse__t_road_objects_object_outlines_outline_cornerLocal(e, "cornerLocal", tmp->_s__cornerLocal);
            __parse__t_road_objects_object_outlines_outline_cornerRoad(e, "cornerRoad", tmp->_s__cornerRoad);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_outlines_outline_cornerRoad(const tinyxml2::XMLElement *elem,
                                                                    const std::string &name,
                                                                    std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerRoad>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_outlines_outline_cornerRoad>();
            if (e->Attribute("dz") != nullptr)
                tmp->_f__dz = e->DoubleAttribute("dz", 0.0);
            if (e->Attribute("height") != nullptr)
                tmp->_f__height = e->DoubleAttribute("height", 0.0);
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->UnsignedAttribute("id", 0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_outlines_outline_cornerLocal(const tinyxml2::XMLElement *elem,
                                                                     const std::string &name,
                                                                     std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerLocal>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_outlines_outline_cornerLocal>();
            if (e->Attribute("height") != nullptr)
                tmp->_f__height = e->DoubleAttribute("height", 0.0);
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->UnsignedAttribute("id", 0);
            if (e->Attribute("u") != nullptr)
                tmp->_f__u = e->DoubleAttribute("u", 0.0);
            if (e->Attribute("v") != nullptr)
                tmp->_f__v = e->DoubleAttribute("v", 0.0);
            if (e->Attribute("z") != nullptr)
                tmp->_f__z = e->DoubleAttribute("z", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_material(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_objects_object_material>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_material>();
            if (e->Attribute("friction") != nullptr)
                tmp->_f__friction = e->DoubleAttribute("friction", 0.0);
            if (e->Attribute("roughness") != nullptr)
                tmp->_f__roughness = e->DoubleAttribute("roughness", 0.0);
            if (e->Attribute("surface") != nullptr)
                tmp->_f__surface = std::string(e->Attribute("surface"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_laneValidity(const tinyxml2::XMLElement *elem, const std::string &name,
                                                     std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_laneValidity>();
            if (e->Attribute("fromLane") != nullptr)
                tmp->_f__fromLane = e->IntAttribute("fromLane", 0);
            if (e->Attribute("toLane") != nullptr)
                tmp->_f__toLane = e->IntAttribute("toLane", 0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_parkingSpace(const tinyxml2::XMLElement *elem, const std::string &name,
                                                     std::vector<std::unique_ptr<t_road_objects_object_parkingSpace>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_parkingSpace>();
            if (e->Attribute("access") != nullptr)
                tmp->_f__access = std::string(e->Attribute("access"));
            if (e->Attribute("restrictions") != nullptr)
                tmp->_f__restrictions = std::string(e->Attribute("restrictions"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_markings(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_objects_object_markings>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_markings>();
            __parse__t_road_objects_object_markings_marking(e, "marking", tmp->_s__marking);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_markings_marking(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_objects_object_markings_marking>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_markings_marking>();
            if (e->Attribute("color") != nullptr)
                tmp->_f__color = std::string(e->Attribute("color"));
            if (e->Attribute("lineLength") != nullptr)
                tmp->_f__lineLength = e->DoubleAttribute("lineLength", 0.0);
            if (e->Attribute("side") != nullptr)
                tmp->_f__side = std::string(e->Attribute("side"));
            if (e->Attribute("spaceLength") != nullptr)
                tmp->_f__spaceLength = e->DoubleAttribute("spaceLength", 0.0);
            if (e->Attribute("startOffset") != nullptr)
                tmp->_f__startOffset = e->DoubleAttribute("startOffset", 0.0);
            if (e->Attribute("stopOffset") != nullptr)
                tmp->_f__stopOffset = e->DoubleAttribute("stopOffset", 0.0);
            if (e->Attribute("weight") != nullptr)
                tmp->_f__weight = std::string(e->Attribute("weight"));
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            __parse__t_road_objects_object_markings_marking_cornerReference(e, "cornerReference",
                                                                            tmp->_s__cornerReference);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_markings_marking_cornerReference(const tinyxml2::XMLElement *elem,
                                                                         const std::string &name,
                                                                         std::vector<std::unique_ptr<t_road_objects_object_markings_marking_cornerReference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_markings_marking_cornerReference>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = e->UnsignedAttribute("id", 0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_borders(const tinyxml2::XMLElement *elem, const std::string &name,
                                                std::vector<std::unique_ptr<t_road_objects_object_borders>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_borders>();
            __parse__t_road_objects_object_borders_border(e, "border", tmp->_s__border);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_object_borders_border(const tinyxml2::XMLElement *elem, const std::string &name,
                                                       std::vector<std::unique_ptr<t_road_objects_object_borders_border>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_object_borders_border>();
            if (e->Attribute("outlineId") != nullptr)
                tmp->_f__outlineId = e->UnsignedAttribute("outlineId", 0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            if (e->Attribute("useCompleteOutline") != nullptr)
                tmp->_f__useCompleteOutline = std::string(e->Attribute("useCompleteOutline"));
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            __parse__t_road_objects_object_markings_marking_cornerReference(e, "cornerReference",
                                                                            tmp->_s__cornerReference);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_objectReference(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_objects_objectReference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_objectReference>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("orientation") != nullptr)
                tmp->_f__orientation = std::string(e->Attribute("orientation"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);
            if (e->Attribute("validLength") != nullptr)
                tmp->_f__validLength = e->DoubleAttribute("validLength", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_tunnel(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_road_objects_tunnel>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_tunnel>();
            if (e->Attribute("daylight") != nullptr)
                tmp->_f__daylight = e->DoubleAttribute("daylight", 0.0);
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("lighting") != nullptr)
                tmp->_f__lighting = e->DoubleAttribute("lighting", 0.0);
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_objects_bridge(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_road_objects_bridge>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_objects_bridge>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("length") != nullptr)
                tmp->_f__length = e->DoubleAttribute("length", 0.0);
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals(const tinyxml2::XMLElement *elem, const std::string &name,
                                 std::vector<std::unique_ptr<t_road_signals>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals>();
            __parse__t_road_signals_signal(e, "signal", tmp->_s__signal);
            __parse__t_road_signals_signalReference(e, "signalReference", tmp->_s__signalReference);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signal(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_road_signals_signal>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signal>();
            if (e->Attribute("country") != nullptr)
                // TODO: union
                if (e->Attribute("countryRevision") != nullptr)
                    tmp->_f__countryRevision = std::string(e->Attribute("countryRevision"));
            if (e->Attribute("dynamic") != nullptr)
                tmp->_f__dynamic = std::string(e->Attribute("dynamic"));
            if (e->Attribute("hOffset") != nullptr)
                tmp->_f__hOffset = e->DoubleAttribute("hOffset", 0.0);
            if (e->Attribute("height") != nullptr)
                tmp->_f__height = e->DoubleAttribute("height", 0.0);
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("orientation") != nullptr)
                tmp->_f__orientation = std::string(e->Attribute("orientation"));
            if (e->Attribute("pitch") != nullptr)
                tmp->_f__pitch = e->DoubleAttribute("pitch", 0.0);
            if (e->Attribute("roll") != nullptr)
                tmp->_f__roll = e->DoubleAttribute("roll", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("subtype") != nullptr)
                tmp->_f__subtype = std::string(e->Attribute("subtype"));
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);
            if (e->Attribute("text") != nullptr)
                tmp->_f__text = std::string(e->Attribute("text"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            if (e->Attribute("unit") != nullptr)
                // TODO: union
                if (e->Attribute("value") != nullptr)
                    tmp->_f__value = e->DoubleAttribute("value", 0.0);
            if (e->Attribute("width") != nullptr)
                tmp->_f__width = e->DoubleAttribute("width", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            __parse__t_road_signals_signal_dependency(e, "dependency", tmp->_s__dependency);
            __parse__t_road_signals_signal_reference(e, "reference", tmp->_s__reference);
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signal_dependency(const tinyxml2::XMLElement *elem, const std::string &name,
                                                   std::vector<std::unique_ptr<t_road_signals_signal_dependency>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signal_dependency>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signal_reference(const tinyxml2::XMLElement *elem, const std::string &name,
                                                  std::vector<std::unique_ptr<t_road_signals_signal_reference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signal_reference>();
            if (e->Attribute("elementId") != nullptr)
                tmp->_f__elementId = std::string(e->Attribute("elementId"));
            if (e->Attribute("elementType") != nullptr)
                tmp->_f__elementType = std::string(e->Attribute("elementType"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signal_positionRoad(const tinyxml2::XMLElement *elem, const std::string &name,
                                                     std::vector<std::unique_ptr<t_road_signals_signal_positionRoad>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signal_positionRoad>();
            if (e->Attribute("hOffset") != nullptr)
                tmp->_f__hOffset = e->DoubleAttribute("hOffset", 0.0);
            if (e->Attribute("pitch") != nullptr)
                tmp->_f__pitch = e->DoubleAttribute("pitch", 0.0);
            if (e->Attribute("roadId") != nullptr)
                tmp->_f__roadId = std::string(e->Attribute("roadId"));
            if (e->Attribute("roll") != nullptr)
                tmp->_f__roll = e->DoubleAttribute("roll", 0.0);
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signal_positionInertial(const tinyxml2::XMLElement *elem, const std::string &name,
                                                         std::vector<std::unique_ptr<t_road_signals_signal_positionInertial>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signal_positionInertial>();
            if (e->Attribute("hdg") != nullptr)
                tmp->_f__hdg = e->DoubleAttribute("hdg", 0.0);
            if (e->Attribute("pitch") != nullptr)
                tmp->_f__pitch = e->DoubleAttribute("pitch", 0.0);
            if (e->Attribute("roll") != nullptr)
                tmp->_f__roll = e->DoubleAttribute("roll", 0.0);
            if (e->Attribute("x") != nullptr)
                tmp->_f__x = e->DoubleAttribute("x", 0.0);
            if (e->Attribute("y") != nullptr)
                tmp->_f__y = e->DoubleAttribute("y", 0.0);
            if (e->Attribute("z") != nullptr)
                tmp->_f__z = e->DoubleAttribute("z", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_signals_signalReference(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_signals_signalReference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_signals_signalReference>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("orientation") != nullptr)
                tmp->_f__orientation = std::string(e->Attribute("orientation"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);
            if (e->Attribute("t") != nullptr)
                tmp->_f__t = e->DoubleAttribute("t", 0.0);
            __parse__t_road_objects_object_laneValidity(e, "validity", tmp->_s__validity);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_surface(const tinyxml2::XMLElement *elem, const std::string &name,
                                 std::vector<std::unique_ptr<t_road_surface>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_surface>();
            __parse__t_road_surface_CRG(e, "CRG", tmp->_s__CRG);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_surface_CRG(const tinyxml2::XMLElement *elem, const std::string &name,
                                     std::vector<std::unique_ptr<t_road_surface_CRG>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_surface_CRG>();
            if (e->Attribute("file") != nullptr)
                tmp->_f__file = std::string(e->Attribute("file"));
            if (e->Attribute("hOffset") != nullptr)
                tmp->_f__hOffset = e->DoubleAttribute("hOffset", 0.0);
            if (e->Attribute("mode") != nullptr)
                tmp->_f__mode = std::string(e->Attribute("mode"));
            if (e->Attribute("orientation") != nullptr)
                tmp->_f__orientation = std::string(e->Attribute("orientation"));
            if (e->Attribute("purpose") != nullptr)
                tmp->_f__purpose = std::string(e->Attribute("purpose"));
            if (e->Attribute("sEnd") != nullptr)
                tmp->_f__sEnd = e->DoubleAttribute("sEnd", 0.0);
            if (e->Attribute("sOffset") != nullptr)
                tmp->_f__sOffset = e->DoubleAttribute("sOffset", 0.0);
            if (e->Attribute("sStart") != nullptr)
                tmp->_f__sStart = e->DoubleAttribute("sStart", 0.0);
            if (e->Attribute("tOffset") != nullptr)
                tmp->_f__tOffset = e->DoubleAttribute("tOffset", 0.0);
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            if (e->Attribute("zScale") != nullptr)
                tmp->_f__zScale = e->DoubleAttribute("zScale", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_railroad(const tinyxml2::XMLElement *elem, const std::string &name,
                                  std::vector<std::unique_ptr<t_road_railroad>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_railroad>();
            __parse__t_road_railroad_switch(e, "switch", tmp->_s__switch);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_railroad_switch(const tinyxml2::XMLElement *elem, const std::string &name,
                                         std::vector<std::unique_ptr<t_road_railroad_switch>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_railroad_switch>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("position") != nullptr)
                tmp->_f__position = std::string(e->Attribute("position"));
            __parse__t_road_railroad_switch_mainTrack(e, "mainTrack", tmp->_s__mainTrack);
            __parse__t_road_railroad_switch_partner(e, "partner", tmp->_s__partner);
            __parse__t_road_railroad_switch_sideTrack(e, "sideTrack", tmp->_s__sideTrack);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_railroad_switch_mainTrack(const tinyxml2::XMLElement *elem, const std::string &name,
                                                   std::vector<std::unique_ptr<t_road_railroad_switch_mainTrack>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_railroad_switch_mainTrack>();
            if (e->Attribute("dir") != nullptr)
                tmp->_f__dir = std::string(e->Attribute("dir"));
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_railroad_switch_sideTrack(const tinyxml2::XMLElement *elem, const std::string &name,
                                                   std::vector<std::unique_ptr<t_road_railroad_switch_sideTrack>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_railroad_switch_sideTrack>();
            if (e->Attribute("dir") != nullptr)
                tmp->_f__dir = std::string(e->Attribute("dir"));
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("s") != nullptr)
                tmp->_f__s = e->DoubleAttribute("s", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_road_railroad_switch_partner(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_road_railroad_switch_partner>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_road_railroad_switch_partner>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_controller(const tinyxml2::XMLElement *elem, const std::string &name,
                               std::vector<std::unique_ptr<t_controller>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_controller>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("sequence") != nullptr)
                tmp->_f__sequence = e->UnsignedAttribute("sequence", 0);
            __parse__t_controller_control(e, "control", tmp->_s__control);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_controller_control(const tinyxml2::XMLElement *elem, const std::string &name,
                                       std::vector<std::unique_ptr<t_controller_control>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_controller_control>();
            if (e->Attribute("signalId") != nullptr)
                tmp->_f__signalId = std::string(e->Attribute("signalId"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction(const tinyxml2::XMLElement *elem, const std::string &name,
                             std::vector<std::unique_ptr<t_junction>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_junction_connection(e, "connection", tmp->_s__connection);
            __parse__t_junction_controller(e, "controller", tmp->_s__controller);
            __parse__t_junction_priority(e, "priority", tmp->_s__priority);
            __parse__t_junction_surface(e, "surface", tmp->_s__surface);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_connection(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_junction_connection>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_connection>();
            if (e->Attribute("connectingRoad") != nullptr)
                tmp->_f__connectingRoad = std::string(e->Attribute("connectingRoad"));
            if (e->Attribute("connectionMaster") != nullptr)
                tmp->_f__connectionMaster = std::string(e->Attribute("connectionMaster"));
            if (e->Attribute("contactPoint") != nullptr)
                tmp->_f__contactPoint = std::string(e->Attribute("contactPoint"));
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("incomingRoad") != nullptr)
                tmp->_f__incomingRoad = std::string(e->Attribute("incomingRoad"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_junction_connection_laneLink(e, "laneLink", tmp->_s__laneLink);
            __parse__t_junction_predecessorSuccessor(e, "predecessor", tmp->_s__predecessor);
            __parse__t_junction_predecessorSuccessor(e, "successor", tmp->_s__successor);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_predecessorSuccessor(const tinyxml2::XMLElement *elem, const std::string &name,
                                                  std::vector<std::unique_ptr<t_junction_predecessorSuccessor>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_predecessorSuccessor>();
            if (e->Attribute("elementDir") != nullptr)
                tmp->_f__elementDir = std::string(e->Attribute("elementDir"));
            if (e->Attribute("elementId") != nullptr)
                tmp->_f__elementId = std::string(e->Attribute("elementId"));
            if (e->Attribute("elementS") != nullptr)
                tmp->_f__elementS = e->DoubleAttribute("elementS", 0.0);
            if (e->Attribute("elementType") != nullptr)
                tmp->_f__elementType = std::string(e->Attribute("elementType"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_connection_laneLink(const tinyxml2::XMLElement *elem, const std::string &name,
                                                 std::vector<std::unique_ptr<t_junction_connection_laneLink>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_connection_laneLink>();
            if (e->Attribute("from") != nullptr)
                tmp->_f__from = e->IntAttribute("from", 0);
            if (e->Attribute("to") != nullptr)
                tmp->_f__to = e->IntAttribute("to", 0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_priority(const tinyxml2::XMLElement *elem, const std::string &name,
                                      std::vector<std::unique_ptr<t_junction_priority>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_priority>();
            if (e->Attribute("high") != nullptr)
                tmp->_f__high = std::string(e->Attribute("high"));
            if (e->Attribute("low") != nullptr)
                tmp->_f__low = std::string(e->Attribute("low"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_controller(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_junction_controller>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_controller>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("sequence") != nullptr)
                tmp->_f__sequence = e->UnsignedAttribute("sequence", 0);
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_surface(const tinyxml2::XMLElement *elem, const std::string &name,
                                     std::vector<std::unique_ptr<t_junction_surface>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_surface>();
            __parse__t_junction_surface_CRG(e, "CRG", tmp->_s__CRG);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junction_surface_CRG(const tinyxml2::XMLElement *elem, const std::string &name,
                                         std::vector<std::unique_ptr<t_junction_surface_CRG>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junction_surface_CRG>();
            if (e->Attribute("file") != nullptr)
                tmp->_f__file = std::string(e->Attribute("file"));
            if (e->Attribute("mode") != nullptr)
                tmp->_f__mode = std::string(e->Attribute("mode"));
            if (e->Attribute("purpose") != nullptr)
                tmp->_f__purpose = std::string(e->Attribute("purpose"));
            if (e->Attribute("zOffset") != nullptr)
                tmp->_f__zOffset = e->DoubleAttribute("zOffset", 0.0);
            if (e->Attribute("zScale") != nullptr)
                tmp->_f__zScale = e->DoubleAttribute("zScale", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junctionGroup(const tinyxml2::XMLElement *elem, const std::string &name,
                                  std::vector<std::unique_ptr<t_junctionGroup>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junctionGroup>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_junctionGroup_junctionReference(e, "junctionReference", tmp->_s__junctionReference);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_junctionGroup_junctionReference(const tinyxml2::XMLElement *elem, const std::string &name,
                                                    std::vector<std::unique_ptr<t_junctionGroup_junctionReference>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_junctionGroup_junctionReference>();
            if (e->Attribute("junction") != nullptr)
                tmp->_f__junction = std::string(e->Attribute("junction"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_station(const tinyxml2::XMLElement *elem, const std::string &name,
                            std::vector<std::unique_ptr<t_station>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_station>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            if (e->Attribute("type") != nullptr)
                tmp->_f__type = std::string(e->Attribute("type"));
            __parse__t_station_platform(e, "platform", tmp->_s__platform);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_station_platform(const tinyxml2::XMLElement *elem, const std::string &name,
                                     std::vector<std::unique_ptr<t_station_platform>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_station_platform>();
            if (e->Attribute("id") != nullptr)
                tmp->_f__id = std::string(e->Attribute("id"));
            if (e->Attribute("name") != nullptr)
                tmp->_f__name = std::string(e->Attribute("name"));
            __parse__t_station_platform_segment(e, "segment", tmp->_s__segment);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_station_platform_segment(const tinyxml2::XMLElement *elem, const std::string &name,
                                             std::vector<std::unique_ptr<t_station_platform_segment>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_station_platform_segment>();
            if (e->Attribute("roadId") != nullptr)
                tmp->_f__roadId = std::string(e->Attribute("roadId"));
            if (e->Attribute("sEnd") != nullptr)
                tmp->_f__sEnd = e->DoubleAttribute("sEnd", 0.0);
            if (e->Attribute("sStart") != nullptr)
                tmp->_f__sStart = e->DoubleAttribute("sStart", 0.0);
            if (e->Attribute("side") != nullptr)
                tmp->_f__side = std::string(e->Attribute("side"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_userData(const tinyxml2::XMLElement *elem, const std::string &name,
                             std::vector<std::unique_ptr<t_userData>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_userData>();
            if (e->Attribute("code") != nullptr)
                tmp->_f__code = std::string(e->Attribute("code"));
            if (e->Attribute("value") != nullptr)
                tmp->_f__value = std::string(e->Attribute("value"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_include(const tinyxml2::XMLElement *elem, const std::string &name,
                            std::vector<std::unique_ptr<t_include>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_include>();
            if (e->Attribute("file") != nullptr)
                tmp->_f__file = std::string(e->Attribute("file"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_dataQuality(const tinyxml2::XMLElement *elem, const std::string &name,
                                std::vector<std::unique_ptr<t_dataQuality>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_dataQuality>();
            __parse__t_dataQuality_Error(e, "error", tmp->_s__error);
            __parse__t_dataQuality_RawData(e, "rawData", tmp->_s__rawData);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_dataQuality_Error(const tinyxml2::XMLElement *elem, const std::string &name,
                                      std::vector<std::unique_ptr<t_dataQuality_Error>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_dataQuality_Error>();
            if (e->Attribute("xyAbsolute") != nullptr)
                tmp->_f__xyAbsolute = e->DoubleAttribute("xyAbsolute", 0.0);
            if (e->Attribute("xyRelative") != nullptr)
                tmp->_f__xyRelative = e->DoubleAttribute("xyRelative", 0.0);
            if (e->Attribute("zAbsolute") != nullptr)
                tmp->_f__zAbsolute = e->DoubleAttribute("zAbsolute", 0.0);
            if (e->Attribute("zRelative") != nullptr)
                tmp->_f__zRelative = e->DoubleAttribute("zRelative", 0.0);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__t_dataQuality_RawData(const tinyxml2::XMLElement *elem, const std::string &name,
                                        std::vector<std::unique_ptr<t_dataQuality_RawData>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<t_dataQuality_RawData>();
            if (e->Attribute("date") != nullptr)
                tmp->_f__date = std::string(e->Attribute("date"));
            if (e->Attribute("postProcessing") != nullptr)
                tmp->_f__postProcessing = std::string(e->Attribute("postProcessing"));
            if (e->Attribute("postProcessingComment") != nullptr)
                tmp->_f__postProcessingComment = std::string(e->Attribute("postProcessingComment"));
            if (e->Attribute("source") != nullptr)
                tmp->_f__source = std::string(e->Attribute("source"));
            if (e->Attribute("sourceComment") != nullptr)
                tmp->_f__sourceComment = std::string(e->Attribute("sourceComment"));

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

    bool __parse__OpenDRIVE(const tinyxml2::XMLElement *elem, const std::string &name,
                            std::vector<std::unique_ptr<OpenDRIVE>> &obj) {


        auto e = elem->FirstChildElement(name.c_str());
        size_t i = 0;
        while (e != nullptr) {

            auto tmp = std::make_unique<OpenDRIVE>();
            __parse__t_controller(e, "controller", tmp->_s__controller);
            __parse__t_header(e, "header", tmp->_s__header);
            __parse__t_junction(e, "junction", tmp->_s__junction);
            __parse__t_junctionGroup(e, "junctionGroup", tmp->_s__junctionGroup);
            __parse__t_road(e, "road", tmp->_s__road);
            __parse__t_station(e, "station", tmp->_s__station);

            obj.emplace_back(std::move(tmp));

            i++;
            e = e->NextSiblingElement(name.c_str());
        }

        return true;

    }

} // namespace