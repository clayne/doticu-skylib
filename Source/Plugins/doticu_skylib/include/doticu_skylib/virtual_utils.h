/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/virtual.h"

namespace doticu_skylib { namespace Virtual {

    class Callback_i;

    class Utils_t {
    public:
        static void Wait(Float_t seconds, Callback_i* vcallback = nullptr);
        static void Wait_Out_Of_Menu(Float_t seconds, Callback_i* vcallback = nullptr);
    };

}}
