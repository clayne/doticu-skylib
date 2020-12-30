/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/intrinsic.h"

namespace doticu_skylib {

    class CString_t
    {
    public:
        static constexpr Word_t MAX_LENGTH = 2048;

        static Word_t Length(const char* sub, Bool_t with_null = false);

        static Bool_t Is_Same(const char* sub, const char* obj, Bool_t caseless);
        static Bool_t Starts_With(const char* sub, const char* obj, Bool_t caseless);
        static Bool_t Starts_With(const char* sub, const char obj, Bool_t caseless);
        static Bool_t Ends_With(const char* sub, const char* obj, Bool_t caseless);
        static Bool_t Ends_With(const char* sub, const char obj, Bool_t caseless);
        static Bool_t Contains(const char* sub, const char* obj, Bool_t caseless);

        static Bool_t Is_Length_Less_Than(const char* sub, Word_t length, Bool_t with_null = false);
        static Bool_t Is_Length_Greater_Than(const char* sub, Word_t length, Bool_t with_null = false);

        static const char* Seek_After(const char* sub, const char obj, const size_t max_chars = 24);

        template <typename Type_t>
        static Type_t To(const char* sub)
        {
            STATIC_ASSERT(false);
        }

        template <>
        static std::wstring To(const char* sub)
        {
            if (sub) {
                size_t buffer_size = CString_t::Length(sub, false);
                std::wstring buffer(buffer_size, L' ');
                for (Index_t idx = 0, end = buffer_size; idx < end; idx += 1) {
                    buffer[idx] = sub[idx];
                }
                return buffer;
            } else {
                return L"";
            }
        }
    };

}
