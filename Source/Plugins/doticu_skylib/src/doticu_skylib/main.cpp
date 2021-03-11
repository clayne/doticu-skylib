/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include <chrono>

#include "doticu_skylib/main.h"
#include "doticu_skylib/virtual_callback.h"

//temp
#include "doticu_skylib/actor.h"
#include "doticu_skylib/actor_base.h"
#include "doticu_skylib/armor.h"
#include "doticu_skylib/cell.h"
#include "doticu_skylib/color.h"
#include "doticu_skylib/console_log.h"
#include "doticu_skylib/container_changes.h"
#include "doticu_skylib/container_changes_entry.h"
#include "doticu_skylib/dialogue_manager.h"
#include "doticu_skylib/extra_list.inl"
#include "doticu_skylib/extra_owner.h"
#include "doticu_skylib/faction.h"
#include "doticu_skylib/form_factory.h"
#include "doticu_skylib/game.inl"
#include "doticu_skylib/interface.h"
#include "doticu_skylib/magic_effect.h"
#include "doticu_skylib/ni_3d.h"
#include "doticu_skylib/package_dialogue.h"
#include "doticu_skylib/player.h"
#include "doticu_skylib/reference_container.h"
#include "doticu_skylib/script.h"
#include "doticu_skylib/spell.h"
#include "doticu_skylib/ui.h"
#include "doticu_skylib/unique.h"
#include "doticu_skylib/voice_type.h"
#include "doticu_skylib/virtual_callback.h"
#include "doticu_skylib/virtual_game.h"
#include "doticu_skylib/virtual_utility.h"
//

namespace doticu_skylib {

    //temp
    static void Temp()
    {
        class Waiter_t :
            public Virtual::Callback_t
        {
        public:
            Waiter_t() :
                Virtual::Callback_t(false)
            {
            }

        public:
            void operator ()(Virtual::Variable_t*)
            {
                some<Actor_t*> player_actor = Player_t::Self();
                some<Faction_t*> player_faction = static_cast<Faction_t*>(Game_t::Form(0x00000DB1)());
                Vector_t<some<Reference_t*>> references = Reference_t::Loaded_Grid_References();
                for (size_t idx = 0, end = references.size(); idx < end; idx += 1) {
                    some<Reference_t*> reference = references[idx];
                    maybe<Actor_t*> actor = reference->As_Actor();
                    if (actor && actor != player_actor() && actor->Is_Attached()) {
                        //actor->Stop_Bard_Performance(none<unique<doticu_skylib::Callback_i<>>>());
                        if (actor->Is_Alive()) {
                            actor->Kill(none<Actor_t*>(), true, true, none<unique<doticu_skylib::Callback_i<>>>()); // interesting, I think this makes bleedout's get back up.
                        } else {
                            actor->Resurrect(true, true, none<unique<doticu_skylib::Callback_i<>>>());
                        }
                    }
                }
                Virtual::Utility_t::Wait_Out_Of_Menu(5.0f, new Waiter_t());
            }
        };
        Virtual::Utility_t::Wait_Out_Of_Menu(5.0f, new Waiter_t());

        class Waiter_2_t :
            public Virtual::Callback_t
        {
        public:
            void operator ()(Virtual::Variable_t*)
            {
                // we have to wait on reload of game, because the game itself is massively messing with inventories.

                UI_t::Notification("Hello!");

                some<Actor_t*> player_actor = Player_t::Self();
                some<Actor_Base_t*> player_actor_base = player_actor->Actor_Base()();
                some<Faction_t*> player_faction = static_cast<Faction_t*>(Game_t::Form(0x00000DB1)());
                some<Faction_t*> current_follower_faction = static_cast<Faction_t*>(Game_t::Form(0x0005C84E)());
                some<Voice_Type_t*> a_voice_type = static_cast<Voice_Type_t*>(Game_t::Form(0x00013AED)());
                some<Color_t*> white_color = static_cast<Color_t*>(Game_t::Form(0x00099D86)());
                some<Armor_t*> circlet = static_cast<Armor_t*>(Game_t::Form(0x0001672F)());
                some<Spell_t*> ghost_ability = static_cast<Spell_t*>(Game_t::Form(0x0005030B)());

                Vector_t<some<Reference_t*>> references = Reference_t::Loaded_Grid_References();
                for (size_t idx = 0, end = references.size(); idx < end; idx += 1) {
                    some<Reference_t*> reference = references[idx];

                    maybe<Actor_t*> actor = reference->As_Actor();
                    if (actor && actor != player_actor()) {
                        actor->Base_Relation(player_actor_base, Relation_e::ALLY);
                        actor->Faction_Rank(current_follower_faction, 0);
                        actor->Crime_Faction(player_faction());
                        actor->Is_Player_Teammate(true);
                        actor->Ignores_Ally_Hits(true);

                        Reference_Container_t container(reference);
                        if (container.Is_Valid()) {
                            for (size_t idx = 0, end = container.entries.size(); idx < end; idx += 1) {
                                Reference_Container_Entry_t& entry = container.entries[idx];
                                if (!entry.Is_Leveled_Item()) {
                                    entry.Decrement_Count(&container, std::numeric_limits<s32>::max());

                                    Vector_t<some<Extra_List_t*>> x_lists = entry.Some_Extra_Lists();
                                    for (size_t idx = 0, end = x_lists.size(); idx < end; idx += 1) {
                                        some<Extra_List_t*> x_list = x_lists[idx];
                                        entry.Remove_And_Destroy(x_list);
                                    }
                                }
                            }

                            maybe<Actor_Base_t*> actor_base = actor->Actor_Base();
                            if (actor_base) {
                                maybe<Outfit_t*> outfit = actor_base->Default_Outfit();
                                if (outfit) {
                                    some<Extra_List_t*> x_list = Extra_List_t::Create();
                                    x_list->Outfit(outfit);
                                    container.Add(circlet, x_list);
                                }
                            }

                            //container.Log();
                        }
                    }
                }
            }
        };
        Virtual::Utility_t::Wait_Out_Of_Menu(5.0f, new Waiter_2_t());

        /*Vector_t<Actor_Base_t*> actor_bases = Actor_Base_t::Actor_Bases();
        for (size_t idx = 0, end = actor_bases.size(); idx < end; idx += 1) {
            maybe<Actor_Base_t*> actor_base = actor_bases[idx];
            if (actor_base) {
                //actor_base->Log();
            }
        }*/

        /* NOTES */
        // base_template_form is dynamically updated to resolve past bases that carry a leveled list as base_template_form
        // it looks like bases that template directly to a leveled base may also have FF000800 as a dynamic_template

        // if there is no base_template_form, the template flags can be ignored.
        // else we need to actually check those flags to get and set the relevant data.

        // if the base_template form is a leveled base, we have to spawn the base that contains it, and not the leveled base.
    }
    //

    void Main_t::Initialize()
    {

    }

    void Main_t::Before_Save()
    {
        std::unique_lock<std::timed_mutex> virtual_callback_locker = Virtual::Callback_i::Before_Save();
    }

    void Main_t::After_Load()
    {
        Virtual::Callback_i::After_Load();

        //temp
        Temp();
        //
    }

}