/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/bound_object.h"
#include "doticu_skylib/container_changes_entry.h"
#include "doticu_skylib/extra_list.h"
#include "doticu_skylib/forward_list.inl"
#include "doticu_skylib/game.inl"
#include "doticu_skylib/math.h"
#include "doticu_skylib/reference.h"

namespace doticu_skylib {

    some<Container_Changes_Entry_t*> Container_Changes_Entry_t::Create(some<Bound_Object_t*> object)
    {
        some<Container_Changes_Entry_t*> container_changes_entry = Game_t::Allocate<Container_Changes_Entry_t>();
        new (container_changes_entry()) Container_Changes_Entry_t(object);
        return container_changes_entry;
    }

    void Container_Changes_Entry_t::Destroy(some<Container_Changes_Entry_t*> container_changes_entry)
    {
        SKYLIB_ASSERT_SOME(container_changes_entry);
        container_changes_entry->~Container_Changes_Entry_t();
        Game_t::Deallocate<Container_Changes_Entry_t>(container_changes_entry);
    }

    Container_Changes_Entry_t::Container_Changes_Entry_t() :
        object(none<Bound_Object_t*>()), x_lists(none<List_t<maybe<Extra_List_t*>>*>()), delta(0), pad_14(0)
    {
    }

    Container_Changes_Entry_t::Container_Changes_Entry_t(some<Bound_Object_t*> object) :
        object(object()), x_lists(none<List_t<maybe<Extra_List_t*>>*>()), delta(0), pad_14(0)
    {
        SKYLIB_ASSERT(!object->Is_Leveled_Item());
    }

    Container_Changes_Entry_t::Container_Changes_Entry_t(Container_Changes_Entry_t&& other) noexcept :
        object(std::exchange(other.object, none<Bound_Object_t*>())),
        x_lists(std::exchange(other.x_lists, none<List_t<maybe<Extra_List_t*>>*>())),
        delta(std::exchange(other.delta, 0)),
        pad_14(std::exchange(other.pad_14, 0))
    {
    }

    Container_Changes_Entry_t& Container_Changes_Entry_t::operator=(Container_Changes_Entry_t&& other) noexcept
    {
        if (this != std::addressof(other)) {
            this->~Container_Changes_Entry_t();
            object = std::exchange(other.object, none<Bound_Object_t*>());
            x_lists = std::exchange(other.x_lists, none<List_t<maybe<Extra_List_t*>>*>());
            delta = std::exchange(other.delta, 0);
            pad_14 = std::exchange(other.pad_14, 0);
        }
        return *this;
    }

    Container_Changes_Entry_t::~Container_Changes_Entry_t()
    {
        this->object = none<Bound_Object_t*>();
        Destroy_Extra_Lists();
        this->delta = 0;
        this->pad_14 = 0;
    }

    Container_Entry_Count_t Container_Changes_Entry_t::Count(Container_Entry_Count_t base_count)
    {
        return Delta(base_count);
    }

    s32 Container_Changes_Entry_t::Delta(Container_Entry_Count_t base_count)
    {
        this->delta = Limit(this->delta, Minimum_Delta(base_count), Maximum_Delta(base_count));
        return this->delta;
    }

    s32 Container_Changes_Entry_t::Minimum_Delta(Container_Entry_Count_t base_count)
    {
        return Extra_Lists_Count() + -base_count;
    }

    s32 Container_Changes_Entry_t::Maximum_Delta(Container_Entry_Count_t base_count)
    {
        return std::numeric_limits<s32>::max() + -base_count;
    }

    s32 Container_Changes_Entry_t::Increment_Delta(Container_Entry_Count_t base_count, Container_Entry_Count_t amount)
    {
        s32 minimum_delta = Minimum_Delta(base_count);
        s32 maximum_delta = Maximum_Delta(base_count);
        s32 current_delta = Limit(this->delta, minimum_delta, maximum_delta);
        s32 new_delta = current_delta + amount;
        if (new_delta < current_delta || new_delta > maximum_delta) {
            this->delta = maximum_delta;
        } else {
            this->delta = new_delta;
        }
        return this->delta;
    }

    s32 Container_Changes_Entry_t::Decrement_Delta(Container_Entry_Count_t base_count, Container_Entry_Count_t amount)
    {
        s32 minimum_delta = Minimum_Delta(base_count);
        s32 maximum_delta = Maximum_Delta(base_count);
        s32 current_delta = Limit(this->delta, minimum_delta, maximum_delta);
        s32 new_delta = current_delta - amount;
        if (new_delta > current_delta || new_delta < minimum_delta) {
            this->delta = minimum_delta;
        } else {
            this->delta = new_delta;
        }
        return this->delta;
    }

