/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/bound_object.h"
#include "doticu_skylib/component_container.h"
#include "doticu_skylib/container_changes.h"
#include "doticu_skylib/container_changes_entry.h"
#include "doticu_skylib/container_entry.h"
#include "doticu_skylib/player.h"
#include "doticu_skylib/reference_container.h"
#include "doticu_skylib/reference_container_entry.h"

namespace doticu_skylib {

    Reference_Container_t::Reference_Container_t(some<Reference_t*> reference) :
        reference(static_cast<Reference_t*>(nullptr)),
        base_container(static_cast<Container_c*>(nullptr)),
        reference_container(static_cast<Container_Changes_t*>(nullptr))
    {
        this->reference = reference;
        SKYLIB_ASSERT_SOME(this->reference);
        this->base_container = this->reference->Component_Container()();
        this->reference_container = this->reference->Container_Changes(false);

        if (Is_Valid()) {
            Vector_t<some<Bound_Object_t*>> handled_objects;

            if (this->reference_container) {
                maybe<List_t<maybe<Container_Changes_Entry_t*>>*> reference_entries = this->reference_container->entries;
                if (reference_entries && !reference_entries->Is_Empty()) {
                    for (maybe<List_t<maybe<Container_Changes_Entry_t*>>::Node_t*> it = &reference_entries->head; it; it = it->next) {
                        maybe<Container_Changes_Entry_t*> reference_entry = it->value;
                        if (reference_entry && reference_entry->object) {
                            maybe<Container_Entry_t*> base_entry = none<Container_Entry_t*>();
                            base_entry = this->base_container->Maybe_Entry(reference_entry->object());
                            if (base_entry) {
                                handled_objects.push_back(base_entry->object());
                            }
                            this->entries.push_back(Reference_Container_Entry_t(base_entry, reference_entry));
                        }
                    }
                }
            }

            for (size_t idx = 0, end = this->base_container->container_entry_count; idx < end; idx += 1) {
                maybe<Container_Entry_t*> base_entry = this->base_container->container_entries[idx];
                if (base_entry && base_entry->object && !handled_objects.Has(base_entry->object())) {
                    this->entries.push_back(Reference_Container_Entry_t(base_entry, none<Container_Changes_Entry_t*>()));
                }
            }
        }
    }

    Reference_Container_t::~Reference_Container_t()
    {
        this->entries.~Vector_t<Reference_Container_Entry_t>();
        this->reference_container = static_cast<Container_Changes_t*>(nullptr);
        this->base_container = static_cast<Container_c*>(nullptr);
        this->reference = static_cast<Reference_t*>(nullptr);
    }

    Bool_t Reference_Container_t::Is_Valid()
    {
        return !!this->base_container;
    }

    some<Container_c*> Reference_Container_t::Some_Base_Container()
    {
        SKYLIB_ASSERT(Is_Valid());

        return this->base_container;
    }

    maybe<Container_Changes_t*> Reference_Container_t::Maybe_Reference_Container()
    {
        SKYLIB_ASSERT(Is_Valid());

        return this->reference_container;
    }

    some<Container_Changes_t*> Reference_Container_t::Some_Reference_Container()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (!this->reference_container) {
            this->reference_container = this->reference->Container_Changes(true)();
            SKYLIB_ASSERT(this->reference_container);
        }
        return this->reference_container();
    }

    maybe<Reference_Container_Entry_t*> Reference_Container_t::Maybe_Entry(some<Bound_Object_t*> object)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(object);

        for (size_t idx = 0, end = this->entries.size(); idx < end; idx += 1) {
            Reference_Container_Entry_t& entry = this->entries[idx];
            if (entry.Some_Object() == object) {
                return &entry;
            }
        }
        return none<Reference_Container_Entry_t*>();
    }

    some<Reference_Container_Entry_t*> Reference_Container_t::Some_Entry(some<Bound_Object_t*> object)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(object);
        SKYLIB_ASSERT(!object->Is_Leveled_Item());

        maybe<Reference_Container_Entry_t*> maybe_entry = Maybe_Entry(object);
        if (maybe_entry) {
            return maybe_entry();
        } else {
            this->entries.push_back(Some_Reference_Container()->Some_Entry(object));
            return &this->entries[this->entries.size() - 1];
        }
    }

    Container_Entry_Count_t Reference_Container_t::Count(some<Bound_Object_t*> object)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(object);

        maybe<Reference_Container_Entry_t*> maybe_entry = Maybe_Entry(object);
        if (maybe_entry) {
            return maybe_entry->Count();
        } else {
            return 0;
        }
    }

    Container_Entry_Count_t Reference_Container_t::Increment_Count(some<Bound_Object_t*> object, Container_Entry_Count_t amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(object);

        return Some_Entry(object)->Increment_Count(this, amount);
    }

    Container_Entry_Count_t Reference_Container_t::Decrement_Count(some<Bound_Object_t*> object, Container_Entry_Count_t amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(object);

        maybe<Reference_Container_Entry_t*> maybe_entry = Maybe_Entry(object);
        if (maybe_entry) {
            return maybe_entry->Decrement_Count(this, amount);
        } else {
            return 0;
        }
    }

    void Reference_Container_t::Log(std::string indent)
    {
        SKYLIB_ASSERT(Is_Valid());

        SKYLIB_LOG(indent + "Reference_Container_t::Log");
        SKYLIB_LOG(indent + "{");

        SKYLIB_LOG(indent + SKYLIB_TAB + "Reference: %s", this->reference->Any_Name());

        for (size_t idx = 0, end = this->entries.size(); idx < end; idx += 1) {
            Reference_Container_Entry_t& entry = this->entries[idx];
            entry.Log(indent + SKYLIB_TAB);
        }

        SKYLIB_LOG(indent + "}");
    }

}
