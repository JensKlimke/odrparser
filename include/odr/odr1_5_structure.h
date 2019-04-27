//
// Created by Jens Klimke on 2019-04-27.
//

#ifndef OPENDRIVE_PARSER_ODR1_5_STRUCTURE_H
#define OPENDRIVE_PARSER_ODR1_5_STRUCTURE_H

#include "Attribute.h"

namespace odr {

    typedef _Attribute<double> t_grEqZero;
    typedef _Attribute<double> t_grZero;
    typedef _Attribute<double> t_zeroOne;
    typedef _Attribute<std::string> t_bool;
    typedef _Attribute<std::string> t_yesNo;
    typedef _Attribute<float> t_header_Version;
    typedef _Attribute<std::string> e_maxSpeedString;
    typedef _Attribute<std::string> t_junction_id;
    typedef _Attribute<std::string> e_trafficRule;
    typedef _Attribute<std::string> e_road_link_elementType;
    typedef _Attribute<std::string> e_road_link_neighbor_side;
    typedef _Attribute<std::string> e_paramPoly3_pRange;
    typedef _Attribute<std::string> e_road_lateralProfile_crossfall_side;
    typedef _Attribute<std::string> e_road_lanes_laneSection_lcr_lane_roadMark_laneChange;
    typedef _Attribute<std::string> e_road_lanes_laneSection_lr_lane_access_rule;
    typedef _Attribute<std::string> e_road_objects_object_parkingSpace_access;
    typedef _Attribute<std::string> e_road_signals_signal_reference_elementType;
    typedef _Attribute<std::string> e_road_surface_CRG_purpose;
    typedef _Attribute<std::string> e_road_surface_CRG_mode;
    typedef _Attribute<std::string> e_road_railroad_switch_position;
    typedef _Attribute<std::string> e_junction_type;
    typedef _Attribute<std::string> e_junctionGroup_type;
    typedef _Attribute<std::string> e_station_type;
    typedef _Attribute<std::string> e_station_platform_segment_side;
    typedef _Attribute<std::string> e_dataQuality_RawData_Source;
    typedef _Attribute<std::string> e_dataQuality_RawData_PostProcessing;
    typedef _Attribute<std::string> e_unitDistance;
    typedef _Attribute<std::string> e_unitSpeed;
    typedef _Attribute<std::string> e_unitMass;
    typedef _Attribute<std::string> e_unitSlope;
    typedef _Attribute<std::string> e_roadType;
    typedef _Attribute<std::string> e_roadMarkType;
    typedef _Attribute<std::string> e_roadMarkWeight;
    typedef _Attribute<std::string> e_roadMarkColor;
    typedef _Attribute<std::string> e_laneType;
    typedef _Attribute<std::string> e_objectType;
    typedef _Attribute<std::string> e_tunnelType;
    typedef _Attribute<std::string> e_bridgeType;
    typedef _Attribute<std::string> e_accessRestrictionType;
    typedef _Attribute<std::string> e_countryCode_deprecated;
    typedef _Attribute<std::string> e_countryCode_iso3166alpha3;
    typedef _Attribute<std::string> e_sideType;
    typedef _Attribute<std::string> e_outlineFillType;
    typedef _Attribute<std::string> e_borderType;
    typedef _Attribute<std::string> e_contactPoint;
    typedef _Attribute<std::string> e_elementDir;
    typedef _Attribute<std::string> e_direction;
    typedef _Attribute<std::string> e_roadMarkRule;
    typedef _Attribute<std::string> e_orientation;
    struct t_maxSpeed;
    struct e_unit;
    struct e_countryCode;
    struct t_header;
    struct t_header_GeoReference;
    struct t_header_Offset;
    struct t_road;
    struct t_road_link;
    struct t_road_link_predecessorSuccessor;
    struct t_road_link_neighbor;
    struct t_road_type;
    struct t_road_type_speed;
    struct t_road_planView;
    struct t_road_planView_geometry;
    struct t_road_planView_geometry_line;
    struct t_road_planView_geometry_spiral;
    struct t_road_planView_geometry_arc;
    struct t_road_planView_geometry_poly3;
    struct t_road_planView_geometry_paramPoly3;
    struct t_road_elevationProfile;
    struct t_road_elevationProfile_elevation;
    struct t_road_lateralProfile;
    struct t_road_lateralProfile_superelevation;
    struct t_road_lateralProfile_crossfall;
    struct t_road_lateralProfile_shape;
    struct t_road_lanes;
    struct t_road_lanes_laneOffset;
    struct t_road_lanes_laneSection;
    struct t_road_lanes_laneSection_left;
    struct t_road_lanes_laneSection_center;
    struct t_road_lanes_laneSection_right;
    struct t_road_lanes_laneSection_center_lane;
    struct t_road_lanes_laneSection_lr_lane;
    struct t_road_lanes_laneSection_left_lane;
    struct t_road_lanes_laneSection_right_lane;
    struct t_road_lanes_laneSection_lcr_lane_link;
    struct t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor;
    struct t_road_lanes_laneSection_lr_lane_width;
    struct t_road_lanes_laneSection_lr_lane_border;
    struct t_road_lanes_laneSection_lcr_lane_roadMark;
    struct t_road_lanes_laneSection_lcr_lane_roadMark_sway;
    struct t_road_lanes_laneSection_lcr_lane_roadMark_type;
    struct t_road_lanes_laneSection_lcr_lane_roadMark_type_line;
    struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit;
    struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line;
    struct t_road_lanes_laneSection_lr_lane_material;
    struct t_road_lanes_laneSection_lr_lane_visibility;
    struct t_road_lanes_laneSection_lr_lane_speed;
    struct t_road_lanes_laneSection_lr_lane_access;
    struct t_road_lanes_laneSection_lr_lane_height;
    struct t_road_lanes_laneSection_lr_lane_rule;
    struct t_road_objects;
    struct t_road_objects_object;
    struct t_road_objects_object_repeat;
    struct t_road_objects_object_outlines;
    struct t_road_objects_object_outlines_outline;
    struct t_road_objects_object_outlines_outline_cornerRoad;
    struct t_road_objects_object_outlines_outline_cornerLocal;
    struct t_road_objects_object_material;
    struct t_road_objects_object_laneValidity;
    struct t_road_objects_object_parkingSpace;
    struct t_road_objects_object_markings;
    struct t_road_objects_object_markings_marking;
    struct t_road_objects_object_markings_marking_cornerReference;
    struct t_road_objects_object_borders;
    struct t_road_objects_object_borders_border;
    struct t_road_objects_objectReference;
    struct t_road_objects_tunnel;
    struct t_road_objects_bridge;
    struct t_road_signals;
    struct t_road_signals_signal;
    struct t_road_signals_signal_dependency;
    struct t_road_signals_signal_reference;
    struct t_road_signals_signal_positionRoad;
    struct t_road_signals_signal_positionInertial;
    struct t_road_signals_signalReference;
    struct t_road_surface;
    struct t_road_surface_CRG;
    struct t_road_railroad;
    struct t_road_railroad_switch;
    struct t_road_railroad_switch_mainTrack;
    struct t_road_railroad_switch_sideTrack;
    struct t_road_railroad_switch_partner;
    struct t_controller;
    struct t_controller_control;
    struct t_junction;
    struct t_junction_connection;
    struct t_junction_predecessorSuccessor;
    struct t_junction_connection_laneLink;
    struct t_junction_priority;
    struct t_junction_controller;
    struct t_junction_surface;
    struct t_junction_surface_CRG;
    struct t_junctionGroup;
    struct t_junctionGroup_junctionReference;
    struct t_station;
    struct t_station_platform;
    struct t_station_platform_segment;
    struct t_userData;
    struct t_include;
    struct t_dataQuality;
    struct t_dataQuality_Error;
    struct t_dataQuality_RawData;
    struct OpenDRIVE;