    Vector_t<some<Extra_List_t*>> Container_Changes_Entry_t::Extra_Lists()
    {
        Vector_t<some<Extra_List_t*>> results;

        if (this->x_lists && !this->x_lists->Is_Empty()) {
            for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                maybe<Extra_List_t*> x_list = it->value;
                if (x_list) {
                    results.push_back(x_list());
                }
            }
        }

        return results;
    }

    Container_Entry_Count_t Container_Changes_Entry_t::Extra_Lists_Count()
    {
        s32 count = 0;
        if (this->x_lists && !this->x_lists->Is_Empty()) {
            for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                maybe<Extra_List_t*> x_list = it->value;
                if (x_list) {
                    count += x_list->Count();
                    if (count < 0) {
                        return std::numeric_limits<s32>::max();
                    }
                }
            }
        }
        return count;
    }

    s32 Container_Changes_Entry_t::Add(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(this->x_lists ? !this->x_lists->Has(extra_list()) : true);
        SKYLIB_ASSERT(!extra_list->Should_Be_Destroyed());

        s32 new_delta = Increment_Delta(base_count, extra_list->Count());

        if (!this->x_lists) {
            this->x_lists = List_t<maybe<Extra_List_t*>>::Create(extra_list())();
        } else {
            this->x_lists->Add(extra_list());
        }

        return new_delta;
    }

    s32 Container_Changes_Entry_t::Add_Copy_Or_Increment(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list)
    {
        class Copy_Filter :
            public Filter_i<Extra_Type_e>
        {
        public:
            virtual Bool_t operator ()(Extra_Type_e extra_type) override
            {
                if (extra_type == Extra_Type_e::CHARGE ||
                    extra_type == Extra_Type_e::COUNT ||
                    extra_type == Extra_Type_e::ENCHANTMENT ||
                    extra_type == Extra_Type_e::OWNER ||
                    extra_type == Extra_Type_e::POISON ||
                    extra_type == Extra_Type_e::SOUL_LEVEL ||
                    extra_type == Extra_Type_e::TEMPER_LEVEL ||
                    extra_type == Extra_Type_e::TEXT_DISPLAY) {
                    // TODO:
                    // should probably check what kind of text_display it is.
                    return true;
                } else {
                    return false;
                }
            }
        };
        static Copy_Filter copy_filter;

        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(!extra_list->Should_Be_Destroyed());

        maybe<Extra_List_t*> extra_list_copy = extra_list->Copy(copy_filter);
        if (extra_list_copy) {
            s32 new_delta = Increment_Delta(base_count, extra_list_copy->Count());

            if (!this->x_lists) {
                this->x_lists = List_t<maybe<Extra_List_t*>>::Create(extra_list_copy())();
            } else {
                // TODO:
                // we could try to have it consumed by another x_list.
                // I'm just not sure how unique x_lists would handle being altered.
                this->x_lists->Add(extra_list_copy());
            }

            return new_delta;
        } else {
            return Increment_Delta(base_count, extra_list->Count());
        }
    }

    s32 Container_Changes_Entry_t::Remove(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(this->x_lists && this->x_lists->Has(extra_list()));
        SKYLIB_ASSERT(!extra_list->Should_Be_Destroyed());

        this->x_lists->Remove(extra_list());
        if (this->x_lists->Is_Empty()) {
            Destroy_Extra_Lists();
        }

        return Decrement_Delta(base_count, extra_list->Count());
    }

    s32 Container_Changes_Entry_t::Remove_And_Destroy(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(this->x_lists && this->x_lists->Has(extra_list()));

        s16 x_list_count = extra_list->Count();

        this->x_lists->Remove(extra_list());
        Extra_List_t::Destroy(extra_list());
        if (this->x_lists->Is_Empty()) {
            Destroy_Extra_Lists();
        }

        return Decrement_Delta(base_count, x_list_count);
    }

    s32 Container_Changes_Entry_t::Remove_To(Container_Entry_Count_t base_count,
                                             some<Extra_List_t*> extra_list,
                                             maybe<Reference_t*> this_owner,
                                             some<Reference_t*> new_owner)
    {
        /*
            To move an x_list between containers:
            ALIASES:
                this seems to always appear with Extra_Reference_Handle_t. see what happens with Reference_t::Do_Add_Item.
            FROM_ALIAS:
                Can move the x_list, but Reference_t::Do_Add_Item will combine it with other From_Alias, even with different alias_id
            REFERENCE_HANDLE:
                if representative, it must have its linked reference's handle set to the new container.
            UNIQUE_ID:
                its form_id must be set to the new container, and it's unique_id set to the next available id on new container.
        */

        SKYLIB_ASSERT_SOME(this->object);
        SKYLIB_ASSERT_SOME(new_owner);
        SKYLIB_ASSERT(new_owner() != this_owner());

        s32 new_delta = Remove(base_count, extra_list);

        Vector_t<some<Extra_Data_t*>> x_datas = extra_list->Extra_Datas();
        for (size_t idx = 0, end = x_datas.size(); idx < end; idx += 1) {
            some<Extra_Data_t*> x_data = x_datas[idx];
            Extra_Type_e x_type = x_data->Type();
            if (x_type == Extra_Type_e::CANNOT_WEAR ||
                x_type == Extra_Type_e::LEVELED_ITEM ||
                x_type == Extra_Type_e::OUTFIT ||
                x_type == Extra_Type_e::SHOULD_WEAR ||
                x_type == Extra_Type_e::WORN ||
                x_type == Extra_Type_e::WORN_LEFT) { // maybe HOTKEY too?
                extra_list->Remove(x_data);
                Extra_Data_t::Destroy(x_data);
            }
        }

        new_owner->Add_Item(this->object(), extra_list(), extra_list->Count(), this_owner);

        return new_delta;
    }

    s32 Container_Changes_Entry_t::Increment_Count(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list, s16 amount)
    {
        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(this->x_lists && this->x_lists->Has(extra_list()));
        SKYLIB_ASSERT(!extra_list->Should_Be_Destroyed());

        s16 count = extra_list->Count();
        s16 new_count = extra_list->Increment_Count(amount);

        return Increment_Delta(base_count, new_count - count);
    }

    s32 Container_Changes_Entry_t::Decrement_Count(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list, s16 amount)
    {
        SKYLIB_ASSERT_SOME(extra_list);
        SKYLIB_ASSERT(this->x_lists && this->x_lists->Has(extra_list()));
        SKYLIB_ASSERT(!extra_list->Should_Be_Destroyed());

        s16 count = extra_list->Count();
        s16 new_count = extra_list->Decrement_Count(amount);

        if (extra_list->Should_Be_Destroyed()) {
            this->x_lists->Remove(extra_list());
            Extra_List_t::Destroy(extra_list);
            if (this->x_lists->Is_Empty()) {
                Destroy_Extra_Lists();
            }
        }

        return Decrement_Delta(base_count, count - new_count);
    }

    maybe<s32> Container_Changes_Entry_t::Try_To_Consume(Container_Entry_Count_t base_count, some<Extra_List_t*> extra_list)
    {
        SKYLIB_ASSERT_SOME(extra_list);

        if (this->x_lists && !this->x_lists->Is_Empty()) {
            for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                maybe<Extra_List_t*> x_list = it->value;
                if (x_list && x_list->Try_To_Consume(extra_list).Has_Value()) {
                    return Delta(base_count); // counts the modified x_list
                }
            }
            return none<s32>();
        } else {
            return none<s32>();
        }
    }

    Bool_t Container_Changes_Entry_t::Has_Quest_Item()
    {
        if (this->x_lists && !this->x_lists->Is_Empty()) {
            for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                maybe<Extra_List_t*> x_list = it->value;
                if (x_list && x_list->Is_Quest_Item()) {
                    return true;
                }
            }
        }

        return false;
    }

    Bool_t Container_Changes_Entry_t::Should_Be_Destroyed()
    {
        return this->delta == 0 && Extra_Lists_Count() == 0;
    }

    void Container_Changes_Entry_t::Destroy_Extra_Lists()
    {
        if (this->x_lists) {
            if (!this->x_lists->Is_Empty()) {
                for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                    maybe<Extra_List_t*> x_list = it->value;
                    if (x_list) {
                        Extra_List_t::Destroy(x_list());
                        it->value = none<Extra_List_t*>();
                    }
                }
            }
            List_t<maybe<Extra_List_t*>>::Destroy(this->x_lists());
            this->x_lists = none<List_t<maybe<Extra_List_t*>>*>();
        }
    }

    void Container_Changes_Entry_t::Log(std::string indent)
    {
        SKYLIB_LOG(indent + "Container_Changes_Entry_t::Log");
        SKYLIB_LOG(indent + "{");

        if (this->object) {
            SKYLIB_LOG(indent + SKYLIB_TAB + "object: %s %s", this->object->Component_Name(), this->object->Form_ID_String());
        } else {
            SKYLIB_LOG(indent + SKYLIB_TAB + "object: (none)");
        }

        SKYLIB_LOG(indent + SKYLIB_TAB + "delta: %i", this->delta);

        if (this->x_lists && !this->x_lists->Is_Empty()) {
            SKYLIB_LOG(indent + SKYLIB_TAB + "x_lists:");
            for (maybe<List_t<maybe<Extra_List_t*>>::Node_t*> it = &this->x_lists->head; it; it = it->next) {
                maybe<Extra_List_t*> x_list = it->value;
                if (x_list) {
                    x_list->Log(indent + SKYLIB_TAB + SKYLIB_TAB);
                }
            }
        } else {
            SKYLIB_LOG(indent + SKYLIB_TAB + "x_lists: (none)");
        }

        SKYLIB_LOG(indent + "}");
    }

}
