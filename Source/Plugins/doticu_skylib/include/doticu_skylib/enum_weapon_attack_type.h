/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/enum.h"

namespace doticu_skylib {

    class Weapon_Attack_Type_e :
        public Enum_t<u8>
    {
    public:
        enum enum_type : value_type
        {

        };

    public:
        using Enum_t::Enum_t;
    };

}
