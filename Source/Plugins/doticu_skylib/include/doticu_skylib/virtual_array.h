/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/virtual.h"
#include "doticu_skylib/virtual_type.h"

namespace doticu_skylib { namespace Virtual {

    class Variable_t;

    class Array_t {
    public:
        static Array_t* Create(Type_t* item_type, UInt32 count);
        static void Destroy(Array_t* arr);

    public:
        UInt32 ref_count; // 00
        UInt32 pad_04; // 04
        Type_t item_type; // 08
        UInt32 count; // 10
        UInt32 pad_14; // 14
        UInt64 lock; // 18
        //Variable_t* variables[0]; // 20

        void Increment_Count();
        void Decrement_Count();
        Type_t Array_Type();
        Variable_t* Variables();
        Variable_t* Point(Word_t idx);
        template <typename Type>
        Vector_t<Type> Vector();
        template <typename Type>
        Vector_t<Type*> Vector(Form_Type_t form_type);
        template <typename Type>
        Int_t Find(Type element);
        template <typename Type>
        Int_t Find(Form_Type_t form_type, Type* element);
        template <typename Type>
        Bool_t Has(Type element);
        template <typename Type>
        Bool_t Has(Form_Type_t form_type, Type* element);
    };
    STATIC_ASSERT(sizeof(Array_t) == 0x20);

}}
