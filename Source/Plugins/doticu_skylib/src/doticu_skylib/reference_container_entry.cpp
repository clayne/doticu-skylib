/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/bound_object.h"
#include "doticu_skylib/container_changes.h"
#include "doticu_skylib/container_changes_entry.h"
#include "doticu_skylib/container_entry.h"
#include "doticu_skylib/reference_container.h"
#include "doticu_skylib/reference_container_entry.h"

namespace doticu_skylib {

    Reference_Container_Entry_t::Reference_Container_Entry_t(some<Container_Changes_Entry_t*> reference_entry) :
        base_entry(none<Container_Entry_t*>()),
        reference_entry(reference_entry())
    {
        SKYLIB_ASSERT(Is_Valid());
    }

    Reference_Container_Entry_t::Reference_Container_Entry_t(maybe<Container_Entry_t*> base_entry,
                                                             maybe<Container_Changes_Entry_t*> reference_entry) :
        base_entry(base_entry),
        reference_entry(reference_entry)
    {
        SKYLIB_ASSERT(Is_Valid());
    }

    Reference_Container_Entry_t::Reference_Container_Entry_t(const Reference_Container_Entry_t& other) :
        base_entry(other.base_entry),
        reference_entry(other.reference_entry)
    {
        SKYLIB_ASSERT(Is_Valid());
    }

    Reference_Container_Entry_t::Reference_Container_Entry_t(Reference_Container_Entry_t&& other) noexcept :
        base_entry(std::exchange(other.base_entry, none<Container_Entry_t*>())),
        reference_entry(std::exchange(other.reference_entry, none<Container_Changes_Entry_t*>()))
    {
        SKYLIB_ASSERT(Is_Valid());
    }

    Reference_Container_Entry_t& Reference_Container_Entry_t::operator =(const Reference_Container_Entry_t& other)
    {
        if (std::addressof(other) != this) {
            base_entry = other.base_entry;
            reference_entry = other.reference_entry;
            SKYLIB_ASSERT(Is_Valid());
        }
        return *this;
    }

    Reference_Container_Entry_t& Reference_Container_Entry_t::operator =(Reference_Container_Entry_t&& other) noexcept
    {
        if (std::addressof(other) != this) {
            base_entry = std::exchange(other.base_entry, none<Container_Entry_t*>());
            reference_entry = std::exchange(other.reference_entry, none<Container_Changes_Entry_t*>());
            SKYLIB_ASSERT(Is_Valid());
        }
        return *this;
    }

    Reference_Container_Entry_t::~Reference_Container_Entry_t()
    {
        this->reference_entry = none<Container_Changes_Entry_t*>();
        this->base_entry = none<Container_Entry_t*>();
    }

    Bool_t Reference_Container_Entry_t::Is_Valid()
    {
        return
            (this->base_entry && this->base_entry->object) ||
            (this->reference_entry && this->reference_entry->object);
    }

    Bool_t Reference_Container_Entry_t::Is_Leveled_Item()
    {
        SKYLIB_ASSERT(Is_Valid());

        return Maybe_Leveled_Item() != none<Leveled_Item_t*>();
    }

