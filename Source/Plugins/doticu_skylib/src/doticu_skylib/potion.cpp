/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/const_keyword.h"
#include "doticu_skylib/potion.h"

namespace doticu_skylib {

    Bool_t Potion_t::Is_Medicine() const
    {
        return Component_Has_Keyword(Const::Keyword::Vendor_Item_Potion());
    }

    Bool_t Potion_t::Is_Poison() const
    {
        return Component_Has_Keyword(Const::Keyword::Vendor_Item_Poison());
    }

    Bool_t Potion_t::Is_Food() const
    {
        return !Is_Medicine() && !Is_Poison();
    }

    Bool_t Potion_t::Is_Edible_Food() const
    {
        return Is_Food() && !Is_Raw_Food();
    }

    Bool_t Potion_t::Is_Raw_Food() const
    {
        return Component_Has_Keyword(Const::Keyword::Vendor_Item_Food_Raw());
    }

    void Potion_t::Log(std::string indent)
    {
        SKYLIB_LOG(indent + "Potion_t::Log");
        SKYLIB_LOG(indent + "{");

        SKYLIB_LOG(indent + SKYLIB_TAB + "component_name: %s", Component_Name());
        SKYLIB_LOG(indent + SKYLIB_TAB + "form_id: %s", this->form_id.As_String());

        SKYLIB_LOG(indent + SKYLIB_TAB + "is_medicine: %s", Is_Medicine() ? "true" : "false");
        SKYLIB_LOG(indent + SKYLIB_TAB + "is_poison: %s", Is_Poison() ? "true" : "false");
        SKYLIB_LOG(indent + SKYLIB_TAB + "is_food: %s", Is_Food() ? "true" : "false");
        SKYLIB_LOG(indent + SKYLIB_TAB + "is_edible_food: %s", Is_Edible_Food() ? "true" : "false");
        SKYLIB_LOG(indent + SKYLIB_TAB + "is_raw_food: %s", Is_Raw_Food() ? "true" : "false");

        if (Is_Medicine() && Is_Poison()) {
            SKYLIB_LOG(indent + SKYLIB_TAB + "is both medicine and poison.");
        }

        SKYLIB_LOG(indent + SKYLIB_TAB + "keywords:");
        Keywords_c::Log_Component_Keywords(indent + SKYLIB_TAB + SKYLIB_TAB);

        SKYLIB_LOG(indent + "}");
    }

}
