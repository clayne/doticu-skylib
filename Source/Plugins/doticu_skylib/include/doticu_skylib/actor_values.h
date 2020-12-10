/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/enum.h"

namespace doticu_skylib {

    class Actor_Value_e : public Enum_t<u32>
    {
    public:
        enum : u32
        {
            AGGRESSION = 0,
        };
        using Enum_t::Enum_t;
    };

    class Actor_Value_Modifier_e : public Enum_t<u32>
    {
    public:
        enum : u32
        {
            PERMANENT   = 0,
            TEMPORARY   = 1,
            DAMAGE      = 2,
            INVALID     = 3,
        };
        using Enum_t::Enum_t;
    };

    class Actor_Values_t
    {
    public:
        virtual ~Actor_Values_t(); // 0

        virtual Float_t Get_Actor_Value(Actor_Value_e actor_value);                                                     // 1
        virtual Float_t Get_Actor_Permanent_Value(Actor_Value_e actor_value);                                           // 2
        virtual Float_t Get_Actor_Base_Value(Actor_Value_e actor_value);                                                // 3
        virtual void    Set_Actor_Base_Value(Actor_Value_e actor_value, Float_t value);                                 // 4
        virtual void    Mod_Actor_Value(Actor_Value_e actor_value, Float_t value);                                      // 5
        virtual void    Restore_Actor_Value(Actor_Value_Modifier_e modifier, Actor_Value_e actor_value, Float_t value); // 6
        virtual void    Set_Actor_Value(Actor_Value_e actor_value, Float_t value);                                      // 7
        virtual Bool_t  Is_Player_Values();                                                                             // 8
    };
    STATIC_ASSERT(sizeof(Actor_Values_t) == 0x8);

}