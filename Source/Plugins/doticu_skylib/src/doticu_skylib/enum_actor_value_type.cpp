/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/cstring.h"
#include "doticu_skylib/enum_actor_value_type.h"
#include "doticu_skylib/game.h"

namespace doticu_skylib {

    some<const char* const*> Actor_Value_Type_e::Strings()
    {
        static const char* const strings[_TOTAL_] =
        {
            SKYLIB_ENUM_TO_STRING(AGGRESSION),
            SKYLIB_ENUM_TO_STRING(CONFIDENCE),
            SKYLIB_ENUM_TO_STRING(ENERGY),
            SKYLIB_ENUM_TO_STRING(MORALITY),
            SKYLIB_ENUM_TO_STRING(MOOD),
            SKYLIB_ENUM_TO_STRING(ASSISTANCE),
            SKYLIB_ENUM_TO_STRING(ONE_HANDED),
            SKYLIB_ENUM_TO_STRING(TWO_HANDED),
            SKYLIB_ENUM_TO_STRING(MARKSMAN),
            SKYLIB_ENUM_TO_STRING(BLOCK),
            SKYLIB_ENUM_TO_STRING(SMITHING),
            SKYLIB_ENUM_TO_STRING(HEAVY_ARMOR),
            SKYLIB_ENUM_TO_STRING(LIGHT_ARMOR),
            SKYLIB_ENUM_TO_STRING(PICKPOCKET),
            SKYLIB_ENUM_TO_STRING(LOCKPICKING),
            SKYLIB_ENUM_TO_STRING(SNEAK),
            SKYLIB_ENUM_TO_STRING(ALCHEMY),
            SKYLIB_ENUM_TO_STRING(SPEECHCRAFT),
            SKYLIB_ENUM_TO_STRING(ALTERATION),
            SKYLIB_ENUM_TO_STRING(CONJURATION),
            SKYLIB_ENUM_TO_STRING(DESTRUCTION),
            SKYLIB_ENUM_TO_STRING(ILLUSION),
            SKYLIB_ENUM_TO_STRING(RESTORATION),
            SKYLIB_ENUM_TO_STRING(ENCHANTING),
            SKYLIB_ENUM_TO_STRING(HEALTH),
            SKYLIB_ENUM_TO_STRING(MAGICKA),
            SKYLIB_ENUM_TO_STRING(STAMINA),
            SKYLIB_ENUM_TO_STRING(HEAL_RATE),
            SKYLIB_ENUM_TO_STRING(MAGICKA_RATE),
            SKYLIB_ENUM_TO_STRING(STAMINA_RATE),
            SKYLIB_ENUM_TO_STRING(SPEED_MULT),
            SKYLIB_ENUM_TO_STRING(INVENTORY_WEIGHT),
            SKYLIB_ENUM_TO_STRING(CARRY_WEIGHT),
            SKYLIB_ENUM_TO_STRING(CRITICAL_CHANCE),
            SKYLIB_ENUM_TO_STRING(MELEE_DAMAGE),
            SKYLIB_ENUM_TO_STRING(UNARMED_DAMAGE),
            SKYLIB_ENUM_TO_STRING(MASS),
            SKYLIB_ENUM_TO_STRING(VOICE_POINTS),
            SKYLIB_ENUM_TO_STRING(VOICE_RATE),
            SKYLIB_ENUM_TO_STRING(DAMAGE_RESIST),
            SKYLIB_ENUM_TO_STRING(POISON_RESIST),
            SKYLIB_ENUM_TO_STRING(RESIST_FIRE),
            SKYLIB_ENUM_TO_STRING(RESIST_SHOCK),
            SKYLIB_ENUM_TO_STRING(RESIST_FROST),
            SKYLIB_ENUM_TO_STRING(RESIST_MAGIC),
            SKYLIB_ENUM_TO_STRING(RESIST_DISEASE),
            SKYLIB_ENUM_TO_STRING(UNK_2E),
            SKYLIB_ENUM_TO_STRING(UNK_2F),
            SKYLIB_ENUM_TO_STRING(UNK_30),
            SKYLIB_ENUM_TO_STRING(UNK_31),
            SKYLIB_ENUM_TO_STRING(UNK_32),
            SKYLIB_ENUM_TO_STRING(UNK_33),
            SKYLIB_ENUM_TO_STRING(UNK_34),
            SKYLIB_ENUM_TO_STRING(PARALYSIS),
            SKYLIB_ENUM_TO_STRING(INVISIBILITY),
            SKYLIB_ENUM_TO_STRING(NIGHT_EYE),
            SKYLIB_ENUM_TO_STRING(DETECT_LIFE_RANGE),
            SKYLIB_ENUM_TO_STRING(WATER_BREATHING),
            SKYLIB_ENUM_TO_STRING(WATER_WALKING),
            SKYLIB_ENUM_TO_STRING(UNK_3B),
            SKYLIB_ENUM_TO_STRING(FAME),
            SKYLIB_ENUM_TO_STRING(INFAMY),
            SKYLIB_ENUM_TO_STRING(JUMPING_BONUS),
            SKYLIB_ENUM_TO_STRING(WARD_POWER),
            SKYLIB_ENUM_TO_STRING(RIGHT_ITEM_CHARGE),
            SKYLIB_ENUM_TO_STRING(ARMOR_PERKS),
            SKYLIB_ENUM_TO_STRING(SHIELD_PERKS),
            SKYLIB_ENUM_TO_STRING(WARD_DEFLECTION),
            SKYLIB_ENUM_TO_STRING(VARIABLE_01),
            SKYLIB_ENUM_TO_STRING(VARIABLE_02),
            SKYLIB_ENUM_TO_STRING(VARIABLE_03),
            SKYLIB_ENUM_TO_STRING(VARIABLE_04),
            SKYLIB_ENUM_TO_STRING(VARIABLE_05),
            SKYLIB_ENUM_TO_STRING(VARIABLE_06),
            SKYLIB_ENUM_TO_STRING(VARIABLE_07),
            SKYLIB_ENUM_TO_STRING(VARIABLE_08),
            SKYLIB_ENUM_TO_STRING(VARIABLE_09),
            SKYLIB_ENUM_TO_STRING(VARIABLE_10),
            SKYLIB_ENUM_TO_STRING(BOW_SPEED_BONUS),
            SKYLIB_ENUM_TO_STRING(FAVOR_ACTIVE),
            SKYLIB_ENUM_TO_STRING(FAVORS_PER_DAY),
            SKYLIB_ENUM_TO_STRING(FAVORS_PER_DAY_TIMER),
            SKYLIB_ENUM_TO_STRING(LEFT_ITEM_CHARGE),
            SKYLIB_ENUM_TO_STRING(ABSORB_CHANCE),
            SKYLIB_ENUM_TO_STRING(BLINDNESS),
            SKYLIB_ENUM_TO_STRING(WEAPON_SPEED_MULT),
            SKYLIB_ENUM_TO_STRING(SHOUT_RECOVERY_MULT),
            SKYLIB_ENUM_TO_STRING(BOW_STAGGER_BONUS),
            SKYLIB_ENUM_TO_STRING(TELEKINESIS),
            SKYLIB_ENUM_TO_STRING(FAVOR_POINTS_BONUS),
            SKYLIB_ENUM_TO_STRING(LAST_BRIBED_INTIMIDATED),
            SKYLIB_ENUM_TO_STRING(LAST_FLATTERED),
            SKYLIB_ENUM_TO_STRING(MOVEMENT_NOISE_MULT),
            SKYLIB_ENUM_TO_STRING(BYPASS_VENDOR_STOLEN_CHECK),
            SKYLIB_ENUM_TO_STRING(BYPASS_VENDOR_KEYWORD_CHECK),
            SKYLIB_ENUM_TO_STRING(WAITING_FOR_PLAYER),
            SKYLIB_ENUM_TO_STRING(ONE_HANDED_MODIFIER),
            SKYLIB_ENUM_TO_STRING(TWO_HANDED_MODIFIER),
            SKYLIB_ENUM_TO_STRING(MARKSMAN_MODIFIER),
            SKYLIB_ENUM_TO_STRING(BLOCK_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SMITHING_MODIFIER),
            SKYLIB_ENUM_TO_STRING(HEAVY_ARMOR_MODIFIER),
            SKYLIB_ENUM_TO_STRING(LIGHT_ARMOR_MODIFIER),
            SKYLIB_ENUM_TO_STRING(PICKPOCKET_MODIFIER),
            SKYLIB_ENUM_TO_STRING(LOCKPICKING_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SNEAK_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ALCHEMY_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SPEECHCRAFT_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ALTERATION_MODIFIER),
            SKYLIB_ENUM_TO_STRING(CONJURATION_MODIFIER),
            SKYLIB_ENUM_TO_STRING(DESTRUCTION_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ILLUSION_MODIFIER),
            SKYLIB_ENUM_TO_STRING(RESTORATION_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ENCHANTING_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ONE_HANDED_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(TWO_HANDED_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(MARKSMAN_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(BLOCK_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(SMITHING_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(HEAVY_ARMOR_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(LIGHT_ARMOR_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(PICKPOCKET_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(LOCKPICKING_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(SNEAK_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(ALCHEMY_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(SPEECHCRAFT_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(ALTERATION_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(CONJURATION_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(DESTRUCTION_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(ILLUSION_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(RESTORATION_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(ENCHANTING_SKILL_ADVANCE),
            SKYLIB_ENUM_TO_STRING(LEFT_WEAPON_SPEED_MULTIPLY),
            SKYLIB_ENUM_TO_STRING(DRAGON_SOULS),
            SKYLIB_ENUM_TO_STRING(COMBAT_HEALTH_REGEN_MULTIPLY),
            SKYLIB_ENUM_TO_STRING(ONE_HANDED_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(TWO_HANDED_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(MARKSMAN_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(BLOCK_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SMITHING_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(HEAVY_ARMOR_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(LIGHT_ARMOR_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(PICKPOCKET_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(LOCKPICKING_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SNEAK_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ALCHEMY_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(SPEECHCRAFT_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ALTERATION_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(CONJURATION_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(DESTRUCTION_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ILLUSION_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(RESTORATION_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(ENCHANTING_POWER_MODIFIER),
            SKYLIB_ENUM_TO_STRING(DRAGON_REND),
            SKYLIB_ENUM_TO_STRING(ATTACK_DAMAGE_MULT),
            SKYLIB_ENUM_TO_STRING(HEAL_RATE_MULT),
            SKYLIB_ENUM_TO_STRING(MAGICKA_RATE_MULT),
            SKYLIB_ENUM_TO_STRING(STAMINA_RATE_MULT),
            SKYLIB_ENUM_TO_STRING(WEREWOLF_PERKS),
            SKYLIB_ENUM_TO_STRING(VAMPIRE_PERKS),
            SKYLIB_ENUM_TO_STRING(GRAB_ACTOR_OFFSET),
            SKYLIB_ENUM_TO_STRING(GRABBED),
            SKYLIB_ENUM_TO_STRING(UNK_A2),
            SKYLIB_ENUM_TO_STRING(REFLECT_DAMAGE),
        };

        return strings;
    }

    some<const char*> Actor_Value_Type_e::To_String(Actor_Value_Type_e actor_value_type)
    {
        if (actor_value_type < _TOTAL_) {
            return Strings()[actor_value_type];
        } else {
            return "NONE";
        }
    }

    Actor_Value_Type_e Actor_Value_Type_e::From_String(maybe<const char*> actor_value_type)
    {
        if (actor_value_type) {
            some<const char* const*> strings = Strings();
            for (size_t idx = 0, end = _TOTAL_; idx < end; idx += 1) {
                some<const char*> string = strings[idx];
                if (CString_t::Is_Same(string(), actor_value_type(), true)) {
                    return static_cast<Actor_Value_Type_e::value_type>(idx);
                }
            }
            return _NONE_;
        } else {
            return _NONE_;
        }
    }

    Actor_Value_Type_e Actor_Value_Type_e::From_Abstract_Name(maybe<const char*> abstract_name)
    {
        static auto from_abstract_name = reinterpret_cast
            <Raw_Actor_Value_Type_t(*)(const char*)>
            (Game_t::Base_Address() + Offset_e::FROM_ABSTRACT_NAME);

        if (abstract_name) {
            Raw_Actor_Value_Type_t raw_actor_value_type = from_abstract_name(abstract_name());
            if (raw_actor_value_type < _TOTAL_) {
                return raw_actor_value_type;
            } else {
                return _NONE_;
            }
        } else {
            return _NONE_;
        }
    }

}