    struct t_maxSpeed {
        std::unique_ptr<e_maxSpeedString> _v0;
        std::unique_ptr<t_grEqZero> _v1;
    };

    struct e_unit {
        std::unique_ptr<e_unitDistance> _v0;
        std::unique_ptr<e_unitSpeed> _v1;
        std::unique_ptr<e_unitMass> _v2;
        std::unique_ptr<e_unitSlope> _v3;
    };

    struct e_countryCode {
        std::unique_ptr<e_countryCode_deprecated> _v0;
        std::unique_ptr<e_countryCode_iso3166alpha3> _v1;
    };

    struct t_header {
        std::vector<std::unique_ptr<t_header_GeoReference>> _s__geoReference{};
        std::vector<std::unique_ptr<t_header_Offset>> _s__offset{};
        _Attribute<std::string> _f__date;
        _Attribute<double> _f__east;
        _Attribute<std::string> _f__name;
        _Attribute<double> _f__north;
        _Attribute<int> _f__revMajor;
        _Attribute<int> _f__revMinor;
        _Attribute<double> _f__south;
        _Attribute<std::string> _f__vendor;
        t_header_Version _f__version;
        _Attribute<double> _f__west;
    };

    struct t_header_GeoReference {
    };

    struct t_header_Offset {
        _Attribute<float> _f__hdg;
        _Attribute<double> _f__x;
        _Attribute<double> _f__y;
        _Attribute<double> _f__z;
    };

