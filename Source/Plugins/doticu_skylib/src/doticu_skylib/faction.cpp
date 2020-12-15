/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/faction.h"
#include "doticu_skylib/game.h"
#include "doticu_skylib/mod.h"

namespace doticu_skylib {

    Vector_t<const char*>   Faction_t::editor_ids;
    std::mutex              Faction_t::editor_ids_mutex;

    void Faction_t::Init_Editor_IDs()
    {
        static Bool_t has_initialized = false;

        std::lock_guard<std::mutex> guard(editor_ids_mutex);
        if (!has_initialized) {
            auto& factions = Game_t::Self()->Factions();
            for (Index_t idx = 0, end = factions.count; idx < end; idx += 1) {
                Faction_t* faction = factions.entries[idx];
                if (faction) {
                    if (faction->Is_Valid()) {
                        Mod_t* highest_mod = faction->Get_Highest_Mod();
                        if (highest_mod) {
                            const char* editor_id = highest_mod->Allocate_Editor_ID("FACT", faction->form_id);
                            if (editor_id && editor_id[0]) {
                                faction->editor_id_index = editor_ids.size();
                                editor_ids.push_back(editor_id);
                            } else {
                                faction->editor_id_index = 0xFFFFFFFF;
                            }
                        } else {
                            faction->editor_id_index = 0xFFFFFFFF;
                        }
                    } else {
                        faction->editor_id_index = 0xFFFFFFFF;
                    }
                }
            }
            has_initialized = true;
        }
    }

    size_t Faction_t::Faction_Count()
    {
        return Game_t::Self()->Factions().count;
    }

    Vector_t<Faction_t*> Faction_t::Factions()
    {
        Vector_t<Faction_t*> results;
        Factions(results);
        return results;
    }

    void Faction_t::Factions(Vector_t<Faction_t*>& results)
    {
        auto& factions = Game_t::Self()->Factions();
        results.reserve(factions.count);

        for (Index_t idx = 0, end = factions.count; idx < end; idx += 1) {
            Faction_t* faction = factions.entries[idx];
            if (faction && faction->Is_Valid()) {
                results.push_back(faction);
            }
        }
    }

    String_t Faction_t::Any_Name()
    {
        const char* name = Name();
        if (name && name[0]) {
            return name;
        } else {
            name = Editor_ID();
            if (name && name[0]) {
                return name;
            } else {
                return Form_ID_String();
            }
        }
    }

    const char* Faction_t::Editor_ID()
    {
        Init_Editor_IDs();

        if (editor_id_index != 0xFFFFFFFF && editor_id_index < editor_ids.size()) {
            return editor_ids[editor_id_index];
        } else {
            return "";
        }
    }

    void Faction_t::Log(std::string indent)
    {
        SKYLIB_LOG(indent + "Faction_t::Log");
        SKYLIB_LOG(indent + "{");

        if (Is_Valid()) {
            const char* name = Name();
            if (name && name[0]) {
                SKYLIB_LOG(indent + SKYLIB_TAB + "name: %s", name);
            } else {
                SKYLIB_LOG(indent + SKYLIB_TAB + "name: (none)");
            }

            String_t editor_id = Editor_ID();
            if (editor_id.data && editor_id.data[0]) {
                SKYLIB_LOG(indent + SKYLIB_TAB + "editor_id: %s", editor_id);
            } else {
                SKYLIB_LOG(indent + SKYLIB_TAB + "editor_id: (none)");
            }

            SKYLIB_LOG(indent + SKYLIB_TAB + "form_id: %s", Form_ID_String());
        }

        SKYLIB_LOG(indent + "}");
    }

}