/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/extra_list.h"

namespace doticu_skylib {

    template <typename T>
    inline Bool_t Extra_List_t::Has()
    {
        return Has(T::EXTRA_TYPE);
    }

    template <typename T>
    inline maybe<T*> Extra_List_t::Get()
    {
        return static_cast<maybe<T*>>(Get(T::EXTRA_TYPE));
    }

    template <typename T>
    inline Bool_t Extra_List_t::Add(some<T*> x_data)
    {
        return Add(static_cast<some<Extra_Data_t*>>(x_data));
    }

    template <typename T>
    inline Bool_t Extra_List_t::Add_Copy(T& x_data)
    {
        return Add(T::Create(x_data));
    }

    template <typename T>
    inline Bool_t Extra_List_t::Add_Copy(Extra_Data_t& x_data)
    {
        return Add_Copy(static_cast<T&>(*x_data));
    }

    template <typename T>
    inline Bool_t Extra_List_t::Remove(some<T*> x_data)
    {
        return Remove(static_cast<some<Extra_Data_t*>>(x_data));
    }

}
