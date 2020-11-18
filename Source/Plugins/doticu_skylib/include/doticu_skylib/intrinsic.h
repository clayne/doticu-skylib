/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include <vector>

#include "common/ITypes.h"

#include "skse64/GameData.h"
#include "skse64/GameObjects.h"
#include "skse64/GameTypes.h"

namespace doticu_skylib {

    typedef UInt8           u8;
    typedef UInt16          u16;
    typedef UInt32          u32;
    typedef UInt64          u64;
    typedef SInt8           s8;
    typedef SInt16          s16;
    typedef SInt32          s32;
    typedef SInt64          s64;
    typedef float           f32;
    typedef double          f64;

    typedef UInt8           Byte_t;
    typedef size_t          Word_t;
    typedef SInt64          Index_t;

    typedef bool            Bool_t;
    typedef SInt32          Int_t;
    typedef float           Float_t;

    typedef u32             Form_ID_t;
    typedef u32             Lower_Form_ID_t;
    typedef u8              Form_Type_t;

    typedef TESObjectMISC   Misc_t;
    typedef TESObjectSTAT   Static_t;
    typedef TESObjectWEAP   Weapon_t;
    typedef TESObjectARMO   Armor_t;

    typedef TESFaction      Faction_t;
    typedef s8              Faction_Rank_t;
    typedef BGSOutfit       Outfit_t;

    typedef Character       Character_t;
    typedef PlayerCharacter Player_Character_t;

    typedef UInt32          Reference_Handle_t;

    typedef DataHandler     Game_Data_t;

    typedef BGSLocation     Location_t;

    template <typename Type>
    class Enum_t
    {
    public:
        Type value;

        Enum_t() :
            value(0)
        {
        }

        Enum_t(Type value) :
            value(value)
        {
        }

        operator Type()
        {
            return static_cast<Type>(value);
        }

        operator Type() const
        {
            return static_cast<const Type>(value);
        }
    };

    class Ternary_e : public Enum_t<Word_t>
    {
    public:
        enum
        {
            LOW     = -1,
            NONE    = 0,
            HIGH    = 1,
        };
        using Enum_t::Enum_t;
    };

    template <typename ...Arguments>
    class Callback_i
    {
    public:
        virtual ~Callback_i() = default;
        virtual void operator()(Arguments...) = 0;
    };

    template <typename ...Arguments>
    class Iterator_i
    {
    public:
        virtual ~Iterator_i() = default;
        virtual void operator()(Arguments...) = 0;
    };

    class Comparator_e : public Enum_t<Word_t>
    {
    public:
        enum
        {
            IS_ORDERED = -1,
            IS_UNORDERED = 1,
            IS_EQUAL = 0,
        };
        using Enum_t::Enum_t;
    };

    template <typename Type>
    class Vector_t : public std::vector<Type>
    {
    public:
        Index_t Index_Of(Type& item)
        {
            for (Index_t idx = 0, end = size(); idx < end; idx += 1) {
                if (at(idx) == item) {
                    return idx;
                }
            }
            return -1;
        }

        Bool_t Has(Type& item)
        {
            return Index_Of(item) > -1;
        }

        void Sort(Int_t(*comparator)(Type* item_a, Type* item_b))
        {
            qsort(data(), size(), sizeof(Type), reinterpret_cast<int(*)(const void*, const void*)>(comparator));
        }
    };

}

#include "doticu_skylib/string.h"