    struct t_road {
        std::vector<std::unique_ptr<t_road_elevationProfile>> _s__elevationProfile{};
        std::vector<std::unique_ptr<t_road_lanes>> _s__lanes{};
        std::vector<std::unique_ptr<t_road_lateralProfile>> _s__lateralProfile{};
        std::vector<std::unique_ptr<t_road_link>> _s__link{};
        std::vector<std::unique_ptr<t_road_objects>> _s__objects{};
        std::vector<std::unique_ptr<t_road_planView>> _s__planView{};
        std::vector<std::unique_ptr<t_road_railroad>> _s__railroad{};
        std::vector<std::unique_ptr<t_road_signals>> _s__signals{};
        std::vector<std::unique_ptr<t_road_surface>> _s__surface{};
        std::vector<std::unique_ptr<t_road_type>> _s__type{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__junction;
        t_grEqZero _f__length;
        _Attribute<std::string> _f__name;
        e_trafficRule _f__rule;
    };

    struct t_road_link {
        std::vector<std::unique_ptr<t_road_link_neighbor>> _s__neighbor{};
        std::vector<std::unique_ptr<t_road_link_predecessorSuccessor>> _s__predecessor{};
        std::vector<std::unique_ptr<t_road_link_predecessorSuccessor>> _s__successor{};
    };

    struct t_road_link_predecessorSuccessor {
        e_contactPoint _f__contactPoint;
        e_elementDir _f__elementDir;
        _Attribute<std::string> _f__elementId;
        t_grEqZero _f__elementS;
        e_road_link_elementType _f__elementType;
    };

    struct t_road_link_neighbor {
        e_direction _f__direction;
        _Attribute<std::string> _f__elementId;
        e_road_link_neighbor_side _f__side;
    };

    struct t_road_type {
        std::vector<std::unique_ptr<t_road_type_speed>> _s__speed{};
        e_countryCode _f__country;
        t_grEqZero _f__s;
        e_roadType _f__type;
    };

    struct t_road_type_speed {
        t_maxSpeed _f__max;
        e_unitSpeed _f__unit;
    };

    struct t_road_planView {
        std::vector<std::unique_ptr<t_road_planView_geometry>> _s__geometry{};
    };

    struct t_road_planView_geometry {
        _Attribute<double> _f__hdg;
        t_grEqZero _f__length;
        t_grEqZero _f__s;
        _Attribute<double> _f__x;
        _Attribute<double> _f__y;
    };

    struct t_road_planView_geometry_line {
    };

    struct t_road_planView_geometry_spiral {
        _Attribute<double> _f__curvEnd;
        _Attribute<double> _f__curvStart;
    };

    struct t_road_planView_geometry_arc {
        _Attribute<double> _f__curvature;
    };

    struct t_road_planView_geometry_poly3 {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
    };