    some<Bound_Object_t*> Reference_Container_Entry_t::Some_Object()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->reference_entry) {
            return this->reference_entry->object();
        } else {
            return this->base_entry->object();
        }
    }

    maybe<Leveled_Item_t*> Reference_Container_Entry_t::Maybe_Leveled_Item()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->base_entry) {
            return this->base_entry->object->As_Leveled_Item();
        } else {
            return none<Leveled_Item_t*>();
        }
    }

    maybe<Container_Changes_Entry_t*> Reference_Container_Entry_t::Maybe_Reference_Entry()
    {
        SKYLIB_ASSERT(Is_Valid());

        return this->reference_entry;
    }

    some<Container_Changes_Entry_t*> Reference_Container_Entry_t::Some_Reference_Entry(some<Reference_Container_t*> owner)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(owner);
        SKYLIB_ASSERT(!Some_Object()->Is_Leveled_Item());

        if (!this->reference_entry) {
            this->reference_entry = owner->Some_Reference_Container()->Some_Entry(Some_Object())();
            SKYLIB_ASSERT_SOME(this->reference_entry);
        }
        return this->reference_entry();
    }

    Vector_t<some<Extra_List_t*>> Reference_Container_Entry_t::Some_Extra_Lists()
    {
        if (this->reference_entry) {
            return this->reference_entry->Extra_Lists();
        } else
            return Vector_t<some<Extra_List_t*>>();
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Base_Count()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->base_entry) {
            return this->base_entry->count;
        } else {
            return 0;
        }
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Reference_Count()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->reference_entry) {
            return this->reference_entry->Delta(Base_Count());
        } else {
            return 0;
        }
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Extra_Lists_Count()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->reference_entry) {
            return this->reference_entry->Extra_Lists_Count();
        } else {
            return 0;
        }
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Non_Extra_Lists_Count()
    {
        SKYLIB_ASSERT(Is_Valid());

        if (this->reference_entry) {
            return Container_Entry_Count_t(this->reference_entry->Delta(Base_Count())) - this->reference_entry->Extra_Lists_Count();
        } else {
            return 0;
        }
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Count()
    {
        SKYLIB_ASSERT(Is_Valid());

        Container_Entry_Count_t base_count = Base_Count();
        if (this->reference_entry) {
            return this->reference_entry->Delta(base_count) + base_count;
        } else {
            return base_count;
        }
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Increment_Count(some<Reference_Container_t*> owner, Container_Entry_Count_t amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(owner);

        Container_Entry_Count_t base_count = Base_Count();
        return Some_Reference_Entry(owner)->Increment_Delta(base_count, amount) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Decrement_Count(some<Reference_Container_t*> owner, Container_Entry_Count_t amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(owner);

        Container_Entry_Count_t base_count = Base_Count();
        return Some_Reference_Entry(owner)->Decrement_Delta(base_count, amount) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Increment_Extra_List_Count(some<Extra_List_t*> extra_list, s16 amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT(this->reference_entry);
        SKYLIB_ASSERT_SOME(extra_list);

        Container_Entry_Count_t base_count = Base_Count();
        return this->reference_entry->Increment_Extra_List_Count(base_count, extra_list, amount) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Decrement_Extra_List_Count(some<Extra_List_t*> extra_list, s16 amount)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT(this->reference_entry);
        SKYLIB_ASSERT_SOME(extra_list);

        Container_Entry_Count_t base_count = Base_Count();
        return this->reference_entry->Decrement_Extra_List_Count(base_count, extra_list, amount) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Add_Extra_List(some<Reference_Container_t*> owner,
                                                                        some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(owner);
        SKYLIB_ASSERT_SOME(extra_list);

        Container_Entry_Count_t base_count = Base_Count();
        return Some_Reference_Entry(owner)->Add_Extra_List(base_count, extra_list) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Remove_Extra_List(some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(this->reference_entry);
        SKYLIB_ASSERT_SOME(extra_list);

        Container_Entry_Count_t base_count = Base_Count();
        return this->reference_entry->Remove_Extra_List(base_count, extra_list) + base_count;
    }

    Container_Entry_Count_t Reference_Container_Entry_t::Remove_And_Destroy_Extra_List(some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT(Is_Valid());
        SKYLIB_ASSERT_SOME(this->reference_entry);
        SKYLIB_ASSERT_SOME(extra_list);

        Container_Entry_Count_t base_count = Base_Count();
        return this->reference_entry->Remove_And_Destroy_Extra_List(base_count, extra_list) + base_count;
    }

    void Reference_Container_Entry_t::Log(std::string indent)
    {
        SKYLIB_ASSERT(Is_Valid());

        SKYLIB_LOG(indent + "Reference_Container_Entry_t::Log");
        SKYLIB_LOG(indent + "{");

        SKYLIB_LOG(indent + SKYLIB_TAB + "object: %s", Some_Object()->Form_ID_String());
        SKYLIB_LOG(indent + SKYLIB_TAB + "base_count: %d", Base_Count());
        SKYLIB_LOG(indent + SKYLIB_TAB + "reference_count: %d", Reference_Count());
        SKYLIB_LOG(indent + SKYLIB_TAB + "extra_lists_count: %d", Extra_Lists_Count());
        SKYLIB_LOG(indent + SKYLIB_TAB + "non_extra_lists_count: %d", Non_Extra_Lists_Count());
        SKYLIB_LOG(indent + SKYLIB_TAB + "count: %d", Count());

        SKYLIB_LOG(indent + "}");
    }

}