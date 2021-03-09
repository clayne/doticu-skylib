/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/alias_id.h"
#include "doticu_skylib/enum.h"
#include "doticu_skylib/extra_data.h"
#include "doticu_skylib/faction_rank.h"
#include "doticu_skylib/maybe.h"
#include "doticu_skylib/read_write_lock.h"
#include "doticu_skylib/reference_handle.h"

namespace doticu_skylib {

    class Actor_Base_t;
    class Alias_Base_t;
    class Alias_Reference_t;
    class Faction_t;
    class Form_t;
    class Leveled_Item_t;
    class Outfit_t;
    class Quest_t;
    class Reference_t;

    class Extra_List_t // ExtraDataList
    {
    public:
        class Presence_t // PresenceBitfield
        {
        public:
            static constexpr size_t MAX_FLAGS = 192;

        public:
            static some<Presence_t*>    Create();
            static void                 Destroy(some<Presence_t*> presence);

        public:
            Byte_t flags[24]; // 0

        public:
            Presence_t();
            Presence_t(const Presence_t& other)                 = delete;
            Presence_t(Presence_t&& other) noexcept             = delete;
            Presence_t& operator=(const Presence_t & other)     = delete;
            Presence_t& operator=(Presence_t&& other) noexcept  = delete;
            ~Presence_t();

        public:
            Bool_t  Has(Extra_Type_e type);
            void    Add(Extra_Type_e type);
            void    Remove(Extra_Type_e type);
            void    Clear();
        };
        STATIC_ASSERT(sizeof(Presence_t) == 0x18);

    public:
        static some<Extra_List_t*>  Create();
        static void                 Destroy(some<Extra_List_t*> x_list);

    public:
        maybe<Extra_Data_t*>    x_datas;    // 00
        maybe<Presence_t*>      presence;   // 08
        Read_Write_Lock_t       lock;       // 10

    public:
        Extra_List_t();
        Extra_List_t(const Extra_List_t& other)                 = delete;
        Extra_List_t(Extra_List_t&& other) noexcept             = delete;
        Extra_List_t& operator=(const Extra_List_t& other)      = delete;
        Extra_List_t& operator=(Extra_List_t&& other) noexcept  = delete;
        ~Extra_List_t();

    public:
        void    Validate();
        Bool_t  Should_Be_Destroyed();
        Bool_t  Can_Consume(some<Extra_List_t*> other);
        Bool_t  Try_To_Consume(some<Extra_List_t*> other);

    public:
        Bool_t                  Has(Extra_Type_e type);
        maybe<Extra_Data_t*>    Get(Extra_Type_e type);
        Bool_t                  Add(some<Extra_Data_t*> x_data);
        Bool_t                  Remove(some<Extra_Data_t*> x_data);

        template <typename T>
        Bool_t                  Has();
        template <typename T>
        maybe<T*>               Get();
        template <typename T>
        Bool_t                  Add(some<T*> x_data);
        template <typename T>
        Bool_t                  Remove(some<T*> x_data);

        Bool_t                  Has_Extra_Aliases();
        Bool_t                  Has_Extra_Count();
        Bool_t                  Has_Extra_Factions();
        Bool_t                  Has_Extra_Ghost();
        Bool_t                  Has_Extra_Leveled_Item();
        Bool_t                  Has_Extra_Outfit();
        Bool_t                  Has_Extra_Owner();
        Bool_t                  Has_Extra_Reference_Handle();
        Bool_t                  Has_Extra_Reference_Interaction();
        Bool_t                  Has_Extra_Talk_To_Player();
        Bool_t                  Has_Extra_Worn();
        Bool_t                  Has_Extra_Worn_Left();

    public:
        Vector_t<some<Extra_Data_t*>>       Extra_Datas();

        // Extra_Aliases_t
        Bool_t                              Is_Aliased();
        Bool_t                              Is_Aliased(some<Quest_t*> quest);
        Bool_t                              Is_Aliased(some<Quest_t*> quest, Alias_ID_t alias_id);
        Bool_t                              Is_Protected();
        Bool_t                              Is_Essential();
        Bool_t                              Is_Quest_Item();
        Vector_t<some<Alias_Base_t*>>       Alias_Bases();
        void                                Alias_Bases(Vector_t<some<Alias_Base_t*>>& results);
        Vector_t<some<Alias_Reference_t*>>  Alias_References();
        void                                Alias_References(Vector_t<some<Alias_Reference_t*>>& results);
        Vector_t<some<Quest_t*>>            Quests();
        void                                Quests(Vector_t<some<Quest_t*>>& results);

        // Extra_Count_t
        s16                                 Count();
        s16                                 Increment_Count(s16 amount);
        s16                                 Decrement_Count(s16 amount);

        // Extra_Factions_t
        maybe<Raw_Faction_Rank_t>           Faction_Rank(some<Faction_t*> faction);
        void                                Faction_Rank(some<Faction_t*> faction, some<Raw_Faction_Rank_t> rank);
        maybe<Faction_t*>                   Crime_Faction();
        void                                Crime_Faction(maybe<Faction_t*> crime_faction);

        // Extra_Ghost_t
        Boolean_e                           Is_Ghost();
        void                                Is_Ghost(Bool_t is_ghost);

        // Extra_Leveled_Item_t
        Bool_t                              Is_Leveled_Item();
        maybe<Leveled_Item_t*>              Leveled_Item();
        void                                Leveled_Item(maybe<Leveled_Item_t*> leveled_item);

        // Extra_Outfit_t
        Bool_t                              Is_Outfit_Item();
        maybe<Outfit_t*>                    Outfit();
        void                                Outfit(maybe<Outfit_t*> outfit);

        // Extra_Owner_t
        maybe<maybe<Form_t*>>               Owner();
        void                                Owner(maybe<Form_t*> form);
        maybe<maybe<Faction_t*>>            Faction_Owner();
        void                                Faction_Owner(maybe<Faction_t*> faction);
        maybe<maybe<Actor_Base_t*>>         Actor_Base_Owner();
        void                                Actor_Base_Owner(maybe<Actor_Base_t*> actor_base);

        // Extra_Reference_Handle_t
        maybe<Reference_t*>                 Reference();
        void                                Reference(some<Reference_t*> reference);
        Reference_Handle_t                  Reference_Handle();
        void                                Reference_Handle(Reference_Handle_t reference_handle);
        maybe<Reference_t*>                 Representative_Reference();
        maybe<Reference_t*>                 Containing_Reference();

        // Extra_Reference_Interaction_t
        maybe<Reference_t*>                 Reference_Interactor_A();
        maybe<Reference_t*>                 Reference_Interactor_B();

        // Extra_Talk_To_Player_t
        Boolean_e                           Can_Talk_To_Player();
        void                                Can_Talk_To_Player(Bool_t can_talk_to_player);

        // Extra_Worn_t, Extra_Worn_Left_t
        Bool_t                              Is_Worn_Item();
        Bool_t                              Is_Worn();
        void                                Is_Worn(Bool_t is_worn);
        Bool_t                              Is_Worn_Left();
        void                                Is_Worn_Left(Bool_t is_worn_left);

    public:
        void Log(std::string indent = "");
    };
    STATIC_ASSERT(sizeof(Extra_List_t) == 0x18);

}
