/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/form.h"
#include "doticu_skylib/enum_script_type.h"

namespace doticu_skylib {

    class Keyword_t : public Form_t
    {
    public:
        class Offset_e : public Enum_t<Word_t>
        {
        public:
            enum : value_type
            {
                RTTI = 0x01E13958,
            };
            using Enum_t::Enum_t;
        };

        enum
        {
            SCRIPT_TYPE = Script_Type_e::KEYWORD,
        };

    public:
        static Int_t Compare_Any_Names(Keyword_t** a, Keyword_t** b);

    public:
        virtual ~Keyword_t(); // 0

        String_t editor_id; // 20

        String_t Any_Name();
    };
    STATIC_ASSERT(sizeof(Keyword_t) == 0x28);

}