    struct t_road_planView_geometry_paramPoly3 {
        _Attribute<double> _f__aU;
        _Attribute<double> _f__aV;
        _Attribute<double> _f__bU;
        _Attribute<double> _f__bV;
        _Attribute<double> _f__cU;
        _Attribute<double> _f__cV;
        _Attribute<double> _f__dU;
        _Attribute<double> _f__dV;
        e_paramPoly3_pRange _f__pRange;
    };

    struct t_road_elevationProfile {
        std::vector<std::unique_ptr<t_road_elevationProfile_elevation>> _s__elevation{};
    };

    struct t_road_elevationProfile_elevation {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__s;
    };

    struct t_road_lateralProfile {
        std::vector<std::unique_ptr<t_road_lateralProfile_crossfall>> _s__crossfall{};
        std::vector<std::unique_ptr<t_road_lateralProfile_shape>> _s__shape{};
        std::vector<std::unique_ptr<t_road_lateralProfile_superelevation>> _s__superelevation{};
    };

    struct t_road_lateralProfile_superelevation {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__s;
    };

    struct t_road_lateralProfile_crossfall {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__s;
        e_road_lateralProfile_crossfall_side _f__side;
    };

    struct t_road_lateralProfile_shape {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__s;
        _Attribute<double> _f__t;
    };

    struct t_road_lanes {
        std::vector<std::unique_ptr<t_road_lanes_laneOffset>> _s__laneOffset{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection>> _s__laneSection{};
    };

    struct t_road_lanes_laneOffset {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__s;
    };

    struct t_road_lanes_laneSection {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_center>> _s__center{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_left>> _s__left{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_right>> _s__right{};
        t_grEqZero _f__s;
        t_bool _f__singleSide;
    };

    struct t_road_lanes_laneSection_left {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_left_lane>> _s__lane{};
    };

    struct t_road_lanes_laneSection_center {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_center_lane>> _s__lane{};
    };

    struct t_road_lanes_laneSection_right {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_right_lane>> _s__lane{};
    };

    struct t_road_lanes_laneSection_center_lane {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link>> _s__link{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>> _s__roadMark{};
        _Attribute<int> _f__id;
        t_bool _f__level;
        e_laneType _f__type;
    };

    struct t_road_lanes_laneSection_lr_lane {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_access>> _s__access{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_height>> _s__height{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link>> _s__link{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_material>> _s__material{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>> _s__roadMark{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_rule>> _s__rule{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_speed>> _s__speed{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_visibility>> _s__visibility{};
        t_bool _f__level;
        e_laneType _f__type;
    };

    struct t_road_lanes_laneSection_left_lane {
    };

    struct t_road_lanes_laneSection_right_lane {
    };

    struct t_road_lanes_laneSection_lcr_lane_link {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>> _s__predecessor{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>> _s__successor{};
    };

    struct t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor {
        _Attribute<int> _f__id;
    };

    struct t_road_lanes_laneSection_lr_lane_width {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__sOffset;
    };

