/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/form.h"

namespace doticu_skylib {

    class Keyword_t : public Form_t
    {
    public:
        enum
        {
            FORM_TYPE   = Form_Type_e::KEYWORD,
            kTypeID     = FORM_TYPE,
        };

    public:
        virtual ~Keyword_t(); // 0

        String_t editor_id; // 20
    };
    STATIC_ASSERT(sizeof(Keyword_t) == 0x28);

}