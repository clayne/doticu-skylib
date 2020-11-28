/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/actor.h"

namespace doticu_skylib {

    class Player_t : public Actor_t
    {
    public:
        static Player_t* Self();
    };

}
