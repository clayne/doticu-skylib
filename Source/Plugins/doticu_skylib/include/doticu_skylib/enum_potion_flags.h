/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/enum.h"

namespace doticu_skylib {

    class Potion_Flags_e :
        public Enum_t<u32>
    {
    public:
        enum enum_type : value_type
        {
            NO_AUTO_CALC            = static_cast<value_type>(1 << 0),
            IS_FOOD                 = static_cast<value_type>(1 << 1),
            EXTEND_RECAST_DURATION  = static_cast<value_type>(1 << 3),
            IS_POTION               = static_cast<value_type>(1 << 16),
            IS_POISON               = static_cast<value_type>(1 << 17),
        };

    public:
        using Enum_t::Enum_t;
    };

}