    struct t_road_lanes_laneSection_lr_lane_border {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__sOffset;
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>> _s__explicit{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>> _s__sway{};
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>> _s__type{};
        e_roadMarkColor _f__color;
        _Attribute<double> _f__height;
        e_road_lanes_laneSection_lcr_lane_roadMark_laneChange _f__laneChange;
        _Attribute<std::string> _f__material;
        t_grEqZero _f__sOffset;
        e_roadMarkType _f__type;
        e_roadMarkWeight _f__weight;
        t_grEqZero _f__width;
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark_sway {
        _Attribute<double> _f__a;
        _Attribute<double> _f__b;
        _Attribute<double> _f__c;
        _Attribute<double> _f__d;
        t_grEqZero _f__ds;
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark_type {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>> _s__line{};
        _Attribute<std::string> _f__name;
        t_grEqZero _f__width;
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark_type_line {
        e_roadMarkColor _f__color;
        t_grEqZero _f__length;
        e_roadMarkRule _f__rule;
        t_grEqZero _f__sOffset;
        t_grEqZero _f__space;
        _Attribute<double> _f__tOffset;
        t_grEqZero _f__width;
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit {
        std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>> _s__line{};
    };

    struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line {
        t_grEqZero _f__length;
        e_roadMarkRule _f__rule;
        t_grEqZero _f__sOffset;
        _Attribute<double> _f__tOffset;
        t_grEqZero _f__width;
    };

    struct t_road_lanes_laneSection_lr_lane_material {
        t_grEqZero _f__friction;
        t_grEqZero _f__roughness;
        t_grEqZero _f__sOffset;
        _Attribute<std::string> _f__surface;
    };

    struct t_road_lanes_laneSection_lr_lane_visibility {
        t_grEqZero _f__back;
        t_grEqZero _f__forward;
        t_grEqZero _f__left;
        t_grEqZero _f__right;
        t_grEqZero _f__sOffset;
    };

    struct t_road_lanes_laneSection_lr_lane_speed {
        t_grEqZero _f__max;
        t_grEqZero _f__sOffset;
        e_unitSpeed _f__unit;
    };

    struct t_road_lanes_laneSection_lr_lane_access {
        e_accessRestrictionType _f__restriction;
        e_road_lanes_laneSection_lr_lane_access_rule _f__rule;
        t_grEqZero _f__sOffset;
    };

    struct t_road_lanes_laneSection_lr_lane_height {
        _Attribute<double> _f__inner;
        _Attribute<double> _f__outer;
        t_grEqZero _f__sOffset;
    };

    struct t_road_lanes_laneSection_lr_lane_rule {
        t_grEqZero _f__sOffset;
        _Attribute<std::string> _f__value;
    };

    struct t_road_objects {
        std::vector<std::unique_ptr<t_road_objects_bridge>> _s__bridge{};
        std::vector<std::unique_ptr<t_road_objects_object>> _s__object{};
        std::vector<std::unique_ptr<t_road_objects_objectReference>> _s__objectReference{};
        std::vector<std::unique_ptr<t_road_objects_tunnel>> _s__tunnel{};
    };

    struct t_road_objects_object {
        std::vector<std::unique_ptr<t_road_objects_object_borders>> _s__borders{};
        std::vector<std::unique_ptr<t_road_objects_object_markings>> _s__markings{};
        std::vector<std::unique_ptr<t_road_objects_object_material>> _s__material{};
        std::vector<std::unique_ptr<t_road_objects_object_outlines_outline>> _s__outline{};
        std::vector<std::unique_ptr<t_road_objects_object_outlines>> _s__outlines{};
        std::vector<std::unique_ptr<t_road_objects_object_parkingSpace>> _s__parkingSpace{};
        std::vector<std::unique_ptr<t_road_objects_object_repeat>> _s__repeat{};
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        t_yesNo _f__dynamic;
        _Attribute<double> _f__hdg;
        _Attribute<double> _f__height;
        _Attribute<std::string> _f__id;
        _Attribute<double> _f__length;
        _Attribute<std::string> _f__name;
        e_orientation _f__orientation;
        _Attribute<double> _f__pitch;
        _Attribute<double> _f__radius;
        _Attribute<double> _f__roll;
        t_grEqZero _f__s;
        _Attribute<std::string> _f__subtype;
        _Attribute<double> _f__t;
        e_objectType _f__type;
        t_grEqZero _f__validLength;
        _Attribute<double> _f__width;
        _Attribute<double> _f__zOffset;
    };

    struct t_road_objects_object_repeat {
        t_grEqZero _f__distance;
        _Attribute<double> _f__heightEnd;
        _Attribute<double> _f__heightStart;
        t_grEqZero _f__length;
        t_grEqZero _f__lengthEnd;
        t_grEqZero _f__lengthStart;
        t_grEqZero _f__radiusEnd;
        t_grEqZero _f__radiusStart;
        t_grEqZero _f__s;
        _Attribute<double> _f__tEnd;
        _Attribute<double> _f__tStart;
        t_grEqZero _f__widthEnd;
        t_grEqZero _f__widthStart;
        _Attribute<double> _f__zOffsetEnd;
        _Attribute<double> _f__zOffsetStart;
    };

    struct t_road_objects_object_outlines {
        std::vector<std::unique_ptr<t_road_objects_object_outlines_outline>> _s__outline{};
    };

    struct t_road_objects_object_outlines_outline {
        std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerLocal>> _s__cornerLocal{};
        std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerRoad>> _s__cornerRoad{};
        t_bool _f__closed;
        e_outlineFillType _f__fillType;
        _Attribute<unsigned int> _f__id;
        e_laneType _f__laneType;
        t_bool _f__outer;
    };

    struct t_road_objects_object_outlines_outline_cornerRoad {
        _Attribute<double> _f__dz;
        _Attribute<double> _f__height;
        _Attribute<unsigned int> _f__id;
        t_grEqZero _f__s;
        _Attribute<double> _f__t;
    };

    struct t_road_objects_object_outlines_outline_cornerLocal {
        _Attribute<double> _f__height;
        _Attribute<unsigned int> _f__id;
        _Attribute<double> _f__u;
        _Attribute<double> _f__v;
        _Attribute<double> _f__z;
    };

    struct t_road_objects_object_material {
        t_grEqZero _f__friction;
        t_grEqZero _f__roughness;
        _Attribute<std::string> _f__surface;
    };

    struct t_road_objects_object_laneValidity {
        _Attribute<int> _f__fromLane;
        _Attribute<int> _f__toLane;
    };

    struct t_road_objects_object_parkingSpace {
        e_road_objects_object_parkingSpace_access _f__access;
        _Attribute<std::string> _f__restrictions;
    };

    struct t_road_objects_object_markings {
        std::vector<std::unique_ptr<t_road_objects_object_markings_marking>> _s__marking{};
    };

    struct t_road_objects_object_markings_marking {
        std::vector<std::unique_ptr<t_road_objects_object_markings_marking_cornerReference>> _s__cornerReference{};
        e_roadMarkColor _f__color;
        t_grEqZero _f__lineLength;
        e_sideType _f__side;
        t_grEqZero _f__spaceLength;
        _Attribute<double> _f__startOffset;
        _Attribute<double> _f__stopOffset;
        e_roadMarkWeight _f__weight;
        t_grEqZero _f__width;
        t_grEqZero _f__zOffset;
    };

    struct t_road_objects_object_markings_marking_cornerReference {
        _Attribute<unsigned int> _f__id;
    };

    struct t_road_objects_object_borders {
        std::vector<std::unique_ptr<t_road_objects_object_borders_border>> _s__border{};
    };

    struct t_road_objects_object_borders_border {
        std::vector<std::unique_ptr<t_road_objects_object_markings_marking_cornerReference>> _s__cornerReference{};
        _Attribute<unsigned int> _f__outlineId;
        e_borderType _f__type;
        t_bool _f__useCompleteOutline;
        t_grEqZero _f__width;
    };

    struct t_road_objects_objectReference {
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        _Attribute<std::string> _f__id;
        e_orientation _f__orientation;
        t_grEqZero _f__s;
        _Attribute<double> _f__t;
        t_grEqZero _f__validLength;
        _Attribute<double> _f__zOffset;
    };

    struct t_road_objects_tunnel {
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        t_zeroOne _f__daylight;
        _Attribute<std::string> _f__id;
        t_grEqZero _f__length;
        t_zeroOne _f__lighting;
        _Attribute<std::string> _f__name;
        t_grEqZero _f__s;
        e_tunnelType _f__type;
    };

    struct t_road_objects_bridge {
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        _Attribute<std::string> _f__id;
        t_grEqZero _f__length;
        _Attribute<std::string> _f__name;
        t_grEqZero _f__s;
        e_bridgeType _f__type;
    };

    struct t_road_signals {
        std::vector<std::unique_ptr<t_road_signals_signal>> _s__signal{};
        std::vector<std::unique_ptr<t_road_signals_signalReference>> _s__signalReference{};
    };

    struct t_road_signals_signal {
        std::vector<std::unique_ptr<t_road_signals_signal_dependency>> _s__dependency{};
        std::vector<std::unique_ptr<t_road_signals_signal_reference>> _s__reference{};
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        e_countryCode _f__country;
        _Attribute<std::string> _f__countryRevision;
        t_yesNo _f__dynamic;
        _Attribute<double> _f__hOffset;
        t_grEqZero _f__height;
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
        e_orientation _f__orientation;
        _Attribute<double> _f__pitch;
        _Attribute<double> _f__roll;
        t_grEqZero _f__s;
        _Attribute<std::string> _f__subtype;
        _Attribute<double> _f__t;
        _Attribute<std::string> _f__text;
        _Attribute<std::string> _f__type;
        e_unit _f__unit;
        _Attribute<double> _f__value;
        t_grEqZero _f__width;
        _Attribute<double> _f__zOffset;
    };

    struct t_road_signals_signal_dependency {
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__type;
    };

    struct t_road_signals_signal_reference {
        _Attribute<std::string> _f__elementId;
        e_road_signals_signal_reference_elementType _f__elementType;
        _Attribute<std::string> _f__type;
    };

    struct t_road_signals_signal_positionRoad {
        _Attribute<double> _f__hOffset;
        _Attribute<double> _f__pitch;
        _Attribute<std::string> _f__roadId;
        _Attribute<double> _f__roll;
        t_grEqZero _f__s;
        _Attribute<double> _f__t;
        _Attribute<double> _f__zOffset;
    };

    struct t_road_signals_signal_positionInertial {
        _Attribute<double> _f__hdg;
        _Attribute<double> _f__pitch;
        _Attribute<double> _f__roll;
        _Attribute<double> _f__x;
        _Attribute<double> _f__y;
        _Attribute<double> _f__z;
    };

    struct t_road_signals_signalReference {
        std::vector<std::unique_ptr<t_road_objects_object_laneValidity>> _s__validity{};
        _Attribute<std::string> _f__id;
        e_orientation _f__orientation;
        t_grEqZero _f__s;
        _Attribute<double> _f__t;
    };

    struct t_road_surface {
        std::vector<std::unique_ptr<t_road_surface_CRG>> _s__CRG{};
    };

    struct t_road_surface_CRG {
        _Attribute<std::string> _f__file;
        _Attribute<double> _f__hOffset;
        e_road_surface_CRG_mode _f__mode;
        e_direction _f__orientation;
        e_road_surface_CRG_purpose _f__purpose;
        t_grEqZero _f__sEnd;
        _Attribute<double> _f__sOffset;
        t_grEqZero _f__sStart;
        _Attribute<double> _f__tOffset;
        _Attribute<double> _f__zOffset;
        _Attribute<double> _f__zScale;
    };

    struct t_road_railroad {
        std::vector<std::unique_ptr<t_road_railroad_switch>> _s__switch{};
    };

    struct t_road_railroad_switch {
        std::vector<std::unique_ptr<t_road_railroad_switch_mainTrack>> _s__mainTrack{};
        std::vector<std::unique_ptr<t_road_railroad_switch_partner>> _s__partner{};
        std::vector<std::unique_ptr<t_road_railroad_switch_sideTrack>> _s__sideTrack{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
        e_road_railroad_switch_position _f__position;
    };

    struct t_road_railroad_switch_mainTrack {
        e_elementDir _f__dir;
        _Attribute<std::string> _f__id;
        t_grEqZero _f__s;
    };

    struct t_road_railroad_switch_sideTrack {
        e_elementDir _f__dir;
        _Attribute<std::string> _f__id;
        t_grEqZero _f__s;
    };

    struct t_road_railroad_switch_partner {
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
    };

    struct t_controller {
        std::vector<std::unique_ptr<t_controller_control>> _s__control{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
        _Attribute<unsigned int> _f__sequence;
    };

    struct t_controller_control {
        _Attribute<std::string> _f__signalId;
        _Attribute<std::string> _f__type;
    };

    struct t_junction {
        std::vector<std::unique_ptr<t_junction_connection>> _s__connection{};
        std::vector<std::unique_ptr<t_junction_controller>> _s__controller{};
        std::vector<std::unique_ptr<t_junction_priority>> _s__priority{};
        std::vector<std::unique_ptr<t_junction_surface>> _s__surface{};
        t_junction_id _f__id;
        _Attribute<std::string> _f__name;
        e_junction_type _f__type;
    };

    struct t_junction_connection {
        std::vector<std::unique_ptr<t_junction_connection_laneLink>> _s__laneLink{};
        std::vector<std::unique_ptr<t_junction_predecessorSuccessor>> _s__predecessor{};
        std::vector<std::unique_ptr<t_junction_predecessorSuccessor>> _s__successor{};
        _Attribute<std::string> _f__connectingRoad;
        _Attribute<std::string> _f__connectionMaster;
        e_contactPoint _f__contactPoint;
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__incomingRoad;
        e_junction_type _f__type;
    };

    struct t_junction_predecessorSuccessor {
        e_elementDir _f__elementDir;
        _Attribute<std::string> _f__elementId;
        t_grZero _f__elementS;
        _Attribute<std::string> _f__elementType;
    };

    struct t_junction_connection_laneLink {
        _Attribute<int> _f__from;
        _Attribute<int> _f__to;
    };

    struct t_junction_priority {
        _Attribute<std::string> _f__high;
        _Attribute<std::string> _f__low;
    };

    struct t_junction_controller {
        _Attribute<std::string> _f__id;
        _Attribute<unsigned int> _f__sequence;
        _Attribute<std::string> _f__type;
    };

    struct t_junction_surface {
        std::vector<std::unique_ptr<t_junction_surface_CRG>> _s__CRG{};
    };

    struct t_junction_surface_CRG {
        _Attribute<std::string> _f__file;
        e_road_surface_CRG_mode _f__mode;
        e_road_surface_CRG_purpose _f__purpose;
        _Attribute<double> _f__zOffset;
        _Attribute<double> _f__zScale;
    };

    struct t_junctionGroup {
        std::vector<std::unique_ptr<t_junctionGroup_junctionReference>> _s__junctionReference{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
        e_junctionGroup_type _f__type;
    };

    struct t_junctionGroup_junctionReference {
        _Attribute<std::string> _f__junction;
    };

    struct t_station {
        std::vector<std::unique_ptr<t_station_platform>> _s__platform{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
        e_station_type _f__type;
    };

    struct t_station_platform {
        std::vector<std::unique_ptr<t_station_platform_segment>> _s__segment{};
        _Attribute<std::string> _f__id;
        _Attribute<std::string> _f__name;
    };

    struct t_station_platform_segment {
        _Attribute<std::string> _f__roadId;
        t_grEqZero _f__sEnd;
        t_grEqZero _f__sStart;
        e_station_platform_segment_side _f__side;
    };

    struct t_userData {
        _Attribute<std::string> _f__code;
        _Attribute<std::string> _f__value;
    };

    struct t_include {
        _Attribute<std::string> _f__file;
    };

    struct t_dataQuality {
        std::vector<std::unique_ptr<t_dataQuality_Error>> _s__error{};
        std::vector<std::unique_ptr<t_dataQuality_RawData>> _s__rawData{};
    };

    struct t_dataQuality_Error {
        _Attribute<double> _f__xyAbsolute;
        _Attribute<double> _f__xyRelative;
        _Attribute<double> _f__zAbsolute;
        _Attribute<double> _f__zRelative;
    };

    struct t_dataQuality_RawData {
        _Attribute<std::string> _f__date;
        e_dataQuality_RawData_PostProcessing _f__postProcessing;
        _Attribute<std::string> _f__postProcessingComment;
        e_dataQuality_RawData_Source _f__source;
        _Attribute<std::string> _f__sourceComment;
    };

    struct OpenDRIVE {
        std::vector<std::unique_ptr<t_controller>> _s__controller{};
        std::vector<std::unique_ptr<t_header>> _s__header{};
        std::vector<std::unique_ptr<t_junction>> _s__junction{};
        std::vector<std::unique_ptr<t_junctionGroup>> _s__junctionGroup{};
        std::vector<std::unique_ptr<t_road>> _s__road{};
        std::vector<std::unique_ptr<t_station>> _s__station{};
    };

}

#endif //OPENDRIVE_PARSER_ODR1_5_STRUCTURE_H
