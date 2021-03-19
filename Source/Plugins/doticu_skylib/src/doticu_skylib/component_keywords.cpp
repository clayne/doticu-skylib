/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/component_keywords.h"
#include "doticu_skylib/keyword.h"

namespace doticu_skylib {

    Bool_t Keywords_c::Component_Has_Keyword(some<Keyword_t*> keyword) const
    {
        SKYLIB_ASSERT_SOME(keyword);

        return Get_Has_Keyword(keyword());
    }

    void Keywords_c::Log_Component_Keywords(std::string indent)
    {
        SKYLIB_LOG(indent + "Keywords_c::Log_Component_Keywords");
        SKYLIB_LOG(indent + "{");

        if (this->keywords) {
            SKYLIB_LOG(indent + SKYLIB_TAB + "keywords:");
            for (size_t idx = 0, end = this->keyword_count; idx < end; idx += 1) {
                maybe<Keyword_t*> keyword = this->keywords[idx];
                if (keyword) {
                    keyword->Log(indent + SKYLIB_TAB + SKYLIB_TAB);
                }
            }
        } else {
            SKYLIB_LOG(indent + SKYLIB_TAB + "keywords: (none)");
        }

        SKYLIB_LOG(indent + SKYLIB_TAB + "keyword_count: %u", this->keyword_count);

        maybe<Keyword_t*> default_keyword = Get_Default_Keyword();
        if (default_keyword) {
            SKYLIB_LOG(indent + SKYLIB_TAB + "default_keyword:");
            default_keyword->Log(indent + SKYLIB_TAB + SKYLIB_TAB);
        } else {
            SKYLIB_LOG(indent + SKYLIB_TAB + "default_keyword: (none)");
        }

        SKYLIB_LOG(indent + "}");
    }

}
