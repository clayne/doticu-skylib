/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include <mutex>

#include "doticu_skylib/collections.h"
#include "doticu_skylib/maybe.h"

namespace doticu_skylib {

    class Altered_Translation_t
    {
    public:
        const wchar_t*  key;
        const size_t    value_length;

        Altered_Translation_t(some<const wchar_t*> key, some<const wchar_t*> value);

        friend Bool_t operator==(Altered_Translation_t& a, const wchar_t* key);
    };

    class Translations_t
    {
    public:
        static std::mutex mutex;

        static std::wstring                             Translation(maybe<const wchar_t*> key);
        static void                                     Translation(maybe<const wchar_t*> key, maybe<const wchar_t*> value_to_copy);

    private:
        static Hash_Map_t<const wchar_t*, wchar_t*>&    Translations();
        static maybe<wchar_t*>                          Actual_Translation(maybe<const wchar_t*> key);
        static some<Altered_Translation_t*>             Altered_Translation(some<const wchar_t*> key, some<const wchar_t*> value);
    };

}