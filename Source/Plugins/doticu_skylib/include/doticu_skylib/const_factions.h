/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/maybe.h"

namespace doticu_skylib {

    class Faction_t;

}

namespace doticu_skylib { namespace Const { namespace Faction {

    some<Faction_t*> Player();

}}}
