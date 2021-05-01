/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/armor.h"
#include "doticu_skylib/const_armors.h"
#include "doticu_skylib/const_mods.h"
#include "doticu_skylib/game_macros.h"

namespace doticu_skylib { namespace Const { namespace Armor {

    some<Armor_t*>  Ancient_Falmer_Body()                               { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00C816); }
    some<Armor_t*>  Ancient_Falmer_Feet()                               { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00C815); }
    some<Armor_t*>  Ancient_Falmer_Hands()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00C817); }
    some<Armor_t*>  Ancient_Falmer_Head()                               { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00C814); }

    some<Armor_t*>  Ancient_Falmer_Auriels_Shield()                     { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00284D); }

    some<Armor_t*>  Ancient_Falmer_Pauldronless_Body()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00CAD3); }

    some<Armor_t*>  Ancient_Falmer_Reflecting_Shield()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00488A); }

    some<Armor_t*>  Ancient_Nordic_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x018388); }
    some<Armor_t*>  Ancient_Nordic_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x056A9D); }
    some<Armor_t*>  Ancient_Nordic_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x056B17); }
    some<Armor_t*>  Ancient_Nordic_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x056A9E); }

    some<Armor_t*>  Ancient_Nordic_Ahzidal_Head()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0240FE); }

    some<Armor_t*>  Ancient_Nordic_Bromjunaar_Head()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CCA); }

    some<Armor_t*>  Ancient_Nordic_Dukaan_Head()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0240FF); }

    some<Armor_t*>  Ancient_Nordic_Hevnoraak_Head()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CC1); }

    some<Armor_t*>  Ancient_Nordic_Hunter_Body()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0050C6); }
    some<Armor_t*>  Ancient_Nordic_Hunter_Feet()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0050C5); }
    some<Armor_t*>  Ancient_Nordic_Hunter_Hands()                       { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0050C7); }

    some<Armor_t*>  Ancient_Nordic_Jagged_Crown_Head()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0DA750); }

    some<Armor_t*>  Ancient_Nordic_Kolbjorn_Body()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01DB97); }
    some<Armor_t*>  Ancient_Nordic_Kolbjorn_Feet()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01C655); }
    some<Armor_t*>  Ancient_Nordic_Kolbjorn_Hands()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01DB99); }
    some<Armor_t*>  Ancient_Nordic_Kolbjorn_Head()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01DB98); }

    some<Armor_t*>  Ancient_Nordic_Konahrik_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CD6); }

    some<Armor_t*>  Ancient_Nordic_Krosis_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CB9); }

    some<Armor_t*>  Ancient_Nordic_Morokei_Head()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061C8B); }

    some<Armor_t*>  Ancient_Nordic_Nahkriin_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CA5); }

    some<Armor_t*>  Ancient_Nordic_Otar_Head()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CC2); }

    some<Armor_t*>  Ancient_Nordic_Rahgot_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CC0); }

    some<Armor_t*>  Ancient_Nordic_Unburned_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F494E); }

    some<Armor_t*>  Ancient_Nordic_Vokun_Head()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CC9); }

    some<Armor_t*>  Ancient_Nordic_Volsung_Head()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x061CAB); }

    some<Armor_t*>  Ancient_Nordic_Ysgramor_Shield()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E41D8); }

    some<Armor_t*>  Ancient_Nordic_Zahkriisos_Head()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x024037); }

    some<Armor_t*>  Blades_Body()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04B28B); }
    some<Armor_t*>  Blades_Feet()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04B288); }
    some<Armor_t*>  Blades_Hands()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04B28D); }
    some<Armor_t*>  Blades_Head()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04B28F); }
    some<Armor_t*>  Blades_Shield()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04F912); }

    some<Armor_t*>  Bonemold_Body()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD93); }
    some<Armor_t*>  Bonemold_Body_Health_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D5); }
    some<Armor_t*>  Bonemold_Body_Health_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D6); }
    some<Armor_t*>  Bonemold_Body_Health_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D7); }
    some<Armor_t*>  Bonemold_Body_Light_Armor_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D8); }
    some<Armor_t*>  Bonemold_Body_Light_Armor_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D9); }
    some<Armor_t*>  Bonemold_Body_Light_Armor_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DA); }
    some<Armor_t*>  Bonemold_Feet()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD92); }
    some<Armor_t*>  Bonemold_Feet_Carry_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284C6); }
    some<Armor_t*>  Bonemold_Feet_Carry_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284C7); }
    some<Armor_t*>  Bonemold_Feet_Carry_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284C8); }
    some<Armor_t*>  Bonemold_Feet_Resist_Fire_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284C9); }
    some<Armor_t*>  Bonemold_Feet_Resist_Fire_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CA); }
    some<Armor_t*>  Bonemold_Feet_Resist_Fire_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CB); }
    some<Armor_t*>  Bonemold_Feet_Resist_Frost_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CC); }
    some<Armor_t*>  Bonemold_Feet_Resist_Frost_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CD); }
    some<Armor_t*>  Bonemold_Feet_Resist_Frost_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CE); }
    some<Armor_t*>  Bonemold_Feet_Resist_Shock_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284CF); }
    some<Armor_t*>  Bonemold_Feet_Resist_Shock_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D0); }
    some<Armor_t*>  Bonemold_Feet_Resist_Shock_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D1); }
    some<Armor_t*>  Bonemold_Feet_Sneak_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D2); }
    some<Armor_t*>  Bonemold_Feet_Sneak_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D3); }
    some<Armor_t*>  Bonemold_Feet_Sneak_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284D4); }
    some<Armor_t*>  Bonemold_Hands()                                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD94); }
    some<Armor_t*>  Bonemold_Hands_Alchemy_1()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DB); }
    some<Armor_t*>  Bonemold_Hands_Alchemy_2()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DC); }
    some<Armor_t*>  Bonemold_Hands_Alchemy_3()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DD); }
    some<Armor_t*>  Bonemold_Hands_Alteration_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DE); }
    some<Armor_t*>  Bonemold_Hands_Alteration_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284DF); }
    some<Armor_t*>  Bonemold_Hands_Alteration_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E0); }
    some<Armor_t*>  Bonemold_Hands_Conjuration_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E1); }
    some<Armor_t*>  Bonemold_Hands_Conjuration_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E2); }
    some<Armor_t*>  Bonemold_Hands_Conjuration_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E3); }
    some<Armor_t*>  Bonemold_Hands_Destruction_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E4); }
    some<Armor_t*>  Bonemold_Hands_Destruction_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E5); }
    some<Armor_t*>  Bonemold_Hands_Destruction_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E6); }
    some<Armor_t*>  Bonemold_Hands_Lockpicking_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E7); }
    some<Armor_t*>  Bonemold_Hands_Lockpicking_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E8); }
    some<Armor_t*>  Bonemold_Hands_Lockpicking_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284E9); }
    some<Armor_t*>  Bonemold_Hands_Marksman_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284EA); }
    some<Armor_t*>  Bonemold_Hands_Marksman_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284EB); }
    some<Armor_t*>  Bonemold_Hands_Marksman_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284EC); }
    some<Armor_t*>  Bonemold_Hands_One_Handed_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284ED); }
    some<Armor_t*>  Bonemold_Hands_One_Handed_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284EE); }
    some<Armor_t*>  Bonemold_Hands_One_Handed_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284EF); }
    some<Armor_t*>  Bonemold_Hands_Pickpocket_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F0); }
    some<Armor_t*>  Bonemold_Hands_Pickpocket_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F1); }
    some<Armor_t*>  Bonemold_Hands_Pickpocket_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F2); }
    some<Armor_t*>  Bonemold_Hands_Smithing_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F3); }
    some<Armor_t*>  Bonemold_Hands_Smithing_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F4); }
    some<Armor_t*>  Bonemold_Hands_Smithing_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F5); }
    some<Armor_t*>  Bonemold_Hands_Two_Handed_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F6); }
    some<Armor_t*>  Bonemold_Hands_Two_Handed_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F7); }
    some<Armor_t*>  Bonemold_Hands_Two_Handed_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F8); }
    some<Armor_t*>  Bonemold_Head()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD95); }
    some<Armor_t*>  Bonemold_Head_Alchemy_1()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284F9); }
    some<Armor_t*>  Bonemold_Head_Alchemy_2()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FA); }
    some<Armor_t*>  Bonemold_Head_Alchemy_3()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FB); }
    some<Armor_t*>  Bonemold_Head_Alteration_1()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FC); }
    some<Armor_t*>  Bonemold_Head_Alteration_2()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FD); }
    some<Armor_t*>  Bonemold_Head_Alteration_3()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FE); }
    some<Armor_t*>  Bonemold_Head_Conjuration_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0284FF); }
    some<Armor_t*>  Bonemold_Head_Conjuration_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028500); }
    some<Armor_t*>  Bonemold_Head_Conjuration_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028501); }
    some<Armor_t*>  Bonemold_Head_Destruction_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028502); }
    some<Armor_t*>  Bonemold_Head_Destruction_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028503); }
    some<Armor_t*>  Bonemold_Head_Destruction_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028504); }
    some<Armor_t*>  Bonemold_Head_Illusion_1()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028505); }
    some<Armor_t*>  Bonemold_Head_Illusion_2()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028506); }
    some<Armor_t*>  Bonemold_Head_Illusion_3()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028507); }
    some<Armor_t*>  Bonemold_Head_Magicka_1()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028508); }
    some<Armor_t*>  Bonemold_Head_Magicka_2()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028509); }
    some<Armor_t*>  Bonemold_Head_Magicka_3()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850A); }
    some<Armor_t*>  Bonemold_Shield()                                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x026234); }
    some<Armor_t*>  Bonemold_Shield_Block_1()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850B); }
    some<Armor_t*>  Bonemold_Shield_Block_2()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850C); }
    some<Armor_t*>  Bonemold_Shield_Block_3()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850D); }
    some<Armor_t*>  Bonemold_Shield_Resist_Fire_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850E); }
    some<Armor_t*>  Bonemold_Shield_Resist_Fire_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02850F); }
    some<Armor_t*>  Bonemold_Shield_Resist_Fire_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028510); }
    some<Armor_t*>  Bonemold_Shield_Resist_Frost_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028511); }
    some<Armor_t*>  Bonemold_Shield_Resist_Frost_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028512); }
    some<Armor_t*>  Bonemold_Shield_Resist_Frost_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028513); }
    some<Armor_t*>  Bonemold_Shield_Resist_Magic_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029150); }
    some<Armor_t*>  Bonemold_Shield_Resist_Magic_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029151); }
    some<Armor_t*>  Bonemold_Shield_Resist_Magic_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029152); }
    some<Armor_t*>  Bonemold_Shield_Resist_Shock_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028514); }
    some<Armor_t*>  Bonemold_Shield_Resist_Shock_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028515); }
    some<Armor_t*>  Bonemold_Shield_Resist_Shock_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028516); }

    some<Armor_t*>  Bonemold_Guard_Body()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037564); }

    some<Armor_t*>  Bonemold_Pauldron_Body()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037563); }

    some<Armor_t*>  Bonemold_Pauldron_Improved_Body()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03AB26); }
    some<Armor_t*>  Bonemold_Pauldron_Improved_Feet()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03AB25); }
    some<Armor_t*>  Bonemold_Pauldron_Improved_Hands()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03AB22); }
    some<Armor_t*>  Bonemold_Pauldron_Improved_Head()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03AB23); }
    some<Armor_t*>  Bonemold_Pauldron_Improved_Shield()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03AB24); }

    some<Armor_t*>  Chitin_Heavy_Body()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD8A); }
    some<Armor_t*>  Chitin_Heavy_Body_Alteration_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029163); }
    some<Armor_t*>  Chitin_Heavy_Body_Alteration_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029164); }
    some<Armor_t*>  Chitin_Heavy_Body_Alteration_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029165); }
    some<Armor_t*>  Chitin_Heavy_Body_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029166); }
    some<Armor_t*>  Chitin_Heavy_Body_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029167); }
    some<Armor_t*>  Chitin_Heavy_Body_Conjuration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029168); }
    some<Armor_t*>  Chitin_Heavy_Body_Destruction_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029169); }
    some<Armor_t*>  Chitin_Heavy_Body_Destruction_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916A); }
    some<Armor_t*>  Chitin_Heavy_Body_Destruction_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916B); }
    some<Armor_t*>  Chitin_Heavy_Body_Health_1()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916C); }
    some<Armor_t*>  Chitin_Heavy_Body_Health_2()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916D); }
    some<Armor_t*>  Chitin_Heavy_Body_Health_3()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916E); }
    some<Armor_t*>  Chitin_Heavy_Body_Heavy_Armor_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02916F); }
    some<Armor_t*>  Chitin_Heavy_Body_Heavy_Armor_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029170); }
    some<Armor_t*>  Chitin_Heavy_Body_Heavy_Armor_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029171); }
    some<Armor_t*>  Chitin_Heavy_Body_Illusion_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029172); }
    some<Armor_t*>  Chitin_Heavy_Body_Illusion_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029173); }
    some<Armor_t*>  Chitin_Heavy_Body_Illusion_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029174); }
    some<Armor_t*>  Chitin_Heavy_Body_Restoration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029175); }
    some<Armor_t*>  Chitin_Heavy_Body_Restoration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029176); }
    some<Armor_t*>  Chitin_Heavy_Body_Restoration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029177); }
    some<Armor_t*>  Chitin_Heavy_Feet()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD82); }
    some<Armor_t*>  Chitin_Heavy_Feet_Carry_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029153); }
    some<Armor_t*>  Chitin_Heavy_Feet_Carry_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029154); }
    some<Armor_t*>  Chitin_Heavy_Feet_Carry_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029155); }
    some<Armor_t*>  Chitin_Heavy_Feet_Muffle()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029156); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Fire_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029157); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Fire_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029158); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Fire_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029159); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Frost_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915A); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Frost_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915B); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Frost_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915C); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Shock_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915D); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Shock_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915E); }
    some<Armor_t*>  Chitin_Heavy_Feet_Resist_Shock_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02915F); }
    some<Armor_t*>  Chitin_Heavy_Feet_Stamina_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029160); }
    some<Armor_t*>  Chitin_Heavy_Feet_Stamina_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029161); }
    some<Armor_t*>  Chitin_Heavy_Feet_Stamina_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029162); }
    some<Armor_t*>  Chitin_Heavy_Hands()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD8B); }
    some<Armor_t*>  Chitin_Heavy_Hands_Alchemy_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029178); }
    some<Armor_t*>  Chitin_Heavy_Hands_Alchemy_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029179); }
    some<Armor_t*>  Chitin_Heavy_Hands_Alchemy_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917A); }
    some<Armor_t*>  Chitin_Heavy_Hands_Marksman_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917B); }
    some<Armor_t*>  Chitin_Heavy_Hands_Marksman_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917C); }
    some<Armor_t*>  Chitin_Heavy_Hands_Marksman_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917D); }
    some<Armor_t*>  Chitin_Heavy_Hands_One_Handed_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917E); }
    some<Armor_t*>  Chitin_Heavy_Hands_One_Handed_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02917F); }
    some<Armor_t*>  Chitin_Heavy_Hands_One_Handed_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029180); }
    some<Armor_t*>  Chitin_Heavy_Hands_Smithing_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029181); }
    some<Armor_t*>  Chitin_Heavy_Hands_Smithing_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029182); }
    some<Armor_t*>  Chitin_Heavy_Hands_Smithing_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029183); }
    some<Armor_t*>  Chitin_Heavy_Hands_Two_Handed_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029184); }
    some<Armor_t*>  Chitin_Heavy_Hands_Two_Handed_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029185); }
    some<Armor_t*>  Chitin_Heavy_Hands_Two_Handed_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029186); }
    some<Armor_t*>  Chitin_Heavy_Head()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD8C); }
    some<Armor_t*>  Chitin_Heavy_Head_Alchemy_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029187); }
    some<Armor_t*>  Chitin_Heavy_Head_Alchemy_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029188); }
    some<Armor_t*>  Chitin_Heavy_Head_Alchemy_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029189); }
    some<Armor_t*>  Chitin_Heavy_Head_Alteration_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918A); }
    some<Armor_t*>  Chitin_Heavy_Head_Alteration_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918B); }
    some<Armor_t*>  Chitin_Heavy_Head_Alteration_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918C); }
    some<Armor_t*>  Chitin_Heavy_Head_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918D); }
    some<Armor_t*>  Chitin_Heavy_Head_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918E); }
    some<Armor_t*>  Chitin_Heavy_Head_Conjuration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02918F); }
    some<Armor_t*>  Chitin_Heavy_Head_Destruction_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029190); }
    some<Armor_t*>  Chitin_Heavy_Head_Destruction_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029191); }
    some<Armor_t*>  Chitin_Heavy_Head_Destruction_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029192); }
    some<Armor_t*>  Chitin_Heavy_Head_Illusion_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029193); }
    some<Armor_t*>  Chitin_Heavy_Head_Illusion_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029194); }
    some<Armor_t*>  Chitin_Heavy_Head_Illusion_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029195); }
    some<Armor_t*>  Chitin_Heavy_Head_Magicka_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029196); }
    some<Armor_t*>  Chitin_Heavy_Head_Magicka_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029197); }
    some<Armor_t*>  Chitin_Heavy_Head_Magicka_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029198); }
    some<Armor_t*>  Chitin_Heavy_Head_Marksman_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029199); }
    some<Armor_t*>  Chitin_Heavy_Head_Marksman_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919A); }
    some<Armor_t*>  Chitin_Heavy_Head_Marksman_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919B); }
    some<Armor_t*>  Chitin_Heavy_Head_Restoration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919C); }
    some<Armor_t*>  Chitin_Heavy_Head_Restoration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919D); }
    some<Armor_t*>  Chitin_Heavy_Head_Restoration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919E); }
    some<Armor_t*>  Chitin_Heavy_Head_Waterbreathing()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02919F); }

    some<Armor_t*>  Chitin_Light_Body()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD87); }
    some<Armor_t*>  Chitin_Light_Body_Alteration_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF0); }
    some<Armor_t*>  Chitin_Light_Body_Alteration_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF1); }
    some<Armor_t*>  Chitin_Light_Body_Alteration_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF2); }
    some<Armor_t*>  Chitin_Light_Body_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF3); }
    some<Armor_t*>  Chitin_Light_Body_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF4); }
    some<Armor_t*>  Chitin_Light_Body_Conjuration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF5); }
    some<Armor_t*>  Chitin_Light_Body_Destruction_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF6); }
    some<Armor_t*>  Chitin_Light_Body_Destruction_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF7); }
    some<Armor_t*>  Chitin_Light_Body_Destruction_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF8); }
    some<Armor_t*>  Chitin_Light_Body_Health_1()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FF9); }
    some<Armor_t*>  Chitin_Light_Body_Health_2()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFE); }
    some<Armor_t*>  Chitin_Light_Body_Health_3()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFA); }
    some<Armor_t*>  Chitin_Light_Body_Light_Armor_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFB); }
    some<Armor_t*>  Chitin_Light_Body_Light_Armor_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFC); }
    some<Armor_t*>  Chitin_Light_Body_Light_Armor_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFF); }
    some<Armor_t*>  Chitin_Light_Body_Restoration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029000); }
    some<Armor_t*>  Chitin_Light_Body_Restoration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029001); }
    some<Armor_t*>  Chitin_Light_Body_Restoration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029002); }
    some<Armor_t*>  Chitin_Light_Feet()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD86); }
    some<Armor_t*>  Chitin_Light_Feet_Carry_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FDF); }
    some<Armor_t*>  Chitin_Light_Feet_Carry_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FFD); }
    some<Armor_t*>  Chitin_Light_Feet_Carry_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE0); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Fire_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE1); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Fire_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE2); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Fire_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE3); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Frost_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE4); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Frost_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE5); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Frost_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE6); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Shock_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE7); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Shock_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE8); }
    some<Armor_t*>  Chitin_Light_Feet_Resist_Shock_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FE9); }
    some<Armor_t*>  Chitin_Light_Feet_Sneak_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FEA); }
    some<Armor_t*>  Chitin_Light_Feet_Sneak_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FEB); }
    some<Armor_t*>  Chitin_Light_Feet_Sneak_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FEC); }
    some<Armor_t*>  Chitin_Light_Feet_Stamina_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FED); }
    some<Armor_t*>  Chitin_Light_Feet_Stamina_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FEE); }
    some<Armor_t*>  Chitin_Light_Feet_Stamina_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x028FEF); }
    some<Armor_t*>  Chitin_Light_Hands()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD88); }
    some<Armor_t*>  Chitin_Light_Hands_Alchemy_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029003); }
    some<Armor_t*>  Chitin_Light_Hands_Alchemy_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029004); }
    some<Armor_t*>  Chitin_Light_Hands_Alchemy_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029005); }
    some<Armor_t*>  Chitin_Light_Hands_Lockpicking_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029006); }
    some<Armor_t*>  Chitin_Light_Hands_Lockpicking_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029007); }
    some<Armor_t*>  Chitin_Light_Hands_Lockpicking_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029008); }
    some<Armor_t*>  Chitin_Light_Hands_Marksman_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029009); }
    some<Armor_t*>  Chitin_Light_Hands_Marksman_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900A); }
    some<Armor_t*>  Chitin_Light_Hands_Marksman_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900B); }
    some<Armor_t*>  Chitin_Light_Hands_One_Handed_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900C); }
    some<Armor_t*>  Chitin_Light_Hands_One_Handed_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900D); }
    some<Armor_t*>  Chitin_Light_Hands_One_Handed_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900E); }
    some<Armor_t*>  Chitin_Light_Hands_Pickpocket_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02900F); }
    some<Armor_t*>  Chitin_Light_Hands_Pickpocket_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029010); }
    some<Armor_t*>  Chitin_Light_Hands_Pickpocket_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029011); }
    some<Armor_t*>  Chitin_Light_Hands_Smithing_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029012); }
    some<Armor_t*>  Chitin_Light_Hands_Smithing_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029013); }
    some<Armor_t*>  Chitin_Light_Hands_Smithing_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029014); }
    some<Armor_t*>  Chitin_Light_Hands_Two_Handed_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029015); }
    some<Armor_t*>  Chitin_Light_Hands_Two_Handed_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029016); }
    some<Armor_t*>  Chitin_Light_Hands_Two_Handed_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029017); }
    some<Armor_t*>  Chitin_Light_Head()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD89); }
    some<Armor_t*>  Chitin_Light_Head_Alchemy_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029018); }
    some<Armor_t*>  Chitin_Light_Head_Alchemy_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029019); }
    some<Armor_t*>  Chitin_Light_Head_Alchemy_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901A); }
    some<Armor_t*>  Chitin_Light_Head_Alteration_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901B); }
    some<Armor_t*>  Chitin_Light_Head_Alteration_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901C); }
    some<Armor_t*>  Chitin_Light_Head_Alteration_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901D); }
    some<Armor_t*>  Chitin_Light_Head_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901E); }
    some<Armor_t*>  Chitin_Light_Head_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02901F); }
    some<Armor_t*>  Chitin_Light_Head_Conjuration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029020); }
    some<Armor_t*>  Chitin_Light_Head_Destruction_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029021); }
    some<Armor_t*>  Chitin_Light_Head_Destruction_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029022); }
    some<Armor_t*>  Chitin_Light_Head_Destruction_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029024); }
    some<Armor_t*>  Chitin_Light_Head_Illusion_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029023); }
    some<Armor_t*>  Chitin_Light_Head_Illusion_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029025); }
    some<Armor_t*>  Chitin_Light_Head_Illusion_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029026); }
    some<Armor_t*>  Chitin_Light_Head_Magicka_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029027); }
    some<Armor_t*>  Chitin_Light_Head_Magicka_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029028); }
    some<Armor_t*>  Chitin_Light_Head_Magicka_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029029); }
    some<Armor_t*>  Chitin_Light_Head_Marksman_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902A); }
    some<Armor_t*>  Chitin_Light_Head_Marksman_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902B); }
    some<Armor_t*>  Chitin_Light_Head_Marksman_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902C); }
    some<Armor_t*>  Chitin_Light_Head_Restoration_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902D); }
    some<Armor_t*>  Chitin_Light_Head_Restoration_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902E); }
    some<Armor_t*>  Chitin_Light_Head_Restoration_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02902F); }
    some<Armor_t*>  Chitin_Light_Shield()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x026235); }
    some<Armor_t*>  Chitin_Light_Shield_Block_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029030); }
    some<Armor_t*>  Chitin_Light_Shield_Block_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029031); }
    some<Armor_t*>  Chitin_Light_Shield_Block_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029032); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Fire_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029033); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Fire_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029034); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Fire_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029035); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029036); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Frost_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029037); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Frost_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029038); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Magic_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029039); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Magic_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02903A); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Magic_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02903B); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Shock_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02903C); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Shock_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02903D); }
    some<Armor_t*>  Chitin_Light_Shield_Resist_Shock_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02903E); }

    some<Armor_t*>  Daedric_Body()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01396B); }
    some<Armor_t*>  Daedric_Body_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF30); }
    some<Armor_t*>  Daedric_Body_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF31); }
    some<Armor_t*>  Daedric_Body_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF32); }
    some<Armor_t*>  Daedric_Body_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF33); }
    some<Armor_t*>  Daedric_Body_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF34); }
    some<Armor_t*>  Daedric_Body_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF35); }
    some<Armor_t*>  Daedric_Body_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF36); }
    some<Armor_t*>  Daedric_Body_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF37); }
    some<Armor_t*>  Daedric_Body_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF38); }
    some<Armor_t*>  Daedric_Body_Health_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A98); }
    some<Armor_t*>  Daedric_Body_Health_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A99); }
    some<Armor_t*>  Daedric_Body_Health_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A9A); }
    some<Armor_t*>  Daedric_Body_Health_Rate_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FE); }
    some<Armor_t*>  Daedric_Body_Health_Rate_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FF); }
    some<Armor_t*>  Daedric_Body_Health_Rate_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE300); }
    some<Armor_t*>  Daedric_Body_Heavy_Armor_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A9B); }
    some<Armor_t*>  Daedric_Body_Heavy_Armor_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A9C); }
    some<Armor_t*>  Daedric_Body_Heavy_Armor_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A9D); }
    some<Armor_t*>  Daedric_Body_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF39); }
    some<Armor_t*>  Daedric_Body_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3A); }
    some<Armor_t*>  Daedric_Body_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3B); }
    some<Armor_t*>  Daedric_Body_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3C); }
    some<Armor_t*>  Daedric_Body_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3D); }
    some<Armor_t*>  Daedric_Body_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3E); }
    some<Armor_t*>  Daedric_Body_Stamina_Rate_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FB); }
    some<Armor_t*>  Daedric_Body_Stamina_Rate_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FC); }
    some<Armor_t*>  Daedric_Body_Stamina_Rate_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FD); }
    some<Armor_t*>  Daedric_Feet()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01396A); }
    some<Armor_t*>  Daedric_Feet_Carry_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A88); }
    some<Armor_t*>  Daedric_Feet_Carry_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A89); }
    some<Armor_t*>  Daedric_Feet_Carry_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8A); }
    some<Armor_t*>  Daedric_Feet_Muffle()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8B); }
    some<Armor_t*>  Daedric_Feet_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8C); }
    some<Armor_t*>  Daedric_Feet_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8D); }
    some<Armor_t*>  Daedric_Feet_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8E); }
    some<Armor_t*>  Daedric_Feet_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A8F); }
    some<Armor_t*>  Daedric_Feet_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A90); }
    some<Armor_t*>  Daedric_Feet_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A91); }
    some<Armor_t*>  Daedric_Feet_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A92); }
    some<Armor_t*>  Daedric_Feet_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A93); }
    some<Armor_t*>  Daedric_Feet_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A94); }
    some<Armor_t*>  Daedric_Feet_Stamina_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF77); }
    some<Armor_t*>  Daedric_Feet_Stamina_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF78); }
    some<Armor_t*>  Daedric_Feet_Stamina_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF79); }
    some<Armor_t*>  Daedric_Hands()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01396C); }
    some<Armor_t*>  Daedric_Hands_Alchemy_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AAE); }
    some<Armor_t*>  Daedric_Hands_Alchemy_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AAF); }
    some<Armor_t*>  Daedric_Hands_Alchemy_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AB0); }
    some<Armor_t*>  Daedric_Hands_Marksman_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC3); }
    some<Armor_t*>  Daedric_Hands_Marksman_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC4); }
    some<Armor_t*>  Daedric_Hands_Marksman_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC5); }
    some<Armor_t*>  Daedric_Hands_One_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC6); }
    some<Armor_t*>  Daedric_Hands_One_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC7); }
    some<Armor_t*>  Daedric_Hands_One_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AC8); }
    some<Armor_t*>  Daedric_Hands_Smithing_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ACC); }
    some<Armor_t*>  Daedric_Hands_Smithing_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ACD); }
    some<Armor_t*>  Daedric_Hands_Smithing_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ACE); }
    some<Armor_t*>  Daedric_Hands_Two_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ACF); }
    some<Armor_t*>  Daedric_Hands_Two_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD0); }
    some<Armor_t*>  Daedric_Hands_Two_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD1); }
    some<Armor_t*>  Daedric_Head()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01396D); }
    some<Armor_t*>  Daedric_Head_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD2); }
    some<Armor_t*>  Daedric_Head_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD3); }
    some<Armor_t*>  Daedric_Head_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD4); }
    some<Armor_t*>  Daedric_Head_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD5); }
    some<Armor_t*>  Daedric_Head_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD6); }
    some<Armor_t*>  Daedric_Head_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD7); }
    some<Armor_t*>  Daedric_Head_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD8); }
    some<Armor_t*>  Daedric_Head_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AD9); }
    some<Armor_t*>  Daedric_Head_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ADA); }
    some<Armor_t*>  Daedric_Head_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ADB); }
    some<Armor_t*>  Daedric_Head_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ADC); }
    some<Armor_t*>  Daedric_Head_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7ADD); }
    some<Armor_t*>  Daedric_Head_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE1); }
    some<Armor_t*>  Daedric_Head_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE2); }
    some<Armor_t*>  Daedric_Head_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE3); }
    some<Armor_t*>  Daedric_Head_Magicka_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE4); }
    some<Armor_t*>  Daedric_Head_Magicka_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE5); }
    some<Armor_t*>  Daedric_Head_Magicka_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE6); }
    some<Armor_t*>  Daedric_Head_Magicka_Rate_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE301); }
    some<Armor_t*>  Daedric_Head_Magicka_Rate_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE302); }
    some<Armor_t*>  Daedric_Head_Magicka_Rate_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE303); }
    some<Armor_t*>  Daedric_Head_Marksman_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE7); }
    some<Armor_t*>  Daedric_Head_Marksman_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE8); }
    some<Armor_t*>  Daedric_Head_Marksman_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AE9); }
    some<Armor_t*>  Daedric_Head_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AEA); }
    some<Armor_t*>  Daedric_Head_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AEB); }
    some<Armor_t*>  Daedric_Head_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AEC); }
    some<Armor_t*>  Daedric_Head_Waterbreathing()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AED); }
    some<Armor_t*>  Daedric_Shield()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01396E); }
    some<Armor_t*>  Daedric_Shield_Block_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AEE); }
    some<Armor_t*>  Daedric_Shield_Block_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AEF); }
    some<Armor_t*>  Daedric_Shield_Block_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF0); }
    some<Armor_t*>  Daedric_Shield_Resist_Fire_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF1); }
    some<Armor_t*>  Daedric_Shield_Resist_Fire_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF2); }
    some<Armor_t*>  Daedric_Shield_Resist_Fire_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF3); }
    some<Armor_t*>  Daedric_Shield_Resist_Frost_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF4); }
    some<Armor_t*>  Daedric_Shield_Resist_Frost_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF5); }
    some<Armor_t*>  Daedric_Shield_Resist_Frost_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF6); }
    some<Armor_t*>  Daedric_Shield_Resist_Magic_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA1); }
    some<Armor_t*>  Daedric_Shield_Resist_Magic_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA2); }
    some<Armor_t*>  Daedric_Shield_Resist_Magic_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA3); }
    some<Armor_t*>  Daedric_Shield_Resist_Shock_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF7); }
    some<Armor_t*>  Daedric_Shield_Resist_Shock_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF8); }
    some<Armor_t*>  Daedric_Shield_Resist_Shock_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7AF9); }

    some<Armor_t*>  Daedric_Dremora_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1ABE); }
    some<Armor_t*>  Daedric_Dremora_Feet()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1ABD); }
    some<Armor_t*>  Daedric_Dremora_Hands()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1AC0); }
    some<Armor_t*>  Daedric_Dremora_Head()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10F75F); }

    some<Armor_t*>  Dawnguard_Heavy_Feet()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x014757); }
    some<Armor_t*>  Dawnguard_Heavy_Hands()                             { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x014758); }
    some<Armor_t*>  Dawnguard_Heavy_Head()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0050D0); }
    some<Armor_t*>  Dawnguard_Heavy_Shield()                            { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0150B8); }

    some<Armor_t*>  Dawnguard_Heavy_Brown_Body()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F3F7); }

    some<Armor_t*>  Dawnguard_Heavy_Grey_Body()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F3FA); }

    some<Armor_t*>  Dawnguard_Light_Feet()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F400); }
    some<Armor_t*>  Dawnguard_Light_Hands()                             { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F3FE); }
    some<Armor_t*>  Dawnguard_Light_Head()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01989E); }
    some<Armor_t*>  Dawnguard_Light_Shield()                            { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x011BAF); }

    some<Armor_t*>  Dawnguard_Light_Brown_Body()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F404); }

    some<Armor_t*>  Dawnguard_Light_Grey_Body()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F402); }

    some<Armor_t*>  Dawnguard_Light_Red_Body()                          { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F3FB); }

    some<Armor_t*>  Dragonplate_Body()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013966); }
    some<Armor_t*>  Dragonplate_Body_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF3F); }
    some<Armor_t*>  Dragonplate_Body_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4C); }
    some<Armor_t*>  Dragonplate_Body_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF40); }
    some<Armor_t*>  Dragonplate_Body_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF41); }
    some<Armor_t*>  Dragonplate_Body_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF42); }
    some<Armor_t*>  Dragonplate_Body_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF43); }
    some<Armor_t*>  Dragonplate_Body_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF44); }
    some<Armor_t*>  Dragonplate_Body_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4D); }
    some<Armor_t*>  Dragonplate_Body_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF45); }
    some<Armor_t*>  Dragonplate_Body_Health_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A26); }
    some<Armor_t*>  Dragonplate_Body_Health_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A27); }
    some<Armor_t*>  Dragonplate_Body_Health_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A28); }
    some<Armor_t*>  Dragonplate_Body_Health_Rate_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F5); }
    some<Armor_t*>  Dragonplate_Body_Health_Rate_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F6); }
    some<Armor_t*>  Dragonplate_Body_Health_Rate_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F7); }
    some<Armor_t*>  Dragonplate_Body_Heavy_Armor_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A29); }
    some<Armor_t*>  Dragonplate_Body_Heavy_Armor_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A2A); }
    some<Armor_t*>  Dragonplate_Body_Heavy_Armor_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A2B); }
    some<Armor_t*>  Dragonplate_Body_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF46); }
    some<Armor_t*>  Dragonplate_Body_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF47); }
    some<Armor_t*>  Dragonplate_Body_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF48); }
    some<Armor_t*>  Dragonplate_Body_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF49); }
    some<Armor_t*>  Dragonplate_Body_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4A); }
    some<Armor_t*>  Dragonplate_Body_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4B); }
    some<Armor_t*>  Dragonplate_Body_Stamina_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F8); }
    some<Armor_t*>  Dragonplate_Body_Stamina_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F9); }
    some<Armor_t*>  Dragonplate_Body_Stamina_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2FA); }
    some<Armor_t*>  Dragonplate_Feet()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013965); }
    some<Armor_t*>  Dragonplate_Feet_Carry_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1C); }
    some<Armor_t*>  Dragonplate_Feet_Carry_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1D); }
    some<Armor_t*>  Dragonplate_Feet_Carry_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1E); }
    some<Armor_t*>  Dragonplate_Feet_Muffle()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1F); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Fire_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A20); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Fire_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A21); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Fire_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A22); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Frost_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A23); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Frost_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A24); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Frost_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A25); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Shock_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A95); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Shock_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A96); }
    some<Armor_t*>  Dragonplate_Feet_Resist_Shock_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A97); }
    some<Armor_t*>  Dragonplate_Feet_Stamina_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7A); }
    some<Armor_t*>  Dragonplate_Feet_Stamina_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7B); }
    some<Armor_t*>  Dragonplate_Feet_Stamina_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7C); }
    some<Armor_t*>  Dragonplate_Hands()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013967); }
    some<Armor_t*>  Dragonplate_Hands_Alchemy_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A3C); }
    some<Armor_t*>  Dragonplate_Hands_Alchemy_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A3D); }
    some<Armor_t*>  Dragonplate_Hands_Alchemy_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A3E); }
    some<Armor_t*>  Dragonplate_Hands_Marksman_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A51); }
    some<Armor_t*>  Dragonplate_Hands_Marksman_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A52); }
    some<Armor_t*>  Dragonplate_Hands_Marksman_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A53); }
    some<Armor_t*>  Dragonplate_Hands_One_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A54); }
    some<Armor_t*>  Dragonplate_Hands_One_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A55); }
    some<Armor_t*>  Dragonplate_Hands_One_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A56); }
    some<Armor_t*>  Dragonplate_Hands_Smithing_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5A); }
    some<Armor_t*>  Dragonplate_Hands_Smithing_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5B); }
    some<Armor_t*>  Dragonplate_Hands_Smithing_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5C); }
    some<Armor_t*>  Dragonplate_Hands_Two_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5D); }
    some<Armor_t*>  Dragonplate_Hands_Two_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5E); }
    some<Armor_t*>  Dragonplate_Hands_Two_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A5F); }
    some<Armor_t*>  Dragonplate_Head()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013969); }
    some<Armor_t*>  Dragonplate_Head_Alchemy_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A60); }
    some<Armor_t*>  Dragonplate_Head_Alchemy_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A61); }
    some<Armor_t*>  Dragonplate_Head_Alchemy_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A62); }
    some<Armor_t*>  Dragonplate_Head_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A63); }
    some<Armor_t*>  Dragonplate_Head_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A64); }
    some<Armor_t*>  Dragonplate_Head_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A65); }
    some<Armor_t*>  Dragonplate_Head_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A66); }
    some<Armor_t*>  Dragonplate_Head_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A67); }
    some<Armor_t*>  Dragonplate_Head_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A68); }
    some<Armor_t*>  Dragonplate_Head_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A69); }
    some<Armor_t*>  Dragonplate_Head_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A6A); }
    some<Armor_t*>  Dragonplate_Head_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A6B); }
    some<Armor_t*>  Dragonplate_Head_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A6F); }
    some<Armor_t*>  Dragonplate_Head_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A70); }
    some<Armor_t*>  Dragonplate_Head_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A71); }
    some<Armor_t*>  Dragonplate_Head_Magicka_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A72); }
    some<Armor_t*>  Dragonplate_Head_Magicka_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A73); }
    some<Armor_t*>  Dragonplate_Head_Magicka_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A74); }
    some<Armor_t*>  Dragonplate_Head_Magicka_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F2); }
    some<Armor_t*>  Dragonplate_Head_Magicka_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F3); }
    some<Armor_t*>  Dragonplate_Head_Magicka_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F4); }
    some<Armor_t*>  Dragonplate_Head_Marksman_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A75); }
    some<Armor_t*>  Dragonplate_Head_Marksman_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A76); }
    some<Armor_t*>  Dragonplate_Head_Marksman_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A77); }
    some<Armor_t*>  Dragonplate_Head_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A78); }
    some<Armor_t*>  Dragonplate_Head_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A79); }
    some<Armor_t*>  Dragonplate_Head_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7A); }
    some<Armor_t*>  Dragonplate_Head_Waterbreathing()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7B); }
    some<Armor_t*>  Dragonplate_Shield()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013968); }
    some<Armor_t*>  Dragonplate_Shield_Block_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7C); }
    some<Armor_t*>  Dragonplate_Shield_Block_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7D); }
    some<Armor_t*>  Dragonplate_Shield_Block_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7E); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Fire_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A7F); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Fire_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A80); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Fire_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A81); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Frost_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A82); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Frost_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A83); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Frost_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A84); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Magic_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA4); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Magic_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA5); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Magic_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA6); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Shock_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A85); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Shock_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A86); }
    some<Armor_t*>  Dragonplate_Shield_Resist_Shock_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A87); }

    some<Armor_t*>  Dragonplate_Keeper_Body()                           { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x017F76); }
    some<Armor_t*>  Dragonplate_Keeper_Feet()                           { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x017F73); }
    some<Armor_t*>  Dragonplate_Keeper_Hands()                          { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x017F75); }
    some<Armor_t*>  Dragonplate_Keeper_Shield()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x018065); }

    some<Armor_t*>  Dragonscale_Body()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393E); }
    some<Armor_t*>  Dragonscale_Body_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4E); }
    some<Armor_t*>  Dragonscale_Body_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF4F); }
    some<Armor_t*>  Dragonscale_Body_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF50); }
    some<Armor_t*>  Dragonscale_Body_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF51); }
    some<Armor_t*>  Dragonscale_Body_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF52); }
    some<Armor_t*>  Dragonscale_Body_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF53); }
    some<Armor_t*>  Dragonscale_Body_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF54); }
    some<Armor_t*>  Dragonscale_Body_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF55); }
    some<Armor_t*>  Dragonscale_Body_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF56); }
    some<Armor_t*>  Dragonscale_Body_Health_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BA); }
    some<Armor_t*>  Dragonscale_Body_Health_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BB); }
    some<Armor_t*>  Dragonscale_Body_Health_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BC); }
    some<Armor_t*>  Dragonscale_Body_Health_Rate_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E0); }
    some<Armor_t*>  Dragonscale_Body_Health_Rate_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E1); }
    some<Armor_t*>  Dragonscale_Body_Health_Rate_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E2); }
    some<Armor_t*>  Dragonscale_Body_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF57); }
    some<Armor_t*>  Dragonscale_Body_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF58); }
    some<Armor_t*>  Dragonscale_Body_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF59); }
    some<Armor_t*>  Dragonscale_Body_Light_Armor_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BD); }
    some<Armor_t*>  Dragonscale_Body_Light_Armor_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BE); }
    some<Armor_t*>  Dragonscale_Body_Light_Armor_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79BF); }
    some<Armor_t*>  Dragonscale_Body_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5A); }
    some<Armor_t*>  Dragonscale_Body_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5C); }
    some<Armor_t*>  Dragonscale_Body_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5B); }
    some<Armor_t*>  Dragonscale_Body_Stamina_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E3); }
    some<Armor_t*>  Dragonscale_Body_Stamina_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E4); }
    some<Armor_t*>  Dragonscale_Body_Stamina_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E5); }
    some<Armor_t*>  Dragonscale_Feet()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393D); }
    some<Armor_t*>  Dragonscale_Feet_Carry_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79A7); }
    some<Armor_t*>  Dragonscale_Feet_Carry_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79A8); }
    some<Armor_t*>  Dragonscale_Feet_Carry_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79A9); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Fire_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AB); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Fire_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AC); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Fire_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AD); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Frost_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AE); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Frost_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AF); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Frost_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79B0); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Shock_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79B1); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Shock_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79B2); }
    some<Armor_t*>  Dragonscale_Feet_Resist_Shock_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79B3); }
    some<Armor_t*>  Dragonscale_Feet_Sneak_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79AA); }
    some<Armor_t*>  Dragonscale_Feet_Sneak_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA05); }
    some<Armor_t*>  Dragonscale_Feet_Sneak_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA06); }
    some<Armor_t*>  Dragonscale_Feet_Stamina_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7D); }
    some<Armor_t*>  Dragonscale_Feet_Stamina_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7E); }
    some<Armor_t*>  Dragonscale_Feet_Stamina_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF7F); }
    some<Armor_t*>  Dragonscale_Hands()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393F); }
    some<Armor_t*>  Dragonscale_Hands_Alchemy_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79D0); }
    some<Armor_t*>  Dragonscale_Hands_Alchemy_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79D1); }
    some<Armor_t*>  Dragonscale_Hands_Alchemy_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79D2); }
    some<Armor_t*>  Dragonscale_Hands_Lockpicking_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF71); }
    some<Armor_t*>  Dragonscale_Hands_Lockpicking_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF72); }
    some<Armor_t*>  Dragonscale_Hands_Lockpicking_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF73); }
    some<Armor_t*>  Dragonscale_Hands_Marksman_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79E5); }
    some<Armor_t*>  Dragonscale_Hands_Marksman_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79E6); }
    some<Armor_t*>  Dragonscale_Hands_Marksman_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79E7); }
    some<Armor_t*>  Dragonscale_Hands_One_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79E8); }
    some<Armor_t*>  Dragonscale_Hands_One_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79E9); }
    some<Armor_t*>  Dragonscale_Hands_One_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79EA); }
    some<Armor_t*>  Dragonscale_Hands_Pickpocket_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF6E); }
    some<Armor_t*>  Dragonscale_Hands_Pickpocket_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF6F); }
    some<Armor_t*>  Dragonscale_Hands_Pickpocket_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF70); }
    some<Armor_t*>  Dragonscale_Hands_Smithing_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79EE); }
    some<Armor_t*>  Dragonscale_Hands_Smithing_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79EF); }
    some<Armor_t*>  Dragonscale_Hands_Smithing_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F0); }
    some<Armor_t*>  Dragonscale_Hands_Two_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F1); }
    some<Armor_t*>  Dragonscale_Hands_Two_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F2); }
    some<Armor_t*>  Dragonscale_Hands_Two_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F3); }
    some<Armor_t*>  Dragonscale_Head()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013940); }
    some<Armor_t*>  Dragonscale_Head_Alchemy_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F4); }
    some<Armor_t*>  Dragonscale_Head_Alchemy_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F5); }
    some<Armor_t*>  Dragonscale_Head_Alchemy_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F6); }
    some<Armor_t*>  Dragonscale_Head_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F7); }
    some<Armor_t*>  Dragonscale_Head_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F8); }
    some<Armor_t*>  Dragonscale_Head_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79F9); }
    some<Armor_t*>  Dragonscale_Head_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FA); }
    some<Armor_t*>  Dragonscale_Head_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FB); }
    some<Armor_t*>  Dragonscale_Head_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FC); }
    some<Armor_t*>  Dragonscale_Head_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FD); }
    some<Armor_t*>  Dragonscale_Head_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FE); }
    some<Armor_t*>  Dragonscale_Head_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D79FF); }
    some<Armor_t*>  Dragonscale_Head_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A03); }
    some<Armor_t*>  Dragonscale_Head_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A04); }
    some<Armor_t*>  Dragonscale_Head_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A05); }
    some<Armor_t*>  Dragonscale_Head_Magicka_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A06); }
    some<Armor_t*>  Dragonscale_Head_Magicka_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A07); }
    some<Armor_t*>  Dragonscale_Head_Magicka_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A08); }
    some<Armor_t*>  Dragonscale_Head_Magicka_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E6); }
    some<Armor_t*>  Dragonscale_Head_Magicka_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E7); }
    some<Armor_t*>  Dragonscale_Head_Magicka_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E8); }
    some<Armor_t*>  Dragonscale_Head_Marksman_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A09); }
    some<Armor_t*>  Dragonscale_Head_Marksman_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0A); }
    some<Armor_t*>  Dragonscale_Head_Marksman_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0B); }
    some<Armor_t*>  Dragonscale_Head_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0C); }
    some<Armor_t*>  Dragonscale_Head_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0D); }
    some<Armor_t*>  Dragonscale_Head_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0E); }
    some<Armor_t*>  Dragonscale_Head_Waterbreathing()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A0F); }
    some<Armor_t*>  Dragonscale_Shield()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013941); }
    some<Armor_t*>  Dragonscale_Shield_Block_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A10); }
    some<Armor_t*>  Dragonscale_Shield_Block_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A11); }
    some<Armor_t*>  Dragonscale_Shield_Block_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A12); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Fire_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A13); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Fire_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A14); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Fire_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A15); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Frost_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A16); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Frost_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A17); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Frost_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A18); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Magic_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA7); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Magic_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA8); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Magic_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA9); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Shock_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A19); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Shock_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1A); }
    some<Armor_t*>  Dragonscale_Shield_Resist_Shock_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D7A1B); }

    some<Armor_t*>  Dwarven_Body()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01394D); }
    some<Armor_t*>  Dwarven_Body_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5D); }
    some<Armor_t*>  Dwarven_Body_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B67A); }
    some<Armor_t*>  Dwarven_Body_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5E); }
    some<Armor_t*>  Dwarven_Body_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF5F); }
    some<Armor_t*>  Dwarven_Body_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF60); }
    some<Armor_t*>  Dwarven_Body_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF61); }
    some<Armor_t*>  Dwarven_Body_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF62); }
    some<Armor_t*>  Dwarven_Body_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF63); }
    some<Armor_t*>  Dwarven_Body_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF64); }
    some<Armor_t*>  Dwarven_Body_Health_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D8); }
    some<Armor_t*>  Dwarven_Body_Health_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D9); }
    some<Armor_t*>  Dwarven_Body_Health_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3DA); }
    some<Armor_t*>  Dwarven_Body_Heavy_Armor_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3DB); }
    some<Armor_t*>  Dwarven_Body_Heavy_Armor_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B40F); }
    some<Armor_t*>  Dwarven_Body_Heavy_Armor_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B440); }
    some<Armor_t*>  Dwarven_Body_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF65); }
    some<Armor_t*>  Dwarven_Body_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF66); }
    some<Armor_t*>  Dwarven_Body_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF67); }
    some<Armor_t*>  Dwarven_Body_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF68); }
    some<Armor_t*>  Dwarven_Body_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF69); }
    some<Armor_t*>  Dwarven_Body_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6A); }
    some<Armor_t*>  Dwarven_Feet()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01394C); }
    some<Armor_t*>  Dwarven_Feet_Carry_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B335); }
    some<Armor_t*>  Dwarven_Feet_Carry_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B33D); }
    some<Armor_t*>  Dwarven_Feet_Carry_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3CB); }
    some<Armor_t*>  Dwarven_Feet_Muffle()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092A89); }
    some<Armor_t*>  Dwarven_Feet_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3CC); }
    some<Armor_t*>  Dwarven_Feet_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3CD); }
    some<Armor_t*>  Dwarven_Feet_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3CE); }
    some<Armor_t*>  Dwarven_Feet_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3CF); }
    some<Armor_t*>  Dwarven_Feet_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D0); }
    some<Armor_t*>  Dwarven_Feet_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D1); }
    some<Armor_t*>  Dwarven_Feet_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D2); }
    some<Armor_t*>  Dwarven_Feet_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D3); }
    some<Armor_t*>  Dwarven_Feet_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3D4); }
    some<Armor_t*>  Dwarven_Feet_Stamina_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF80); }
    some<Armor_t*>  Dwarven_Feet_Stamina_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF81); }
    some<Armor_t*>  Dwarven_Feet_Stamina_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF82); }
    some<Armor_t*>  Dwarven_Hands()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01394E); }
    some<Armor_t*>  Dwarven_Hands_Alchemy_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B673); }
    some<Armor_t*>  Dwarven_Hands_Alchemy_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B674); }
    some<Armor_t*>  Dwarven_Hands_Alchemy_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B675); }
    some<Armor_t*>  Dwarven_Hands_Marksman_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3FB); }
    some<Armor_t*>  Dwarven_Hands_Marksman_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3FC); }
    some<Armor_t*>  Dwarven_Hands_Marksman_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3FD); }
    some<Armor_t*>  Dwarven_Hands_One_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B755); }
    some<Armor_t*>  Dwarven_Hands_One_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B756); }
    some<Armor_t*>  Dwarven_Hands_One_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B757); }
    some<Armor_t*>  Dwarven_Hands_Smithing_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B761); }
    some<Armor_t*>  Dwarven_Hands_Smithing_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B762); }
    some<Armor_t*>  Dwarven_Hands_Smithing_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B766); }
    some<Armor_t*>  Dwarven_Hands_Two_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B767); }
    some<Armor_t*>  Dwarven_Hands_Two_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B768); }
    some<Armor_t*>  Dwarven_Hands_Two_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76A); }
    some<Armor_t*>  Dwarven_Head()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01394F); }
    some<Armor_t*>  Dwarven_Head_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B65A); }
    some<Armor_t*>  Dwarven_Head_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B662); }
    some<Armor_t*>  Dwarven_Head_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B663); }
    some<Armor_t*>  Dwarven_Head_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76B); }
    some<Armor_t*>  Dwarven_Head_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76C); }
    some<Armor_t*>  Dwarven_Head_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76D); }
    some<Armor_t*>  Dwarven_Head_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76E); }
    some<Armor_t*>  Dwarven_Head_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B76F); }
    some<Armor_t*>  Dwarven_Head_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B770); }
    some<Armor_t*>  Dwarven_Head_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B771); }
    some<Armor_t*>  Dwarven_Head_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B772); }
    some<Armor_t*>  Dwarven_Head_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B78A); }
    some<Armor_t*>  Dwarven_Head_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9B0); }
    some<Armor_t*>  Dwarven_Head_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9B7); }
    some<Armor_t*>  Dwarven_Head_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9B8); }
    some<Armor_t*>  Dwarven_Head_Magicka_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9BB); }
    some<Armor_t*>  Dwarven_Head_Magicka_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9BC); }
    some<Armor_t*>  Dwarven_Head_Magicka_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9BE); }
    some<Armor_t*>  Dwarven_Head_Marksman_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C0); }
    some<Armor_t*>  Dwarven_Head_Marksman_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C1); }
    some<Armor_t*>  Dwarven_Head_Marksman_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C3); }
    some<Armor_t*>  Dwarven_Head_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C4); }
    some<Armor_t*>  Dwarven_Head_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C5); }
    some<Armor_t*>  Dwarven_Head_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C7); }
    some<Armor_t*>  Dwarven_Head_Waterbreathing()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092A8D); }
    some<Armor_t*>  Dwarven_Shield()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013950); }
    some<Armor_t*>  Dwarven_Shield_Block_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9C8); }
    some<Armor_t*>  Dwarven_Shield_Block_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE031); }
    some<Armor_t*>  Dwarven_Shield_Block_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B9E2); }
    some<Armor_t*>  Dwarven_Shield_Resist_Fire_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B6F); }
    some<Armor_t*>  Dwarven_Shield_Resist_Fire_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B83); }
    some<Armor_t*>  Dwarven_Shield_Resist_Fire_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B84); }
    some<Armor_t*>  Dwarven_Shield_Resist_Frost_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B70); }
    some<Armor_t*>  Dwarven_Shield_Resist_Frost_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B85); }
    some<Armor_t*>  Dwarven_Shield_Resist_Frost_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B86); }
    some<Armor_t*>  Dwarven_Shield_Resist_Magic_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAA); }
    some<Armor_t*>  Dwarven_Shield_Resist_Magic_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAB); }
    some<Armor_t*>  Dwarven_Shield_Resist_Magic_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAC); }
    some<Armor_t*>  Dwarven_Shield_Resist_Shock_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B71); }
    some<Armor_t*>  Dwarven_Shield_Resist_Shock_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B87); }
    some<Armor_t*>  Dwarven_Shield_Resist_Shock_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B88); }

    some<Armor_t*>  Dwarven_Aetherial_Shield()                          { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x005759); }

    some<Armor_t*>  Dwarven_Spellbreaker_Shield()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x045F96); }

    some<Armor_t*>  Dwarven_Visage_Of_Mzund_Head()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x038ADD); }

    some<Armor_t*>  Ebony_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013961); }
    some<Armor_t*>  Ebony_Body_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6B); }
    some<Armor_t*>  Ebony_Body_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6C); }
    some<Armor_t*>  Ebony_Body_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6D); }
    some<Armor_t*>  Ebony_Body_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6E); }
    some<Armor_t*>  Ebony_Body_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF6F); }
    some<Armor_t*>  Ebony_Body_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF70); }
    some<Armor_t*>  Ebony_Body_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF71); }
    some<Armor_t*>  Ebony_Body_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF72); }
    some<Armor_t*>  Ebony_Body_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF78); }
    some<Armor_t*>  Ebony_Body_Health_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF837); }
    some<Armor_t*>  Ebony_Body_Health_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF838); }
    some<Armor_t*>  Ebony_Body_Health_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF839); }
    some<Armor_t*>  Ebony_Body_Health_Rate_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2E9); }
    some<Armor_t*>  Ebony_Body_Health_Rate_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2EA); }
    some<Armor_t*>  Ebony_Body_Health_Rate_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2EB); }
    some<Armor_t*>  Ebony_Body_Heavy_Armor_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF83A); }
    some<Armor_t*>  Ebony_Body_Heavy_Armor_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF83B); }
    some<Armor_t*>  Ebony_Body_Heavy_Armor_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF83C); }
    some<Armor_t*>  Ebony_Body_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF73); }
    some<Armor_t*>  Ebony_Body_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF74); }
    some<Armor_t*>  Ebony_Body_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF79); }
    some<Armor_t*>  Ebony_Body_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF75); }
    some<Armor_t*>  Ebony_Body_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF76); }
    some<Armor_t*>  Ebony_Body_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF77); }
    some<Armor_t*>  Ebony_Body_Stamina_Rate_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2EC); }
    some<Armor_t*>  Ebony_Body_Stamina_Rate_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2ED); }
    some<Armor_t*>  Ebony_Body_Stamina_Rate_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2EE); }
    some<Armor_t*>  Ebony_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013960); }
    some<Armor_t*>  Ebony_Feet_Carry_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF824); }
    some<Armor_t*>  Ebony_Feet_Carry_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF825); }
    some<Armor_t*>  Ebony_Feet_Carry_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF826); }
    some<Armor_t*>  Ebony_Feet_Muffle()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF827); }
    some<Armor_t*>  Ebony_Feet_Resist_Fire_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF828); }
    some<Armor_t*>  Ebony_Feet_Resist_Fire_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF829); }
    some<Armor_t*>  Ebony_Feet_Resist_Fire_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82A); }
    some<Armor_t*>  Ebony_Feet_Resist_Frost_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82B); }
    some<Armor_t*>  Ebony_Feet_Resist_Frost_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82C); }
    some<Armor_t*>  Ebony_Feet_Resist_Frost_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82D); }
    some<Armor_t*>  Ebony_Feet_Resist_Shock_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82E); }
    some<Armor_t*>  Ebony_Feet_Resist_Shock_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF82F); }
    some<Armor_t*>  Ebony_Feet_Resist_Shock_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF830); }
    some<Armor_t*>  Ebony_Feet_Stamina_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF83); }
    some<Armor_t*>  Ebony_Feet_Stamina_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF84); }
    some<Armor_t*>  Ebony_Feet_Stamina_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF85); }
    some<Armor_t*>  Ebony_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013962); }
    some<Armor_t*>  Ebony_Hands_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF84D); }
    some<Armor_t*>  Ebony_Hands_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF84E); }
    some<Armor_t*>  Ebony_Hands_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF84F); }
    some<Armor_t*>  Ebony_Hands_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF862); }
    some<Armor_t*>  Ebony_Hands_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF863); }
    some<Armor_t*>  Ebony_Hands_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF864); }
    some<Armor_t*>  Ebony_Hands_One_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF865); }
    some<Armor_t*>  Ebony_Hands_One_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF866); }
    some<Armor_t*>  Ebony_Hands_One_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF867); }
    some<Armor_t*>  Ebony_Hands_Smithing_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF86B); }
    some<Armor_t*>  Ebony_Hands_Smithing_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF86C); }
    some<Armor_t*>  Ebony_Hands_Smithing_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF86D); }
    some<Armor_t*>  Ebony_Hands_Two_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF86E); }
    some<Armor_t*>  Ebony_Hands_Two_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF86F); }
    some<Armor_t*>  Ebony_Hands_Two_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF870); }
    some<Armor_t*>  Ebony_Head()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013963); }
    some<Armor_t*>  Ebony_Head_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF871); }
    some<Armor_t*>  Ebony_Head_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF872); }
    some<Armor_t*>  Ebony_Head_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF873); }
    some<Armor_t*>  Ebony_Head_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF874); }
    some<Armor_t*>  Ebony_Head_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF875); }
    some<Armor_t*>  Ebony_Head_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF876); }
    some<Armor_t*>  Ebony_Head_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF877); }
    some<Armor_t*>  Ebony_Head_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF878); }
    some<Armor_t*>  Ebony_Head_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF879); }
    some<Armor_t*>  Ebony_Head_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF87A); }
    some<Armor_t*>  Ebony_Head_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF87B); }
    some<Armor_t*>  Ebony_Head_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF87C); }
    some<Armor_t*>  Ebony_Head_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF880); }
    some<Armor_t*>  Ebony_Head_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF881); }
    some<Armor_t*>  Ebony_Head_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF882); }
    some<Armor_t*>  Ebony_Head_Magicka_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF883); }
    some<Armor_t*>  Ebony_Head_Magicka_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF884); }
    some<Armor_t*>  Ebony_Head_Magicka_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF885); }
    some<Armor_t*>  Ebony_Head_Magicka_Rate_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2EF); }
    some<Armor_t*>  Ebony_Head_Magicka_Rate_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F0); }
    some<Armor_t*>  Ebony_Head_Magicka_Rate_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2F1); }
    some<Armor_t*>  Ebony_Head_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF886); }
    some<Armor_t*>  Ebony_Head_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF887); }
    some<Armor_t*>  Ebony_Head_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF888); }
    some<Armor_t*>  Ebony_Head_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF889); }
    some<Armor_t*>  Ebony_Head_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88A); }
    some<Armor_t*>  Ebony_Head_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88B); }
    some<Armor_t*>  Ebony_Head_Waterbreathing()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88C); }
    some<Armor_t*>  Ebony_Shield()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013964); }
    some<Armor_t*>  Ebony_Shield_Block_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88D); }
    some<Armor_t*>  Ebony_Shield_Block_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88E); }
    some<Armor_t*>  Ebony_Shield_Block_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF88F); }
    some<Armor_t*>  Ebony_Shield_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF890); }
    some<Armor_t*>  Ebony_Shield_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF891); }
    some<Armor_t*>  Ebony_Shield_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF892); }
    some<Armor_t*>  Ebony_Shield_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF893); }
    some<Armor_t*>  Ebony_Shield_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF894); }
    some<Armor_t*>  Ebony_Shield_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF895); }
    some<Armor_t*>  Ebony_Shield_Resist_Magic_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAD); }
    some<Armor_t*>  Ebony_Shield_Resist_Magic_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAE); }
    some<Armor_t*>  Ebony_Shield_Resist_Magic_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFAF); }
    some<Armor_t*>  Ebony_Shield_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF896); }
    some<Armor_t*>  Ebony_Shield_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF897); }
    some<Armor_t*>  Ebony_Shield_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF898); }

    some<Armor_t*>  Ebony_Mail_Body()                                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x052794); }

    some<Armor_t*>  Ebony_Masque_Of_Clavicus_Vile_Head()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2846); }

    some<Armor_t*>  Elven_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0896A3); }
    some<Armor_t*>  Elven_Body_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7A); }
    some<Armor_t*>  Elven_Body_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7B); }
    some<Armor_t*>  Elven_Body_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7C); }
    some<Armor_t*>  Elven_Body_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7D); }
    some<Armor_t*>  Elven_Body_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7E); }
    some<Armor_t*>  Elven_Body_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF7F); }
    some<Armor_t*>  Elven_Body_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF80); }
    some<Armor_t*>  Elven_Body_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF81); }
    some<Armor_t*>  Elven_Body_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF82); }
    some<Armor_t*>  Elven_Body_Health_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC4); }
    some<Armor_t*>  Elven_Body_Health_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC5); }
    some<Armor_t*>  Elven_Body_Health_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE03D); }
    some<Armor_t*>  Elven_Body_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF83); }
    some<Armor_t*>  Elven_Body_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF84); }
    some<Armor_t*>  Elven_Body_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF85); }
    some<Armor_t*>  Elven_Body_Light_Armor_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC6); }
    some<Armor_t*>  Elven_Body_Light_Armor_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC7); }
    some<Armor_t*>  Elven_Body_Light_Armor_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE03E); }
    some<Armor_t*>  Elven_Body_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF86); }
    some<Armor_t*>  Elven_Body_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF87); }
    some<Armor_t*>  Elven_Body_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF88); }
    some<Armor_t*>  Elven_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01391A); }
    some<Armor_t*>  Elven_Feet_Carry_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFB9); }
    some<Armor_t*>  Elven_Feet_Carry_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBA); }
    some<Armor_t*>  Elven_Feet_Carry_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBB); }
    some<Armor_t*>  Elven_Feet_Resist_Fire_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBC); }
    some<Armor_t*>  Elven_Feet_Resist_Fire_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBD); }
    some<Armor_t*>  Elven_Feet_Resist_Fire_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF8); }
    some<Armor_t*>  Elven_Feet_Resist_Frost_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBE); }
    some<Armor_t*>  Elven_Feet_Resist_Frost_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFBF); }
    some<Armor_t*>  Elven_Feet_Resist_Frost_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE03A); }
    some<Armor_t*>  Elven_Feet_Resist_Shock_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC0); }
    some<Armor_t*>  Elven_Feet_Resist_Shock_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC1); }
    some<Armor_t*>  Elven_Feet_Resist_Shock_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE03B); }
    some<Armor_t*>  Elven_Feet_Sneak_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC2); }
    some<Armor_t*>  Elven_Feet_Sneak_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFC3); }
    some<Armor_t*>  Elven_Feet_Sneak_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE03C); }
    some<Armor_t*>  Elven_Feet_Stamina_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF86); }
    some<Armor_t*>  Elven_Feet_Stamina_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF87); }
    some<Armor_t*>  Elven_Feet_Stamina_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF88); }
    some<Armor_t*>  Elven_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01391C); }
    some<Armor_t*>  Elven_Hands_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B676); }
    some<Armor_t*>  Elven_Hands_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B677); }
    some<Armor_t*>  Elven_Hands_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B678); }
    some<Armor_t*>  Elven_Hands_Lockpicking_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDA); }
    some<Armor_t*>  Elven_Hands_Lockpicking_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDB); }
    some<Armor_t*>  Elven_Hands_Lockpicking_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE048); }
    some<Armor_t*>  Elven_Hands_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDC); }
    some<Armor_t*>  Elven_Hands_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDD); }
    some<Armor_t*>  Elven_Hands_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE049); }
    some<Armor_t*>  Elven_Hands_One_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDE); }
    some<Armor_t*>  Elven_Hands_One_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFDF); }
    some<Armor_t*>  Elven_Hands_One_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE04A); }
    some<Armor_t*>  Elven_Hands_Pickpocket_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE0); }
    some<Armor_t*>  Elven_Hands_Pickpocket_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE1); }
    some<Armor_t*>  Elven_Hands_Pickpocket_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE04B); }
    some<Armor_t*>  Elven_Hands_Smithing_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE4); }
    some<Armor_t*>  Elven_Hands_Smithing_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE5); }
    some<Armor_t*>  Elven_Hands_Smithing_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE04D); }
    some<Armor_t*>  Elven_Hands_Two_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE6); }
    some<Armor_t*>  Elven_Hands_Two_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE7); }
    some<Armor_t*>  Elven_Hands_Two_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE04E); }
    some<Armor_t*>  Elven_Head()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01391D); }
    some<Armor_t*>  Elven_Head_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B664); }
    some<Armor_t*>  Elven_Head_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B665); }
    some<Armor_t*>  Elven_Head_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B666); }
    some<Armor_t*>  Elven_Head_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE8); }
    some<Armor_t*>  Elven_Head_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFE9); }
    some<Armor_t*>  Elven_Head_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE04F); }
    some<Armor_t*>  Elven_Head_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFEA); }
    some<Armor_t*>  Elven_Head_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFEB); }
    some<Armor_t*>  Elven_Head_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE050); }
    some<Armor_t*>  Elven_Head_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFEC); }
    some<Armor_t*>  Elven_Head_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFED); }
    some<Armor_t*>  Elven_Head_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE051); }
    some<Armor_t*>  Elven_Head_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF0); }
    some<Armor_t*>  Elven_Head_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF1); }
    some<Armor_t*>  Elven_Head_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE053); }
    some<Armor_t*>  Elven_Head_Magicka_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF2); }
    some<Armor_t*>  Elven_Head_Magicka_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF3); }
    some<Armor_t*>  Elven_Head_Magicka_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE054); }
    some<Armor_t*>  Elven_Head_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF4); }
    some<Armor_t*>  Elven_Head_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF5); }
    some<Armor_t*>  Elven_Head_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE055); }
    some<Armor_t*>  Elven_Head_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF6); }
    some<Armor_t*>  Elven_Head_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BDFF7); }
    some<Armor_t*>  Elven_Head_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BE056); }
    some<Armor_t*>  Elven_Shield()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01391E); }
    some<Armor_t*>  Elven_Shield_Block_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10FC26); }
    some<Armor_t*>  Elven_Shield_Block_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10FC27); }
    some<Armor_t*>  Elven_Shield_Block_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10FC28); }
    some<Armor_t*>  Elven_Shield_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B68); }
    some<Armor_t*>  Elven_Shield_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B78); }
    some<Armor_t*>  Elven_Shield_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B80); }
    some<Armor_t*>  Elven_Shield_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B69); }
    some<Armor_t*>  Elven_Shield_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B79); }
    some<Armor_t*>  Elven_Shield_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B81); }
    some<Armor_t*>  Elven_Shield_Resist_Magic_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB0); }
    some<Armor_t*>  Elven_Shield_Resist_Magic_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB1); }
    some<Armor_t*>  Elven_Shield_Resist_Magic_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB2); }
    some<Armor_t*>  Elven_Shield_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B6A); }
    some<Armor_t*>  Elven_Shield_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B7A); }
    some<Armor_t*>  Elven_Shield_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x084B82); }

    some<Armor_t*>  Elven_Herebanes_Fortress_Shield()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F9649); }

    some<Armor_t*>  Elven_Gilded_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01392A); }
    some<Armor_t*>  Elven_Gilded_Body_Alteration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF89); }
    some<Armor_t*>  Elven_Gilded_Body_Alteration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8A); }
    some<Armor_t*>  Elven_Gilded_Body_Alteration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF93); }
    some<Armor_t*>  Elven_Gilded_Body_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8B); }
    some<Armor_t*>  Elven_Gilded_Body_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8C); }
    some<Armor_t*>  Elven_Gilded_Body_Conjuration_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF94); }
    some<Armor_t*>  Elven_Gilded_Body_Destruction_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8D); }
    some<Armor_t*>  Elven_Gilded_Body_Destruction_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8E); }
    some<Armor_t*>  Elven_Gilded_Body_Destruction_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF95); }
    some<Armor_t*>  Elven_Gilded_Body_Health_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1AD); }
    some<Armor_t*>  Elven_Gilded_Body_Health_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1AE); }
    some<Armor_t*>  Elven_Gilded_Body_Health_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1AF); }
    some<Armor_t*>  Elven_Gilded_Body_Health_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1A); }
    some<Armor_t*>  Elven_Gilded_Body_Health_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1B); }
    some<Armor_t*>  Elven_Gilded_Body_Health_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1C); }
    some<Armor_t*>  Elven_Gilded_Body_Illusion_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF8F); }
    some<Armor_t*>  Elven_Gilded_Body_Illusion_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF90); }
    some<Armor_t*>  Elven_Gilded_Body_Illusion_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF96); }
    some<Armor_t*>  Elven_Gilded_Body_Light_Armor_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1B0); }
    some<Armor_t*>  Elven_Gilded_Body_Light_Armor_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1B1); }
    some<Armor_t*>  Elven_Gilded_Body_Light_Armor_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE1B2); }
    some<Armor_t*>  Elven_Gilded_Body_Restoration_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF91); }
    some<Armor_t*>  Elven_Gilded_Body_Restoration_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF92); }
    some<Armor_t*>  Elven_Gilded_Body_Restoration_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF97); }
    some<Armor_t*>  Elven_Gilded_Body_Stamina_Rate_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1D); }
    some<Armor_t*>  Elven_Gilded_Body_Stamina_Rate_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1E); }
    some<Armor_t*>  Elven_Gilded_Body_Stamina_Rate_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDA1F); }

    some<Armor_t*>  Elven_Light_Body()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x105F12); }
    some<Armor_t*>  Elven_Light_Feet()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x105F11); }
    some<Armor_t*>  Elven_Light_Hands()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x105F13); }
    some<Armor_t*>  Elven_Light_Head()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x105F14); }

    some<Armor_t*>  Falmer_Body()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B83CB); }
    some<Armor_t*>  Falmer_Feet()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B83CD); }
    some<Armor_t*>  Falmer_Hands()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B83CF); }
    some<Armor_t*>  Falmer_Head()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04C3CB); }
    some<Armor_t*>  Falmer_Shield()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05C06C); }

    some<Armor_t*>  Falmer_Hardened_Body()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E8DE); }
    some<Armor_t*>  Falmer_Hardened_Feet()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E8DD); }
    some<Armor_t*>  Falmer_Hardened_Hands()                             { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E8DF); }
    some<Armor_t*>  Falmer_Hardened_Head()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E8E0); }

    some<Armor_t*>  Falmer_Heavy_Body()                                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0023E9); }
    some<Armor_t*>  Falmer_Heavy_Feet()                                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0023EF); }
    some<Armor_t*>  Falmer_Heavy_Hands()                                { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0023ED); }
    some<Armor_t*>  Falmer_Heavy_Head()                                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0023EB); }

    some<Armor_t*>  Falmer_Heavy_Shellbug_Head()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x012E8A); }

    some<Armor_t*>  Forsworn_Body()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D8D50); }
    some<Armor_t*>  Forsworn_Feet()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D8D4E); }
    some<Armor_t*>  Forsworn_Hands()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D8D55); }
    some<Armor_t*>  Forsworn_Head()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D8D52); }

    some<Armor_t*>  Forsworn_Old_Gods_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EAFD0); }
    some<Armor_t*>  Forsworn_Old_Gods_Feet()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EAFD3); }
    some<Armor_t*>  Forsworn_Old_Gods_Hands()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EAFD2); }
    some<Armor_t*>  Forsworn_Old_Gods_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EAFD1); }

    some<Armor_t*>  Fur_Feet()                                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06F398); }
    some<Armor_t*>  Fur_Hands()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06F39B); }
    some<Armor_t*>  Fur_Head()                                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06F39E); }

    some<Armor_t*>  Fur_A_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06F393); }

    some<Armor_t*>  Fur_B_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10594B); }

    some<Armor_t*>  Fur_C_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10594D); }

    some<Armor_t*>  Fur_D_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10594F); }

    some<Armor_t*>  Fur_Saviors_Hide_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02AC61); }

    some<Armor_t*>  Glass_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013939); }
    some<Armor_t*>  Glass_Body_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF98); }
    some<Armor_t*>  Glass_Body_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF99); }
    some<Armor_t*>  Glass_Body_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF9A); }
    some<Armor_t*>  Glass_Body_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF9B); }
    some<Armor_t*>  Glass_Body_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF9C); }
    some<Armor_t*>  Glass_Body_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF9D); }
    some<Armor_t*>  Glass_Body_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CF9E); }
    some<Armor_t*>  Glass_Body_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA0); }
    some<Armor_t*>  Glass_Body_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA1); }
    some<Armor_t*>  Glass_Body_Health_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5381); }
    some<Armor_t*>  Glass_Body_Health_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5382); }
    some<Armor_t*>  Glass_Body_Health_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5383); }
    some<Armor_t*>  Glass_Body_Health_Rate_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2D7); }
    some<Armor_t*>  Glass_Body_Health_Rate_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2D8); }
    some<Armor_t*>  Glass_Body_Health_Rate_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2D9); }
    some<Armor_t*>  Glass_Body_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA2); }
    some<Armor_t*>  Glass_Body_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA3); }
    some<Armor_t*>  Glass_Body_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA4); }
    some<Armor_t*>  Glass_Body_Light_Armor_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5384); }
    some<Armor_t*>  Glass_Body_Light_Armor_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5385); }
    some<Armor_t*>  Glass_Body_Light_Armor_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5386); }
    some<Armor_t*>  Glass_Body_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA5); }
    some<Armor_t*>  Glass_Body_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA6); }
    some<Armor_t*>  Glass_Body_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA7); }
    some<Armor_t*>  Glass_Body_Stamina_Rate_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DC); }
    some<Armor_t*>  Glass_Body_Stamina_Rate_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DD); }
    some<Armor_t*>  Glass_Body_Stamina_Rate_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DE); }
    some<Armor_t*>  Glass_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013938); }
    some<Armor_t*>  Glass_Feet_Carry_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D536E); }
    some<Armor_t*>  Glass_Feet_Carry_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D536F); }
    some<Armor_t*>  Glass_Feet_Carry_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5370); }
    some<Armor_t*>  Glass_Feet_Muffle()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5371); }
    some<Armor_t*>  Glass_Feet_Resist_Fire_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5372); }
    some<Armor_t*>  Glass_Feet_Resist_Fire_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5373); }
    some<Armor_t*>  Glass_Feet_Resist_Fire_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5374); }
    some<Armor_t*>  Glass_Feet_Resist_Frost_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5375); }
    some<Armor_t*>  Glass_Feet_Resist_Frost_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5376); }
    some<Armor_t*>  Glass_Feet_Resist_Frost_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5377); }
    some<Armor_t*>  Glass_Feet_Resist_Shock_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5378); }
    some<Armor_t*>  Glass_Feet_Resist_Shock_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5379); }
    some<Armor_t*>  Glass_Feet_Resist_Shock_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D537A); }
    some<Armor_t*>  Glass_Feet_Sneak_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF74); }
    some<Armor_t*>  Glass_Feet_Sneak_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF75); }
    some<Armor_t*>  Glass_Feet_Sneak_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF76); }
    some<Armor_t*>  Glass_Feet_Stamina_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF89); }
    some<Armor_t*>  Glass_Feet_Stamina_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8A); }
    some<Armor_t*>  Glass_Feet_Stamina_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8B); }
    some<Armor_t*>  Glass_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393A); }
    some<Armor_t*>  Glass_Hands_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5397); }
    some<Armor_t*>  Glass_Hands_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5398); }
    some<Armor_t*>  Glass_Hands_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5399); }
    some<Armor_t*>  Glass_Hands_Lockpicking_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF1); }
    some<Armor_t*>  Glass_Hands_Lockpicking_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF2); }
    some<Armor_t*>  Glass_Hands_Lockpicking_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF3); }
    some<Armor_t*>  Glass_Hands_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53AC); }
    some<Armor_t*>  Glass_Hands_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53AD); }
    some<Armor_t*>  Glass_Hands_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53AE); }
    some<Armor_t*>  Glass_Hands_One_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53AF); }
    some<Armor_t*>  Glass_Hands_One_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53B0); }
    some<Armor_t*>  Glass_Hands_One_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53B1); }
    some<Armor_t*>  Glass_Hands_Pickpocket_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF4); }
    some<Armor_t*>  Glass_Hands_Pickpocket_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF5); }
    some<Armor_t*>  Glass_Hands_Pickpocket_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF6); }
    some<Armor_t*>  Glass_Hands_Smithing_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53B5); }
    some<Armor_t*>  Glass_Hands_Smithing_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53B6); }
    some<Armor_t*>  Glass_Hands_Smithing_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53B7); }
    some<Armor_t*>  Glass_Hands_Two_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53BB); }
    some<Armor_t*>  Glass_Hands_Two_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53BC); }
    some<Armor_t*>  Glass_Hands_Two_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53BD); }
    some<Armor_t*>  Glass_Head()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393B); }
    some<Armor_t*>  Glass_Head_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53BE); }
    some<Armor_t*>  Glass_Head_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53BF); }
    some<Armor_t*>  Glass_Head_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C0); }
    some<Armor_t*>  Glass_Head_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C1); }
    some<Armor_t*>  Glass_Head_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C2); }
    some<Armor_t*>  Glass_Head_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C3); }
    some<Armor_t*>  Glass_Head_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C4); }
    some<Armor_t*>  Glass_Head_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C5); }
    some<Armor_t*>  Glass_Head_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C6); }
    some<Armor_t*>  Glass_Head_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C7); }
    some<Armor_t*>  Glass_Head_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C8); }
    some<Armor_t*>  Glass_Head_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53C9); }
    some<Armor_t*>  Glass_Head_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53CD); }
    some<Armor_t*>  Glass_Head_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53CE); }
    some<Armor_t*>  Glass_Head_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53CF); }
    some<Armor_t*>  Glass_Head_Magicka_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D0); }
    some<Armor_t*>  Glass_Head_Magicka_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D1); }
    some<Armor_t*>  Glass_Head_Magicka_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D2); }
    some<Armor_t*>  Glass_Head_Magicka_Rate_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DA); }
    some<Armor_t*>  Glass_Head_Magicka_Rate_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DB); }
    some<Armor_t*>  Glass_Head_Magicka_Rate_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FE2DF); }
    some<Armor_t*>  Glass_Head_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D3); }
    some<Armor_t*>  Glass_Head_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D4); }
    some<Armor_t*>  Glass_Head_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D5); }
    some<Armor_t*>  Glass_Head_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D6); }
    some<Armor_t*>  Glass_Head_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D7); }
    some<Armor_t*>  Glass_Head_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D8); }
    some<Armor_t*>  Glass_Head_Waterbreathing()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53D9); }
    some<Armor_t*>  Glass_Shield()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01393C); }
    some<Armor_t*>  Glass_Shield_Block_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DA); }
    some<Armor_t*>  Glass_Shield_Block_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DB); }
    some<Armor_t*>  Glass_Shield_Block_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DC); }
    some<Armor_t*>  Glass_Shield_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DD); }
    some<Armor_t*>  Glass_Shield_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DE); }
    some<Armor_t*>  Glass_Shield_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53DF); }
    some<Armor_t*>  Glass_Shield_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E0); }
    some<Armor_t*>  Glass_Shield_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E1); }
    some<Armor_t*>  Glass_Shield_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E2); }
    some<Armor_t*>  Glass_Shield_Resist_Magic_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB3); }
    some<Armor_t*>  Glass_Shield_Resist_Magic_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB4); }
    some<Armor_t*>  Glass_Shield_Resist_Magic_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB5); }
    some<Armor_t*>  Glass_Shield_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E3); }
    some<Armor_t*>  Glass_Shield_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E4); }
    some<Armor_t*>  Glass_Shield_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E5); }

    some<Armor_t*>  Guard_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A6D7F); }
    some<Armor_t*>  Guard_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A6D7D); }

    some<Armor_t*>  Guard_Falkreath_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02151E); }
    some<Armor_t*>  Guard_Falkreath_Head()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021619); }
    some<Armor_t*>  Guard_Falkreath_Shield()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214ED); }

    some<Armor_t*>  Guard_Hjaalmarch_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021520); }
    some<Armor_t*>  Guard_Hjaalmarch_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02161B); }
    some<Armor_t*>  Guard_Hjaalmarch_Shield()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214EF); }

    some<Armor_t*>  Guard_Markarth_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021508); }
    some<Armor_t*>  Guard_Markarth_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021613); }
    some<Armor_t*>  Guard_Markarth_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214DC); }

    some<Armor_t*>  Guard_Pale_Body()                                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021525); }
    some<Armor_t*>  Guard_Pale_Head()                                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02161F); }
    some<Armor_t*>  Guard_Pale_Shield()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214F7); }

    some<Armor_t*>  Guard_Pugilist_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10A06A); }

    some<Armor_t*>  Guard_Riften_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021507); }
    some<Armor_t*>  Guard_Riften_Head()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021622); }
    some<Armor_t*>  Guard_Riften_Shield()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214BA); }

    some<Armor_t*>  Guard_Solitude_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C7F5B); }
    some<Armor_t*>  Guard_Solitude_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C7F5C); }
    some<Armor_t*>  Guard_Solitude_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214F4); }

    some<Armor_t*>  Guard_Solitude_Reward_Shield_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x09E023); }
    some<Armor_t*>  Guard_Solitude_Reward_Shield_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB62); }
    some<Armor_t*>  Guard_Solitude_Reward_Shield_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB64); }
    some<Armor_t*>  Guard_Solitude_Reward_Shield_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB63); }
    some<Armor_t*>  Guard_Solitude_Reward_Shield_5()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB65); }

    some<Armor_t*>  Guard_Whiterun_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02150D); }
    some<Armor_t*>  Guard_Whiterun_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021615); }
    some<Armor_t*>  Guard_Whiterun_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214E0); }

    some<Armor_t*>  Guard_Windhelm_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A6D7B); }
    some<Armor_t*>  Guard_Windhelm_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A6D79); }
    some<Armor_t*>  Guard_Windhelm_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214EB); }

    some<Armor_t*>  Guard_Windhelm_Eastmarch_Head()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10559D); }

    some<Armor_t*>  Guard_Windhelm_Sleeved_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD5A0); }

    some<Armor_t*>  Guard_Winterhold_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x021522); }
    some<Armor_t*>  Guard_Winterhold_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02161D); }
    some<Armor_t*>  Guard_Winterhold_Shield()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0214F1); }

    some<Armor_t*>  Hide_Body()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013911); }
    some<Armor_t*>  Hide_Body_Alteration_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA8); }
    some<Armor_t*>  Hide_Body_Alteration_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFA9); }
    some<Armor_t*>  Hide_Body_Alteration_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAA); }
    some<Armor_t*>  Hide_Body_Conjuration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAB); }
    some<Armor_t*>  Hide_Body_Conjuration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAC); }
    some<Armor_t*>  Hide_Body_Conjuration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAD); }
    some<Armor_t*>  Hide_Body_Destruction_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAE); }
    some<Armor_t*>  Hide_Body_Destruction_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFAF); }
    some<Armor_t*>  Hide_Body_Destruction_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB0); }
    some<Armor_t*>  Hide_Body_Health_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A13B); }
    some<Armor_t*>  Hide_Body_Health_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD491); }
    some<Armor_t*>  Hide_Body_Health_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD492); }
    some<Armor_t*>  Hide_Body_Illusion_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB1); }
    some<Armor_t*>  Hide_Body_Illusion_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB2); }
    some<Armor_t*>  Hide_Body_Illusion_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB3); }
    some<Armor_t*>  Hide_Body_Light_Armor_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A13C); }
    some<Armor_t*>  Hide_Body_Light_Armor_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD494); }
    some<Armor_t*>  Hide_Body_Light_Armor_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD495); }
    some<Armor_t*>  Hide_Body_Restoration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB4); }
    some<Armor_t*>  Hide_Body_Restoration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB5); }
    some<Armor_t*>  Hide_Body_Restoration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB6); }
    some<Armor_t*>  Hide_Feet()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013910); }
    some<Armor_t*>  Hide_Feet_Carry_1()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A135); }
    some<Armor_t*>  Hide_Feet_Carry_2()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD451); }
    some<Armor_t*>  Hide_Feet_Carry_3()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD452); }
    some<Armor_t*>  Hide_Feet_Resist_Fire_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A136); }
    some<Armor_t*>  Hide_Feet_Resist_Fire_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD489); }
    some<Armor_t*>  Hide_Feet_Resist_Fire_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48A); }
    some<Armor_t*>  Hide_Feet_Resist_Frost_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A137); }
    some<Armor_t*>  Hide_Feet_Resist_Frost_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48B); }
    some<Armor_t*>  Hide_Feet_Resist_Frost_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48C); }
    some<Armor_t*>  Hide_Feet_Resist_Shock_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A138); }
    some<Armor_t*>  Hide_Feet_Resist_Shock_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48D); }
    some<Armor_t*>  Hide_Feet_Resist_Shock_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48E); }
    some<Armor_t*>  Hide_Feet_Sneak_1()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A139); }
    some<Armor_t*>  Hide_Feet_Sneak_2()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD48F); }
    some<Armor_t*>  Hide_Feet_Sneak_3()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD490); }
    some<Armor_t*>  Hide_Feet_Stamina_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8C); }
    some<Armor_t*>  Hide_Feet_Stamina_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8D); }
    some<Armor_t*>  Hide_Feet_Stamina_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8E); }
    some<Armor_t*>  Hide_Hands()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013912); }
    some<Armor_t*>  Hide_Hands_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B67F); }
    some<Armor_t*>  Hide_Hands_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B680); }
    some<Armor_t*>  Hide_Hands_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B681); }
    some<Armor_t*>  Hide_Hands_Lockpicking_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A149); }
    some<Armor_t*>  Hide_Hands_Lockpicking_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4AD); }
    some<Armor_t*>  Hide_Hands_Lockpicking_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4AE); }
    some<Armor_t*>  Hide_Hands_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A14A); }
    some<Armor_t*>  Hide_Hands_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4AF); }
    some<Armor_t*>  Hide_Hands_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B0); }
    some<Armor_t*>  Hide_Hands_One_Handed_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A14B); }
    some<Armor_t*>  Hide_Hands_One_Handed_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B1); }
    some<Armor_t*>  Hide_Hands_One_Handed_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B2); }
    some<Armor_t*>  Hide_Hands_Pickpocket_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A14C); }
    some<Armor_t*>  Hide_Hands_Pickpocket_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B3); }
    some<Armor_t*>  Hide_Hands_Pickpocket_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B4); }
    some<Armor_t*>  Hide_Hands_Smithing_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A14E); }
    some<Armor_t*>  Hide_Hands_Smithing_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B7); }
    some<Armor_t*>  Hide_Hands_Smithing_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B8); }
    some<Armor_t*>  Hide_Hands_Two_Handed_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A14F); }
    some<Armor_t*>  Hide_Hands_Two_Handed_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4B9); }
    some<Armor_t*>  Hide_Hands_Two_Handed_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BA); }
    some<Armor_t*>  Hide_Head()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013913); }
    some<Armor_t*>  Hide_Head_Alchemy_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B667); }
    some<Armor_t*>  Hide_Head_Alchemy_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B668); }
    some<Armor_t*>  Hide_Head_Alchemy_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B669); }
    some<Armor_t*>  Hide_Head_Alteration_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A150); }
    some<Armor_t*>  Hide_Head_Alteration_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BB); }
    some<Armor_t*>  Hide_Head_Alteration_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BC); }
    some<Armor_t*>  Hide_Head_Conjuration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A151); }
    some<Armor_t*>  Hide_Head_Conjuration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BD); }
    some<Armor_t*>  Hide_Head_Conjuration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BE); }
    some<Armor_t*>  Hide_Head_Destruction_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A152); }
    some<Armor_t*>  Hide_Head_Destruction_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4BF); }
    some<Armor_t*>  Hide_Head_Destruction_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C0); }
    some<Armor_t*>  Hide_Head_Illusion_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A154); }
    some<Armor_t*>  Hide_Head_Illusion_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C3); }
    some<Armor_t*>  Hide_Head_Illusion_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C4); }
    some<Armor_t*>  Hide_Head_Magicka_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A155); }
    some<Armor_t*>  Hide_Head_Magicka_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C5); }
    some<Armor_t*>  Hide_Head_Magicka_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C6); }
    some<Armor_t*>  Hide_Head_Marksman_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A157); }
    some<Armor_t*>  Hide_Head_Marksman_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C7); }
    some<Armor_t*>  Hide_Head_Marksman_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C8); }
    some<Armor_t*>  Hide_Head_Restoration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A158); }
    some<Armor_t*>  Hide_Head_Restoration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4C9); }
    some<Armor_t*>  Hide_Head_Restoration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CA); }
    some<Armor_t*>  Hide_Shield()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013914); }
    some<Armor_t*>  Hide_Shield_Block_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A159); }
    some<Armor_t*>  Hide_Shield_Block_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CB); }
    some<Armor_t*>  Hide_Shield_Block_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CC); }
    some<Armor_t*>  Hide_Shield_Resist_Fire_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A15C); }
    some<Armor_t*>  Hide_Shield_Resist_Fire_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CD); }
    some<Armor_t*>  Hide_Shield_Resist_Fire_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CE); }
    some<Armor_t*>  Hide_Shield_Resist_Frost_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A15B); }
    some<Armor_t*>  Hide_Shield_Resist_Frost_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4CF); }
    some<Armor_t*>  Hide_Shield_Resist_Frost_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D0); }
    some<Armor_t*>  Hide_Shield_Resist_Magic_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB6); }
    some<Armor_t*>  Hide_Shield_Resist_Magic_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB7); }
    some<Armor_t*>  Hide_Shield_Resist_Magic_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB8); }
    some<Armor_t*>  Hide_Shield_Resist_Shock_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A15A); }
    some<Armor_t*>  Hide_Shield_Resist_Shock_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D1); }
    some<Armor_t*>  Hide_Shield_Resist_Shock_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D2); }

    some<Armor_t*>  Hide_Movarth_Feet()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x096D9B); }

    some<Armor_t*>  Hide_Predators_Grace_Feet()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A4DCD); }

    some<Armor_t*>  Hide_Studded_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3A2); }
    some<Armor_t*>  Hide_Studded_Body_Health_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACC93); }
    some<Armor_t*>  Hide_Studded_Body_Health_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D3); }
    some<Armor_t*>  Hide_Studded_Body_Health_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D4); }
    some<Armor_t*>  Hide_Studded_Body_Light_Armor_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACC94); }
    some<Armor_t*>  Hide_Studded_Body_Light_Armor_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D5); }
    some<Armor_t*>  Hide_Studded_Body_Light_Armor_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4D6); }

    some<Armor_t*>  Imperial_Heavy_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0136D5); }
    some<Armor_t*>  Imperial_Heavy_Body_Health_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCC0); }
    some<Armor_t*>  Imperial_Heavy_Body_Health_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E9); }
    some<Armor_t*>  Imperial_Heavy_Body_Health_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4EA); }
    some<Armor_t*>  Imperial_Heavy_Body_Heavy_Armor_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCC1); }
    some<Armor_t*>  Imperial_Heavy_Body_Heavy_Armor_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4EB); }
    some<Armor_t*>  Imperial_Heavy_Body_Heavy_Armor_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4EC); }
    some<Armor_t*>  Imperial_Heavy_Body_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4F0); }
    some<Armor_t*>  Imperial_Heavy_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0136D6); }
    some<Armor_t*>  Imperial_Heavy_Feet_Carry_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBB); }
    some<Armor_t*>  Imperial_Heavy_Feet_Carry_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4DF); }
    some<Armor_t*>  Imperial_Heavy_Feet_Carry_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E0); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Fire_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBC); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Fire_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E1); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Fire_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E2); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBD); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Frost_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E3); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Frost_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E4); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Shock_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBE); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Shock_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E5); }
    some<Armor_t*>  Imperial_Heavy_Feet_Resist_Shock_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E6); }
    some<Armor_t*>  Imperial_Heavy_Feet_Sneak_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBF); }
    some<Armor_t*>  Imperial_Heavy_Feet_Sneak_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E7); }
    some<Armor_t*>  Imperial_Heavy_Feet_Sneak_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4E8); }
    some<Armor_t*>  Imperial_Heavy_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0136D4); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alchemy_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B682); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alchemy_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B683); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alchemy_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B684); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alteration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCC6); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alteration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4F5); }
    some<Armor_t*>  Imperial_Heavy_Hands_Alteration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4F6); }
    some<Armor_t*>  Imperial_Heavy_Hands_Conjuration_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCC8); }
    some<Armor_t*>  Imperial_Heavy_Hands_Conjuration_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4F9); }
    some<Armor_t*>  Imperial_Heavy_Hands_Conjuration_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4FA); }
    some<Armor_t*>  Imperial_Heavy_Hands_Destruction_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCC9); }
    some<Armor_t*>  Imperial_Heavy_Hands_Destruction_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4FB); }
    some<Armor_t*>  Imperial_Heavy_Hands_Destruction_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD4FC); }
    some<Armor_t*>  Imperial_Heavy_Hands_Marksman_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCCD); }
    some<Armor_t*>  Imperial_Heavy_Hands_Marksman_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD503); }
    some<Armor_t*>  Imperial_Heavy_Hands_Marksman_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD504); }
    some<Armor_t*>  Imperial_Heavy_Hands_One_Handed_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCCE); }
    some<Armor_t*>  Imperial_Heavy_Hands_One_Handed_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9747); }
    some<Armor_t*>  Imperial_Heavy_Hands_One_Handed_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD506); }
    some<Armor_t*>  Imperial_Heavy_Hands_Smithing_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCD1); }
    some<Armor_t*>  Imperial_Heavy_Hands_Smithing_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD50B); }
    some<Armor_t*>  Imperial_Heavy_Hands_Smithing_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD50C); }
    some<Armor_t*>  Imperial_Heavy_Hands_Two_Handed_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCD2); }
    some<Armor_t*>  Imperial_Heavy_Hands_Two_Handed_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD50D); }
    some<Armor_t*>  Imperial_Heavy_Hands_Two_Handed_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD50E); }
    some<Armor_t*>  Imperial_Heavy_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013EDC); }
    some<Armor_t*>  Imperial_Heavy_Head_Alchemy_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A2); }
    some<Armor_t*>  Imperial_Heavy_Head_Alchemy_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A3); }
    some<Armor_t*>  Imperial_Heavy_Head_Alchemy_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A4); }
    some<Armor_t*>  Imperial_Heavy_Head_Alteration_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A5); }
    some<Armor_t*>  Imperial_Heavy_Head_Alteration_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A6); }
    some<Armor_t*>  Imperial_Heavy_Head_Alteration_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A7); }
    some<Armor_t*>  Imperial_Heavy_Head_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A8); }
    some<Armor_t*>  Imperial_Heavy_Head_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A9); }
    some<Armor_t*>  Imperial_Heavy_Head_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6AA); }
    some<Armor_t*>  Imperial_Heavy_Head_Destruction_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6AB); }
    some<Armor_t*>  Imperial_Heavy_Head_Destruction_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6AC); }
    some<Armor_t*>  Imperial_Heavy_Head_Destruction_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6AD); }
    some<Armor_t*>  Imperial_Heavy_Head_Illusion_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B1); }
    some<Armor_t*>  Imperial_Heavy_Head_Illusion_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B2); }
    some<Armor_t*>  Imperial_Heavy_Head_Illusion_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B3); }
    some<Armor_t*>  Imperial_Heavy_Head_Magicka_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B4); }
    some<Armor_t*>  Imperial_Heavy_Head_Magicka_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B5); }
    some<Armor_t*>  Imperial_Heavy_Head_Marksman_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B7); }
    some<Armor_t*>  Imperial_Heavy_Head_Marksman_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B8); }
    some<Armor_t*>  Imperial_Heavy_Head_Marksman_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B9); }
    some<Armor_t*>  Imperial_Heavy_Head_Restoration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BA); }
    some<Armor_t*>  Imperial_Heavy_Head_Restoration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BB); }
    some<Armor_t*>  Imperial_Heavy_Head_Restoration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BC); }
    some<Armor_t*>  Imperial_Heavy_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0135BA); }

    some<Armor_t*>  Imperial_Heavy_Falx_Body()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01A574); }
    some<Armor_t*>  Imperial_Heavy_Falx_Feet()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01A573); }
    some<Armor_t*>  Imperial_Heavy_Falx_Hands()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01A575); }
    some<Armor_t*>  Imperial_Heavy_Falx_Head()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01A576); }

    some<Armor_t*>  Imperial_Heavy_General_Carius_Body()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376F1); }

    some<Armor_t*>  Imperial_Heavy_General_Tullius_Body()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05CBFE); }

    some<Armor_t*>  Imperial_Heavy_Knight_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x09610D); }

    some<Armor_t*>  Imperial_Heavy_Officer_Head()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0136CF); }

    some<Armor_t*>  Imperial_Light_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013ED9); }
    some<Armor_t*>  Imperial_Light_Body_Health_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971C); }
    some<Armor_t*>  Imperial_Light_Body_Health_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971D); }
    some<Armor_t*>  Imperial_Light_Body_Health_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971E); }
    some<Armor_t*>  Imperial_Light_Body_Light_Armor_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971F); }
    some<Armor_t*>  Imperial_Light_Body_Light_Armor_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9720); }
    some<Armor_t*>  Imperial_Light_Body_Light_Armor_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9721); }
    some<Armor_t*>  Imperial_Light_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013ED7); }
    some<Armor_t*>  Imperial_Light_Feet_Carry_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B970D); }
    some<Armor_t*>  Imperial_Light_Feet_Carry_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B970E); }
    some<Armor_t*>  Imperial_Light_Feet_Carry_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B970F); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Fire_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9710); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Fire_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9711); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Fire_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9712); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9713); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Frost_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9714); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Frost_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9715); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Shock_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9716); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Shock_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9717); }
    some<Armor_t*>  Imperial_Light_Feet_Resist_Shock_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9718); }
    some<Armor_t*>  Imperial_Light_Feet_Sneak_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9719); }
    some<Armor_t*>  Imperial_Light_Feet_Sneak_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971A); }
    some<Armor_t*>  Imperial_Light_Feet_Sneak_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B971B); }
    some<Armor_t*>  Imperial_Light_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013EDA); }
    some<Armor_t*>  Imperial_Light_Hands_Alchemy_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B685); }
    some<Armor_t*>  Imperial_Light_Hands_Alchemy_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B686); }
    some<Armor_t*>  Imperial_Light_Hands_Alchemy_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B687); }
    some<Armor_t*>  Imperial_Light_Hands_Alteration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B972E); }
    some<Armor_t*>  Imperial_Light_Hands_Alteration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B972F); }
    some<Armor_t*>  Imperial_Light_Hands_Alteration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9730); }
    some<Armor_t*>  Imperial_Light_Hands_Conjuration_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9734); }
    some<Armor_t*>  Imperial_Light_Hands_Conjuration_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9735); }
    some<Armor_t*>  Imperial_Light_Hands_Conjuration_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9736); }
    some<Armor_t*>  Imperial_Light_Hands_Destruction_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9737); }
    some<Armor_t*>  Imperial_Light_Hands_Destruction_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9738); }
    some<Armor_t*>  Imperial_Light_Hands_Destruction_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9739); }
    some<Armor_t*>  Imperial_Light_Hands_Lockpicking_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9740); }
    some<Armor_t*>  Imperial_Light_Hands_Lockpicking_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9741); }
    some<Armor_t*>  Imperial_Light_Hands_Lockpicking_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9742); }
    some<Armor_t*>  Imperial_Light_Hands_Marksman_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9743); }
    some<Armor_t*>  Imperial_Light_Hands_Marksman_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9744); }
    some<Armor_t*>  Imperial_Light_Hands_Marksman_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9745); }
    some<Armor_t*>  Imperial_Light_Hands_One_Handed_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9746); }
    some<Armor_t*>  Imperial_Light_Hands_One_Handed_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD505); }
    some<Armor_t*>  Imperial_Light_Hands_One_Handed_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9748); }
    some<Armor_t*>  Imperial_Light_Hands_Pickpocket_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9749); }
    some<Armor_t*>  Imperial_Light_Hands_Pickpocket_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B974A); }
    some<Armor_t*>  Imperial_Light_Hands_Pickpocket_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B974B); }
    some<Armor_t*>  Imperial_Light_Hands_Smithing_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B974F); }
    some<Armor_t*>  Imperial_Light_Hands_Smithing_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9750); }
    some<Armor_t*>  Imperial_Light_Hands_Smithing_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9751); }
    some<Armor_t*>  Imperial_Light_Hands_Two_Handed_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9752); }
    some<Armor_t*>  Imperial_Light_Hands_Two_Handed_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9753); }
    some<Armor_t*>  Imperial_Light_Hands_Two_Handed_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B9754); }
    some<Armor_t*>  Imperial_Light_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013EDB); }
    some<Armor_t*>  Imperial_Light_Head_Alchemy_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BD); }
    some<Armor_t*>  Imperial_Light_Head_Alchemy_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C3); }
    some<Armor_t*>  Imperial_Light_Head_Alchemy_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BE); }
    some<Armor_t*>  Imperial_Light_Head_Alteration_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6BF); }
    some<Armor_t*>  Imperial_Light_Head_Alteration_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C0); }
    some<Armor_t*>  Imperial_Light_Head_Alteration_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C1); }
    some<Armor_t*>  Imperial_Light_Head_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C2); }
    some<Armor_t*>  Imperial_Light_Head_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C4); }
    some<Armor_t*>  Imperial_Light_Head_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C5); }
    some<Armor_t*>  Imperial_Light_Head_Destruction_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C6); }
    some<Armor_t*>  Imperial_Light_Head_Destruction_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C7); }
    some<Armor_t*>  Imperial_Light_Head_Destruction_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6C8); }
    some<Armor_t*>  Imperial_Light_Head_Illusion_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6CC); }
    some<Armor_t*>  Imperial_Light_Head_Illusion_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6CD); }
    some<Armor_t*>  Imperial_Light_Head_Illusion_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6CE); }
    some<Armor_t*>  Imperial_Light_Head_Magicka_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6CF); }
    some<Armor_t*>  Imperial_Light_Head_Magicka_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6D0); }
    some<Armor_t*>  Imperial_Light_Head_Magicka_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6B6); }
    some<Armor_t*>  Imperial_Light_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013AB2); }
    some<Armor_t*>  Imperial_Light_Shield_Block_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD448); }
    some<Armor_t*>  Imperial_Light_Shield_Block_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD50F); }
    some<Armor_t*>  Imperial_Light_Shield_Block_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD510); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Fire_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD449); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Fire_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD511); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Fire_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD512); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Frost_1()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD44A); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Frost_2()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD513); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Frost_3()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD514); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Shock_1()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD44B); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Shock_2()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD515); }
    some<Armor_t*>  Imperial_Light_Shield_Resist_Shock_3()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD516); }

    some<Armor_t*>  Imperial_Light_Noster_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06FE72); }

    some<Armor_t*>  Imperial_Light_Studded_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013ED8); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Health_1()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB4); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Health_2()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB5); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Health_3()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB6); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Light_Armor_1()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB7); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Light_Armor_2()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB8); }
    some<Armor_t*>  Imperial_Light_Studded_Body_Light_Armor_3()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BB9); }

    some<Armor_t*>  Iron_Body()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x012E49); }
    some<Armor_t*>  Iron_Body_Alteration_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB8); }
    some<Armor_t*>  Iron_Body_Alteration_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFB9); }
    some<Armor_t*>  Iron_Body_Alteration_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFBB); }
    some<Armor_t*>  Iron_Body_Conjuration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFBC); }
    some<Armor_t*>  Iron_Body_Conjuration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFBD); }
    some<Armor_t*>  Iron_Body_Conjuration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFBE); }
    some<Armor_t*>  Iron_Body_Destruction_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFBF); }
    some<Armor_t*>  Iron_Body_Destruction_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC0); }
    some<Armor_t*>  Iron_Body_Destruction_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC1); }
    some<Armor_t*>  Iron_Body_Health_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04950E); }
    some<Armor_t*>  Iron_Body_Health_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD563); }
    some<Armor_t*>  Iron_Body_Health_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD564); }
    some<Armor_t*>  Iron_Body_Heavy_Armor_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A128); }
    some<Armor_t*>  Iron_Body_Heavy_Armor_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD565); }
    some<Armor_t*>  Iron_Body_Heavy_Armor_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD566); }
    some<Armor_t*>  Iron_Body_Illusion_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC2); }
    some<Armor_t*>  Iron_Body_Illusion_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC3); }
    some<Armor_t*>  Iron_Body_Illusion_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC4); }
    some<Armor_t*>  Iron_Body_Restoration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC5); }
    some<Armor_t*>  Iron_Body_Restoration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC6); }
    some<Armor_t*>  Iron_Body_Restoration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC7); }
    some<Armor_t*>  Iron_Feet()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x012E4B); }
    some<Armor_t*>  Iron_Feet_Carry_1()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A120); }
    some<Armor_t*>  Iron_Feet_Carry_2()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55B); }
    some<Armor_t*>  Iron_Feet_Carry_3()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55C); }
    some<Armor_t*>  Iron_Feet_Resist_Fire_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A0F0); }
    some<Armor_t*>  Iron_Feet_Resist_Fire_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55D); }
    some<Armor_t*>  Iron_Feet_Resist_Fire_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55E); }
    some<Armor_t*>  Iron_Feet_Resist_Frost_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A0F1); }
    some<Armor_t*>  Iron_Feet_Resist_Frost_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55F); }
    some<Armor_t*>  Iron_Feet_Resist_Frost_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD560); }
    some<Armor_t*>  Iron_Feet_Resist_Shock_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x049B92); }
    some<Armor_t*>  Iron_Feet_Resist_Shock_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD561); }
    some<Armor_t*>  Iron_Feet_Resist_Shock_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD562); }
    some<Armor_t*>  Iron_Feet_Stamina_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF8F); }
    some<Armor_t*>  Iron_Feet_Stamina_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF90); }
    some<Armor_t*>  Iron_Feet_Stamina_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF91); }
    some<Armor_t*>  Iron_Hands()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x012E46); }
    some<Armor_t*>  Iron_Hands_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B688); }
    some<Armor_t*>  Iron_Hands_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B689); }
    some<Armor_t*>  Iron_Hands_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B68A); }
    some<Armor_t*>  Iron_Hands_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A12C); }
    some<Armor_t*>  Iron_Hands_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD57B); }
    some<Armor_t*>  Iron_Hands_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD57C); }
    some<Armor_t*>  Iron_Hands_One_Handed_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A12E); }
    some<Armor_t*>  Iron_Hands_One_Handed_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD57D); }
    some<Armor_t*>  Iron_Hands_One_Handed_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD57E); }
    some<Armor_t*>  Iron_Hands_Smithing_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A132); }
    some<Armor_t*>  Iron_Hands_Smithing_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD583); }
    some<Armor_t*>  Iron_Hands_Smithing_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD584); }
    some<Armor_t*>  Iron_Hands_Two_Handed_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A134); }
    some<Armor_t*>  Iron_Hands_Two_Handed_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD585); }
    some<Armor_t*>  Iron_Hands_Two_Handed_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD586); }
    some<Armor_t*>  Iron_Head()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x012E4D); }
    some<Armor_t*>  Iron_Head_Alchemy_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66A); }
    some<Armor_t*>  Iron_Head_Alchemy_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66B); }
    some<Armor_t*>  Iron_Head_Alchemy_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66C); }
    some<Armor_t*>  Iron_Head_Alteration_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A11C); }
    some<Armor_t*>  Iron_Head_Alteration_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD587); }
    some<Armor_t*>  Iron_Head_Alteration_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD588); }
    some<Armor_t*>  Iron_Head_Conjuration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A123); }
    some<Armor_t*>  Iron_Head_Conjuration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD589); }
    some<Armor_t*>  Iron_Head_Conjuration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD58A); }
    some<Armor_t*>  Iron_Head_Destruction_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A125); }
    some<Armor_t*>  Iron_Head_Destruction_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD58B); }
    some<Armor_t*>  Iron_Head_Destruction_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD58C); }
    some<Armor_t*>  Iron_Head_Illusion_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A129); }
    some<Armor_t*>  Iron_Head_Illusion_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD58F); }
    some<Armor_t*>  Iron_Head_Illusion_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD590); }
    some<Armor_t*>  Iron_Head_Magicka_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04A1B1); }
    some<Armor_t*>  Iron_Head_Magicka_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD591); }
    some<Armor_t*>  Iron_Head_Magicka_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD592); }
    some<Armor_t*>  Iron_Head_Marksman_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A12D); }
    some<Armor_t*>  Iron_Head_Marksman_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD593); }
    some<Armor_t*>  Iron_Head_Marksman_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD594); }
    some<Armor_t*>  Iron_Head_Restoration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A131); }
    some<Armor_t*>  Iron_Head_Restoration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD595); }
    some<Armor_t*>  Iron_Head_Restoration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD597); }
    some<Armor_t*>  Iron_Shield()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x012EB6); }
    some<Armor_t*>  Iron_Shield_Block_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A11E); }
    some<Armor_t*>  Iron_Shield_Block_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD596); }
    some<Armor_t*>  Iron_Shield_Block_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD598); }
    some<Armor_t*>  Iron_Shield_Resist_Fire_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04A1B4); }
    some<Armor_t*>  Iron_Shield_Resist_Fire_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD599); }
    some<Armor_t*>  Iron_Shield_Resist_Fire_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD59B); }
    some<Armor_t*>  Iron_Shield_Resist_Frost_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A0EE); }
    some<Armor_t*>  Iron_Shield_Resist_Frost_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD59A); }
    some<Armor_t*>  Iron_Shield_Resist_Frost_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD59C); }
    some<Armor_t*>  Iron_Shield_Resist_Magic_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBC); }
    some<Armor_t*>  Iron_Shield_Resist_Magic_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBD); }
    some<Armor_t*>  Iron_Shield_Resist_Magic_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBE); }
    some<Armor_t*>  Iron_Shield_Resist_Shock_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07A0EF); }
    some<Armor_t*>  Iron_Shield_Resist_Shock_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD59D); }
    some<Armor_t*>  Iron_Shield_Resist_Shock_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD59E); }

    some<Armor_t*>  Iron_Dented_Shield()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03399C); }

    some<Armor_t*>  Iron_Family_Shield()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03521F); }

    some<Armor_t*>  Iron_Forgemasters_Fingers_Hands()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C3CE6); }

    some<Armor_t*>  Iron_Roggi_Shield()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06901D); }

    some<Armor_t*>  Iron_Banded_Body()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013948); }
    some<Armor_t*>  Iron_Banded_Body_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC8); }
    some<Armor_t*>  Iron_Banded_Body_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFC9); }
    some<Armor_t*>  Iron_Banded_Body_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCA); }
    some<Armor_t*>  Iron_Banded_Body_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCB); }
    some<Armor_t*>  Iron_Banded_Body_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCC); }
    some<Armor_t*>  Iron_Banded_Body_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCD); }
    some<Armor_t*>  Iron_Banded_Body_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCE); }
    some<Armor_t*>  Iron_Banded_Body_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFCF); }
    some<Armor_t*>  Iron_Banded_Body_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD0); }
    some<Armor_t*>  Iron_Banded_Body_Health_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACC9D); }
    some<Armor_t*>  Iron_Banded_Body_Health_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD51F); }
    some<Armor_t*>  Iron_Banded_Body_Health_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD520); }
    some<Armor_t*>  Iron_Banded_Body_Heavy_Armor_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACC9E); }
    some<Armor_t*>  Iron_Banded_Body_Heavy_Armor_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD521); }
    some<Armor_t*>  Iron_Banded_Body_Heavy_Armor_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD522); }
    some<Armor_t*>  Iron_Banded_Body_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD1); }
    some<Armor_t*>  Iron_Banded_Body_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD2); }
    some<Armor_t*>  Iron_Banded_Body_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD3); }
    some<Armor_t*>  Iron_Banded_Body_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD4); }
    some<Armor_t*>  Iron_Banded_Body_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD5); }
    some<Armor_t*>  Iron_Banded_Body_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFD6); }
    some<Armor_t*>  Iron_Banded_Shield()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01394B); }
    some<Armor_t*>  Iron_Banded_Shield_Block_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCB7); }
    some<Armor_t*>  Iron_Banded_Shield_Block_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD553); }
    some<Armor_t*>  Iron_Banded_Shield_Block_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD554); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Fire_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCB8); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Fire_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD555); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Fire_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD556); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Frost_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCB9); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Frost_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD557); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Frost_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD558); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Magic_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFB9); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Magic_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBA); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Magic_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBB); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Shock_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0ACCBA); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Shock_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD559); }
    some<Armor_t*>  Iron_Banded_Shield_Resist_Shock_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0AD55A); }

    some<Armor_t*>  Leather_Body()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03619E); }
    some<Armor_t*>  Leather_Body_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEC5); }
    some<Armor_t*>  Leather_Body_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEC6); }
    some<Armor_t*>  Leather_Body_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEC7); }
    some<Armor_t*>  Leather_Body_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEC8); }
    some<Armor_t*>  Leather_Body_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEC9); }
    some<Armor_t*>  Leather_Body_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECA); }
    some<Armor_t*>  Leather_Body_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECB); }
    some<Armor_t*>  Leather_Body_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECC); }
    some<Armor_t*>  Leather_Body_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECD); }
    some<Armor_t*>  Leather_Body_Health_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4234); }
    some<Armor_t*>  Leather_Body_Health_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4235); }
    some<Armor_t*>  Leather_Body_Health_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4236); }
    some<Armor_t*>  Leather_Body_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECE); }
    some<Armor_t*>  Leather_Body_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DECF); }
    some<Armor_t*>  Leather_Body_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED0); }
    some<Armor_t*>  Leather_Body_Light_Armor_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4237); }
    some<Armor_t*>  Leather_Body_Light_Armor_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4238); }
    some<Armor_t*>  Leather_Body_Light_Armor_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4239); }
    some<Armor_t*>  Leather_Body_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED1); }
    some<Armor_t*>  Leather_Body_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED2); }
    some<Armor_t*>  Leather_Body_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED3); }
    some<Armor_t*>  Leather_Feet()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013920); }
    some<Armor_t*>  Leather_Feet_Carry_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4225); }
    some<Armor_t*>  Leather_Feet_Carry_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4226); }
    some<Armor_t*>  Leather_Feet_Carry_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4227); }
    some<Armor_t*>  Leather_Feet_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4228); }
    some<Armor_t*>  Leather_Feet_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4229); }
    some<Armor_t*>  Leather_Feet_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422A); }
    some<Armor_t*>  Leather_Feet_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422B); }
    some<Armor_t*>  Leather_Feet_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422C); }
    some<Armor_t*>  Leather_Feet_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422D); }
    some<Armor_t*>  Leather_Feet_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422E); }
    some<Armor_t*>  Leather_Feet_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B422F); }
    some<Armor_t*>  Leather_Feet_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4230); }
    some<Armor_t*>  Leather_Feet_Sneak_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4231); }
    some<Armor_t*>  Leather_Feet_Sneak_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4232); }
    some<Armor_t*>  Leather_Feet_Sneak_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B4233); }
    some<Armor_t*>  Leather_Feet_Stamina_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF92); }
    some<Armor_t*>  Leather_Feet_Stamina_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF93); }
    some<Armor_t*>  Leather_Feet_Stamina_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF94); }
    some<Armor_t*>  Leather_Hands()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013921); }
    some<Armor_t*>  Leather_Hands_Alchemy_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B68B); }
    some<Armor_t*>  Leather_Hands_Alchemy_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B68C); }
    some<Armor_t*>  Leather_Hands_Alchemy_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B68D); }
    some<Armor_t*>  Leather_Hands_Lockpicking_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B504D); }
    some<Armor_t*>  Leather_Hands_Lockpicking_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B504E); }
    some<Armor_t*>  Leather_Hands_Lockpicking_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B504F); }
    some<Armor_t*>  Leather_Hands_Marksman_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5050); }
    some<Armor_t*>  Leather_Hands_Marksman_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5051); }
    some<Armor_t*>  Leather_Hands_Marksman_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5052); }
    some<Armor_t*>  Leather_Hands_One_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5053); }
    some<Armor_t*>  Leather_Hands_One_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5054); }
    some<Armor_t*>  Leather_Hands_One_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5055); }
    some<Armor_t*>  Leather_Hands_Pickpocket_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5056); }
    some<Armor_t*>  Leather_Hands_Pickpocket_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5057); }
    some<Armor_t*>  Leather_Hands_Pickpocket_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5058); }
    some<Armor_t*>  Leather_Hands_Smithing_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B505C); }
    some<Armor_t*>  Leather_Hands_Smithing_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B505D); }
    some<Armor_t*>  Leather_Hands_Smithing_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B505E); }
    some<Armor_t*>  Leather_Hands_Two_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B505F); }
    some<Armor_t*>  Leather_Hands_Two_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5060); }
    some<Armor_t*>  Leather_Hands_Two_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5061); }
    some<Armor_t*>  Leather_Head()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013922); }
    some<Armor_t*>  Leather_Head_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66D); }
    some<Armor_t*>  Leather_Head_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66E); }
    some<Armor_t*>  Leather_Head_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B66F); }
    some<Armor_t*>  Leather_Head_Alteration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5062); }
    some<Armor_t*>  Leather_Head_Alteration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5063); }
    some<Armor_t*>  Leather_Head_Alteration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5064); }
    some<Armor_t*>  Leather_Head_Conjuration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5065); }
    some<Armor_t*>  Leather_Head_Conjuration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5066); }
    some<Armor_t*>  Leather_Head_Conjuration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5067); }
    some<Armor_t*>  Leather_Head_Destruction_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5068); }
    some<Armor_t*>  Leather_Head_Destruction_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5069); }
    some<Armor_t*>  Leather_Head_Destruction_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B506A); }
    some<Armor_t*>  Leather_Head_Illusion_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5077); }
    some<Armor_t*>  Leather_Head_Illusion_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5078); }
    some<Armor_t*>  Leather_Head_Illusion_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B5079); }
    some<Armor_t*>  Leather_Head_Magicka_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507A); }
    some<Armor_t*>  Leather_Head_Magicka_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507B); }
    some<Armor_t*>  Leather_Head_Magicka_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507C); }
    some<Armor_t*>  Leather_Head_Marksman_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507D); }
    some<Armor_t*>  Leather_Head_Marksman_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507E); }
    some<Armor_t*>  Leather_Head_Marksman_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B507F); }
    some<Armor_t*>  Leather_Head_Restoration_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B506B); }
    some<Armor_t*>  Leather_Head_Restoration_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B506C); }
    some<Armor_t*>  Leather_Head_Restoration_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B506D); }

    some<Armor_t*>  Miraak_Feet()                                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03D2AF); }
    some<Armor_t*>  Miraak_Hands()                                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02B0F9); }

    some<Armor_t*>  Miraak_1_Body()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D1E); }

    some<Armor_t*>  Miraak_1_Heavy_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039FA1); }

    some<Armor_t*>  Miraak_1_Light_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D2B); }

    some<Armor_t*>  Miraak_2_Body()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D20); }

    some<Armor_t*>  Miraak_2_Heavy_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039FA2); }

    some<Armor_t*>  Miraak_2_Light_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D2E); }

    some<Armor_t*>  Miraak_3_Body()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D22); }

    some<Armor_t*>  Miraak_3_Heavy_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039FA3); }

    some<Armor_t*>  Miraak_3_Light_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D2F); }

    some<Armor_t*>  Morag_Tong_Body()                                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0292AC); }
    some<Armor_t*>  Morag_Tong_Feet()                                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0292AB); }
    some<Armor_t*>  Morag_Tong_Hands()                                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0292AD); }
    some<Armor_t*>  Morag_Tong_Head()                                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0292AE); }

    some<Armor_t*>  Nightingale_1_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB86); }
    some<Armor_t*>  Nightingale_1_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC0C); }
    some<Armor_t*>  Nightingale_1_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB87); }
    some<Armor_t*>  Nightingale_1_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB88); }

    some<Armor_t*>  Nightingale_2_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC0E); }
    some<Armor_t*>  Nightingale_2_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB85); }
    some<Armor_t*>  Nightingale_2_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC10); }
    some<Armor_t*>  Nightingale_2_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC13); }

    some<Armor_t*>  Nightingale_3_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC0F); }
    some<Armor_t*>  Nightingale_3_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC0D); }
    some<Armor_t*>  Nightingale_3_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC11); }
    some<Armor_t*>  Nightingale_3_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCC12); }

    some<Armor_t*>  Nightingale_Unplayable_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0483C2); }
    some<Armor_t*>  Nightingale_Unplayable_Feet()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0483C1); }
    some<Armor_t*>  Nightingale_Unplayable_Hands()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0487D1); }
    some<Armor_t*>  Nightingale_Unplayable_Head()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0487D8); }
    
    some<Armor_t*>  Nordic_Body()                                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD97); }
    some<Armor_t*>  Nordic_Body_Alteration_1()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B0); }
    some<Armor_t*>  Nordic_Body_Alteration_2()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B1); }
    some<Armor_t*>  Nordic_Body_Alteration_3()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B2); }
    some<Armor_t*>  Nordic_Body_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B3); }
    some<Armor_t*>  Nordic_Body_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B4); }
    some<Armor_t*>  Nordic_Body_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B5); }
    some<Armor_t*>  Nordic_Body_Destruction_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B6); }
    some<Armor_t*>  Nordic_Body_Destruction_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B7); }
    some<Armor_t*>  Nordic_Body_Destruction_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B8); }
    some<Armor_t*>  Nordic_Body_Health_1()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291B9); }
    some<Armor_t*>  Nordic_Body_Health_2()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BA); }
    some<Armor_t*>  Nordic_Body_Health_3()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BB); }
    some<Armor_t*>  Nordic_Body_Heavy_Armor_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BC); }
    some<Armor_t*>  Nordic_Body_Heavy_Armor_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BD); }
    some<Armor_t*>  Nordic_Body_Heavy_Armor_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BE); }
    some<Armor_t*>  Nordic_Body_Illusion_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291BF); }
    some<Armor_t*>  Nordic_Body_Illusion_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C0); }
    some<Armor_t*>  Nordic_Body_Illusion_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C1); }
    some<Armor_t*>  Nordic_Body_Restoration_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C2); }
    some<Armor_t*>  Nordic_Body_Restoration_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C3); }
    some<Armor_t*>  Nordic_Body_Restoration_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C4); }
    some<Armor_t*>  Nordic_Feet()                                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD96); }
    some<Armor_t*>  Nordic_Feet_Carry_1()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A0); }
    some<Armor_t*>  Nordic_Feet_Carry_2()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A1); }
    some<Armor_t*>  Nordic_Feet_Carry_3()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A2); }
    some<Armor_t*>  Nordic_Feet_Muffle()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A3); }
    some<Armor_t*>  Nordic_Feet_Resist_Fire_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A4); }
    some<Armor_t*>  Nordic_Feet_Resist_Fire_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A5); }
    some<Armor_t*>  Nordic_Feet_Resist_Fire_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A6); }
    some<Armor_t*>  Nordic_Feet_Resist_Frost_1()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A7); }
    some<Armor_t*>  Nordic_Feet_Resist_Frost_2()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A8); }
    some<Armor_t*>  Nordic_Feet_Resist_Frost_3()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291A9); }
    some<Armor_t*>  Nordic_Feet_Resist_Shock_1()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AA); }
    some<Armor_t*>  Nordic_Feet_Resist_Shock_2()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AB); }
    some<Armor_t*>  Nordic_Feet_Resist_Shock_3()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AC); }
    some<Armor_t*>  Nordic_Feet_Stamina_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AD); }
    some<Armor_t*>  Nordic_Feet_Stamina_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AE); }
    some<Armor_t*>  Nordic_Feet_Stamina_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291AF); }
    some<Armor_t*>  Nordic_Hands()                                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD98); }
    some<Armor_t*>  Nordic_Hands_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C5); }
    some<Armor_t*>  Nordic_Hands_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C6); }
    some<Armor_t*>  Nordic_Hands_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C7); }
    some<Armor_t*>  Nordic_Hands_Marksman_1()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C8); }
    some<Armor_t*>  Nordic_Hands_Marksman_2()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291C9); }
    some<Armor_t*>  Nordic_Hands_Marksman_3()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CA); }
    some<Armor_t*>  Nordic_Hands_One_Handed_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CB); }
    some<Armor_t*>  Nordic_Hands_One_Handed_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CC); }
    some<Armor_t*>  Nordic_Hands_One_Handed_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CD); }
    some<Armor_t*>  Nordic_Hands_Smithing_1()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CE); }
    some<Armor_t*>  Nordic_Hands_Smithing_2()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291CF); }
    some<Armor_t*>  Nordic_Hands_Smithing_3()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D0); }
    some<Armor_t*>  Nordic_Hands_Two_Handed_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D1); }
    some<Armor_t*>  Nordic_Hands_Two_Handed_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D2); }
    some<Armor_t*>  Nordic_Hands_Two_Handed_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D3); }
    some<Armor_t*>  Nordic_Head()                                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD99); }
    some<Armor_t*>  Nordic_Head_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D4); }
    some<Armor_t*>  Nordic_Head_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D5); }
    some<Armor_t*>  Nordic_Head_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D6); }
    some<Armor_t*>  Nordic_Head_Alteration_1()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D7); }
    some<Armor_t*>  Nordic_Head_Alteration_2()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D8); }
    some<Armor_t*>  Nordic_Head_Alteration_3()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291D9); }
    some<Armor_t*>  Nordic_Head_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DA); }
    some<Armor_t*>  Nordic_Head_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DB); }
    some<Armor_t*>  Nordic_Head_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DC); }
    some<Armor_t*>  Nordic_Head_Destruction_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DD); }
    some<Armor_t*>  Nordic_Head_Destruction_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DE); }
    some<Armor_t*>  Nordic_Head_Destruction_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291DF); }
    some<Armor_t*>  Nordic_Head_Illusion_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E0); }
    some<Armor_t*>  Nordic_Head_Illusion_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E1); }
    some<Armor_t*>  Nordic_Head_Illusion_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E2); }
    some<Armor_t*>  Nordic_Head_Magicka_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E3); }
    some<Armor_t*>  Nordic_Head_Magicka_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E4); }
    some<Armor_t*>  Nordic_Head_Magicka_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E5); }
    some<Armor_t*>  Nordic_Head_Marksman_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E6); }
    some<Armor_t*>  Nordic_Head_Marksman_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E7); }
    some<Armor_t*>  Nordic_Head_Marksman_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E8); }
    some<Armor_t*>  Nordic_Head_Restoration_1()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291E9); }
    some<Armor_t*>  Nordic_Head_Restoration_2()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291EA); }
    some<Armor_t*>  Nordic_Head_Restoration_3()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291EB); }
    some<Armor_t*>  Nordic_Head_Waterbreathing()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291EC); }
    some<Armor_t*>  Nordic_Shield()                                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x026236); }
    some<Armor_t*>  Nordic_Shield_Block_1()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291EE); }
    some<Armor_t*>  Nordic_Shield_Block_2()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291EF); }
    some<Armor_t*>  Nordic_Shield_Block_3()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F0); }
    some<Armor_t*>  Nordic_Shield_Resist_Fire_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291ED); }
    some<Armor_t*>  Nordic_Shield_Resist_Fire_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F1); }
    some<Armor_t*>  Nordic_Shield_Resist_Fire_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F2); }
    some<Armor_t*>  Nordic_Shield_Resist_Frost_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F3); }
    some<Armor_t*>  Nordic_Shield_Resist_Frost_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F4); }
    some<Armor_t*>  Nordic_Shield_Resist_Frost_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F5); }
    some<Armor_t*>  Nordic_Shield_Resist_Magic_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F6); }
    some<Armor_t*>  Nordic_Shield_Resist_Magic_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F7); }
    some<Armor_t*>  Nordic_Shield_Resist_Magic_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F8); }
    some<Armor_t*>  Nordic_Shield_Resist_Shock_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291F9); }
    some<Armor_t*>  Nordic_Shield_Resist_Shock_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FA); }
    some<Armor_t*>  Nordic_Shield_Resist_Shock_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FB); }

    some<Armor_t*>  Orcish_Body()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013957); }
    some<Armor_t*>  Orcish_Body_Alteration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED4); }
    some<Armor_t*>  Orcish_Body_Alteration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED5); }
    some<Armor_t*>  Orcish_Body_Alteration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED6); }
    some<Armor_t*>  Orcish_Body_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED7); }
    some<Armor_t*>  Orcish_Body_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED8); }
    some<Armor_t*>  Orcish_Body_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DED9); }
    some<Armor_t*>  Orcish_Body_Destruction_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDA); }
    some<Armor_t*>  Orcish_Body_Destruction_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDB); }
    some<Armor_t*>  Orcish_Body_Destruction_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDC); }
    some<Armor_t*>  Orcish_Body_Health_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C2); }
    some<Armor_t*>  Orcish_Body_Health_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C3); }
    some<Armor_t*>  Orcish_Body_Health_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C4); }
    some<Armor_t*>  Orcish_Body_Heavy_Armor_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C5); }
    some<Armor_t*>  Orcish_Body_Heavy_Armor_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C6); }
    some<Armor_t*>  Orcish_Body_Heavy_Armor_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7C7); }
    some<Armor_t*>  Orcish_Body_Illusion_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDD); }
    some<Armor_t*>  Orcish_Body_Illusion_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDE); }
    some<Armor_t*>  Orcish_Body_Illusion_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEDF); }
    some<Armor_t*>  Orcish_Body_Restoration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE0); }
    some<Armor_t*>  Orcish_Body_Restoration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE1); }
    some<Armor_t*>  Orcish_Body_Restoration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE2); }
    some<Armor_t*>  Orcish_Feet()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013956); }
    some<Armor_t*>  Orcish_Feet_Carry_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7AF); }
    some<Armor_t*>  Orcish_Feet_Carry_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B0); }
    some<Armor_t*>  Orcish_Feet_Carry_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B1); }
    some<Armor_t*>  Orcish_Feet_Muffle()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B2); }
    some<Armor_t*>  Orcish_Feet_Resist_Fire_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B3); }
    some<Armor_t*>  Orcish_Feet_Resist_Fire_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B4); }
    some<Armor_t*>  Orcish_Feet_Resist_Fire_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B5); }
    some<Armor_t*>  Orcish_Feet_Resist_Frost_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B6); }
    some<Armor_t*>  Orcish_Feet_Resist_Frost_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B7); }
    some<Armor_t*>  Orcish_Feet_Resist_Frost_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B8); }
    some<Armor_t*>  Orcish_Feet_Resist_Shock_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7B9); }
    some<Armor_t*>  Orcish_Feet_Resist_Shock_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7BA); }
    some<Armor_t*>  Orcish_Feet_Resist_Shock_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7BB); }
    some<Armor_t*>  Orcish_Feet_Stamina_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF95); }
    some<Armor_t*>  Orcish_Feet_Stamina_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF96); }
    some<Armor_t*>  Orcish_Feet_Stamina_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF97); }
    some<Armor_t*>  Orcish_Hands()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013958); }
    some<Armor_t*>  Orcish_Hands_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7D8); }
    some<Armor_t*>  Orcish_Hands_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7D9); }
    some<Armor_t*>  Orcish_Hands_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7DA); }
    some<Armor_t*>  Orcish_Hands_Marksman_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7ED); }
    some<Armor_t*>  Orcish_Hands_Marksman_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7EE); }
    some<Armor_t*>  Orcish_Hands_Marksman_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7EF); }
    some<Armor_t*>  Orcish_Hands_One_Handed_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F0); }
    some<Armor_t*>  Orcish_Hands_One_Handed_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F1); }
    some<Armor_t*>  Orcish_Hands_One_Handed_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F2); }
    some<Armor_t*>  Orcish_Hands_Smithing_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F6); }
    some<Armor_t*>  Orcish_Hands_Smithing_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F7); }
    some<Armor_t*>  Orcish_Hands_Smithing_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F8); }
    some<Armor_t*>  Orcish_Hands_Two_Handed_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7F9); }
    some<Armor_t*>  Orcish_Hands_Two_Handed_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FA); }
    some<Armor_t*>  Orcish_Hands_Two_Handed_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FB); }
    some<Armor_t*>  Orcish_Head()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013959); }
    some<Armor_t*>  Orcish_Head_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FC); }
    some<Armor_t*>  Orcish_Head_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FD); }
    some<Armor_t*>  Orcish_Head_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FE); }
    some<Armor_t*>  Orcish_Head_Alteration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF7FF); }
    some<Armor_t*>  Orcish_Head_Alteration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF800); }
    some<Armor_t*>  Orcish_Head_Alteration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF801); }
    some<Armor_t*>  Orcish_Head_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF802); }
    some<Armor_t*>  Orcish_Head_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF803); }
    some<Armor_t*>  Orcish_Head_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF804); }
    some<Armor_t*>  Orcish_Head_Destruction_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF805); }
    some<Armor_t*>  Orcish_Head_Destruction_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF806); }
    some<Armor_t*>  Orcish_Head_Destruction_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF807); }
    some<Armor_t*>  Orcish_Head_Illusion_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF80B); }
    some<Armor_t*>  Orcish_Head_Illusion_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF80C); }
    some<Armor_t*>  Orcish_Head_Illusion_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF80D); }
    some<Armor_t*>  Orcish_Head_Magicka_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF80E); }
    some<Armor_t*>  Orcish_Head_Magicka_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF80F); }
    some<Armor_t*>  Orcish_Head_Magicka_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF810); }
    some<Armor_t*>  Orcish_Head_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF811); }
    some<Armor_t*>  Orcish_Head_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF812); }
    some<Armor_t*>  Orcish_Head_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF813); }
    some<Armor_t*>  Orcish_Head_Restoration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF814); }
    some<Armor_t*>  Orcish_Head_Restoration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF815); }
    some<Armor_t*>  Orcish_Head_Restoration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF816); }
    some<Armor_t*>  Orcish_Head_Waterbreathing()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF817); }
    some<Armor_t*>  Orcish_Shield()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013946); }
    some<Armor_t*>  Orcish_Shield_Block_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF818); }
    some<Armor_t*>  Orcish_Shield_Block_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF819); }
    some<Armor_t*>  Orcish_Shield_Block_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81A); }
    some<Armor_t*>  Orcish_Shield_Resist_Fire_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81B); }
    some<Armor_t*>  Orcish_Shield_Resist_Fire_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81C); }
    some<Armor_t*>  Orcish_Shield_Resist_Fire_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81D); }
    some<Armor_t*>  Orcish_Shield_Resist_Frost_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81E); }
    some<Armor_t*>  Orcish_Shield_Resist_Frost_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF81F); }
    some<Armor_t*>  Orcish_Shield_Resist_Frost_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CE20B); }
    some<Armor_t*>  Orcish_Shield_Resist_Magic_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFBF); }
    some<Armor_t*>  Orcish_Shield_Resist_Magic_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC0); }
    some<Armor_t*>  Orcish_Shield_Resist_Magic_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC1); }
    some<Armor_t*>  Orcish_Shield_Resist_Shock_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF821); }
    some<Armor_t*>  Orcish_Shield_Resist_Shock_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF823); }
    some<Armor_t*>  Orcish_Shield_Resist_Shock_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF822); }

    some<Armor_t*>  Penitus_Oculatus_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3EA0); }
    some<Armor_t*>  Penitus_Oculatus_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3EA7); }
    some<Armor_t*>  Penitus_Oculatus_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3EAB); }
    some<Armor_t*>  Penitus_Oculatus_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3EAA); }

    some<Armor_t*>  Scaled_Body()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3A3); }
    some<Armor_t*>  Scaled_Body_Alteration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE3); }
    some<Armor_t*>  Scaled_Body_Alteration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE4); }
    some<Armor_t*>  Scaled_Body_Alteration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE5); }
    some<Armor_t*>  Scaled_Body_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE6); }
    some<Armor_t*>  Scaled_Body_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE7); }
    some<Armor_t*>  Scaled_Body_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE8); }
    some<Armor_t*>  Scaled_Body_Destruction_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEE9); }
    some<Armor_t*>  Scaled_Body_Destruction_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEEA); }
    some<Armor_t*>  Scaled_Body_Destruction_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEEB); }
    some<Armor_t*>  Scaled_Body_Health_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F5); }
    some<Armor_t*>  Scaled_Body_Health_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F6); }
    some<Armor_t*>  Scaled_Body_Health_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F7); }
    some<Armor_t*>  Scaled_Body_Illusion_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEEC); }
    some<Armor_t*>  Scaled_Body_Illusion_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEED); }
    some<Armor_t*>  Scaled_Body_Illusion_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEEE); }
    some<Armor_t*>  Scaled_Body_Light_Armor_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F8); }
    some<Armor_t*>  Scaled_Body_Light_Armor_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F9); }
    some<Armor_t*>  Scaled_Body_Light_Armor_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53FA); }
    some<Armor_t*>  Scaled_Body_Restoration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEEF); }
    some<Armor_t*>  Scaled_Body_Restoration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF0); }
    some<Armor_t*>  Scaled_Body_Restoration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF1); }
    some<Armor_t*>  Scaled_Feet()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B39F); }
    some<Armor_t*>  Scaled_Feet_Carry_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E6); }
    some<Armor_t*>  Scaled_Feet_Carry_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E7); }
    some<Armor_t*>  Scaled_Feet_Carry_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E8); }
    some<Armor_t*>  Scaled_Feet_Resist_Fire_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53E9); }
    some<Armor_t*>  Scaled_Feet_Resist_Fire_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53EA); }
    some<Armor_t*>  Scaled_Feet_Resist_Fire_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53EB); }
    some<Armor_t*>  Scaled_Feet_Resist_Frost_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53EC); }
    some<Armor_t*>  Scaled_Feet_Resist_Frost_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53ED); }
    some<Armor_t*>  Scaled_Feet_Resist_Frost_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53EE); }
    some<Armor_t*>  Scaled_Feet_Resist_Shock_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53EF); }
    some<Armor_t*>  Scaled_Feet_Resist_Shock_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F0); }
    some<Armor_t*>  Scaled_Feet_Resist_Shock_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F1); }
    some<Armor_t*>  Scaled_Feet_Sneak_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F2); }
    some<Armor_t*>  Scaled_Feet_Sneak_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F3); }
    some<Armor_t*>  Scaled_Feet_Sneak_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D53F4); }
    some<Armor_t*>  Scaled_Feet_Stamina_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF98); }
    some<Armor_t*>  Scaled_Feet_Stamina_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF99); }
    some<Armor_t*>  Scaled_Feet_Stamina_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9A); }
    some<Armor_t*>  Scaled_Hands()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3A0); }
    some<Armor_t*>  Scaled_Hands_Alchemy_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BD0); }
    some<Armor_t*>  Scaled_Hands_Alchemy_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BD1); }
    some<Armor_t*>  Scaled_Hands_Alchemy_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BD2); }
    some<Armor_t*>  Scaled_Hands_Lockpicking_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BE6); }
    some<Armor_t*>  Scaled_Hands_Lockpicking_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BE7); }
    some<Armor_t*>  Scaled_Hands_Lockpicking_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BE8); }
    some<Armor_t*>  Scaled_Hands_Marksman_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BE9); }
    some<Armor_t*>  Scaled_Hands_Marksman_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BEA); }
    some<Armor_t*>  Scaled_Hands_Marksman_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046BEB); }
    some<Armor_t*>  Scaled_Hands_One_Handed_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C79); }
    some<Armor_t*>  Scaled_Hands_One_Handed_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C7A); }
    some<Armor_t*>  Scaled_Hands_One_Handed_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C7C); }
    some<Armor_t*>  Scaled_Hands_Pickpocket_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C7D); }
    some<Armor_t*>  Scaled_Hands_Pickpocket_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C7F); }
    some<Armor_t*>  Scaled_Hands_Pickpocket_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C80); }
    some<Armor_t*>  Scaled_Hands_Smithing_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046C9E); }
    some<Armor_t*>  Scaled_Hands_Smithing_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CDA); }
    some<Armor_t*>  Scaled_Hands_Smithing_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CEA); }
    some<Armor_t*>  Scaled_Hands_Two_Handed_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF3); }
    some<Armor_t*>  Scaled_Hands_Two_Handed_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF4); }
    some<Armor_t*>  Scaled_Hands_Two_Handed_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF5); }
    some<Armor_t*>  Scaled_Head()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3A1); }
    some<Armor_t*>  Scaled_Head_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF7); }
    some<Armor_t*>  Scaled_Head_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF6); }
    some<Armor_t*>  Scaled_Head_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046CF8); }
    some<Armor_t*>  Scaled_Head_Alteration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046D1A); }
    some<Armor_t*>  Scaled_Head_Alteration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046D1F); }
    some<Armor_t*>  Scaled_Head_Alteration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046D20); }
    some<Armor_t*>  Scaled_Head_Conjuration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046D21); }
    some<Armor_t*>  Scaled_Head_Conjuration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DB1); }
    some<Armor_t*>  Scaled_Head_Conjuration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DB2); }
    some<Armor_t*>  Scaled_Head_Destruction_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DB3); }
    some<Armor_t*>  Scaled_Head_Destruction_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DB4); }
    some<Armor_t*>  Scaled_Head_Destruction_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DB5); }
    some<Armor_t*>  Scaled_Head_Illusion_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DC2); }
    some<Armor_t*>  Scaled_Head_Illusion_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DC3); }
    some<Armor_t*>  Scaled_Head_Illusion_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DC4); }
    some<Armor_t*>  Scaled_Head_Magicka_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DC7); }
    some<Armor_t*>  Scaled_Head_Magicka_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DCA); }
    some<Armor_t*>  Scaled_Head_Magicka_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DCB); }
    some<Armor_t*>  Scaled_Head_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DD3); }
    some<Armor_t*>  Scaled_Head_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DD9); }
    some<Armor_t*>  Scaled_Head_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DE2); }
    some<Armor_t*>  Scaled_Head_Restoration_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DED); }
    some<Armor_t*>  Scaled_Head_Restoration_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DEE); }
    some<Armor_t*>  Scaled_Head_Restoration_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DEF); }
    some<Armor_t*>  Scaled_Head_Waterbreathing()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x046DF0); }

    some<Armor_t*>  Scaled_Horned_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3A4); }

    some<Armor_t*>  Shrouded_Body()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2844); }
    some<Armor_t*>  Shrouded_Feet()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2845); }
    some<Armor_t*>  Shrouded_Hands()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2843); }
    some<Armor_t*>  Shrouded_Head()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2842); }

    some<Armor_t*>  Shrouded_Maskless_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05ABC4); }

    some<Armor_t*>  Shrouded_Short_Sleeved_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05ABC3); }

    some<Armor_t*>  Shrouded_Tumblerbane_Hands()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F5981); }

    some<Armor_t*>  Shrouded_Ancient_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E1F15); }
    some<Armor_t*>  Shrouded_Ancient_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E1F14); }
    some<Armor_t*>  Shrouded_Ancient_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E1F16); }
    some<Armor_t*>  Shrouded_Ancient_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E1F17); }

    some<Armor_t*>  Shrouded_Worn_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB5B); }
    some<Armor_t*>  Shrouded_Worn_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB5C); }
    some<Armor_t*>  Shrouded_Worn_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB5E); }
    some<Armor_t*>  Shrouded_Worn_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10EB5D); }

    some<Armor_t*>  Stalhrim_Heavy_Body()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD9F); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Alteration_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920C); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Alteration_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920D); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Alteration_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920E); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920F); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029210); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029211); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Destruction_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029212); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Destruction_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029213); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Destruction_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029214); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029215); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029216); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029218); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_Rate_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029219); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_Rate_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921A); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Health_Rate_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029217); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Heavy_Armor_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921B); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Heavy_Armor_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921C); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Heavy_Armor_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921D); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Illusion_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921E); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Illusion_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02921F); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Illusion_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029220); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Restoration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029221); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Restoration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029222); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Restoration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029223); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Stamina_Rate_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029224); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Stamina_Rate_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029225); }
    some<Armor_t*>  Stalhrim_Heavy_Body_Stamina_Rate_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029226); }
    some<Armor_t*>  Stalhrim_Heavy_Feet()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD9E); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Carry_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FC); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Carry_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FD); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Carry_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FE); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Muffle()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0291FF); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Fire_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029200); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Fire_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029201); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Fire_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029202); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029203); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Frost_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029204); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Frost_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029205); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Shock_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029206); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Shock_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029207); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Resist_Shock_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029208); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Stamina_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029209); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Stamina_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920A); }
    some<Armor_t*>  Stalhrim_Heavy_Feet_Stamina_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02920B); }
    some<Armor_t*>  Stalhrim_Heavy_Hands()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA0); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Alchemy_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029227); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Alchemy_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029228); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Alchemy_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029229); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Marksman_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922A); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Marksman_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922B); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Marksman_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922C); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_One_Handed_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922D); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_One_Handed_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922E); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_One_Handed_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02922F); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Smithing_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029230); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Smithing_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029231); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Smithing_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029232); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Two_Handed_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029233); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Two_Handed_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029234); }
    some<Armor_t*>  Stalhrim_Heavy_Hands_Two_Handed_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029235); }
    some<Armor_t*>  Stalhrim_Heavy_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA1); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alchemy_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029236); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alchemy_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029237); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alchemy_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029238); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alteration_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029239); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alteration_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923A); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Alteration_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923B); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923C); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923D); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923E); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Destruction_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02923F); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Destruction_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029240); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Destruction_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029241); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Illusion_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029242); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Illusion_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029243); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Illusion_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029244); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029245); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029246); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029247); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_Rate_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029248); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_Rate_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029249); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Magicka_Rate_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924A); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Marksman_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924B); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Marksman_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924C); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Marksman_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924D); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Restoration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924E); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Restoration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02924F); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Restoration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029250); }
    some<Armor_t*>  Stalhrim_Heavy_Head_Waterbreathing()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029251); }

    some<Armor_t*>  Stalhrim_Light_Body()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA2); }
    some<Armor_t*>  Stalhrim_Light_Body_Alteration_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A5); }
    some<Armor_t*>  Stalhrim_Light_Body_Alteration_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A6); }
    some<Armor_t*>  Stalhrim_Light_Body_Alteration_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A7); }
    some<Armor_t*>  Stalhrim_Light_Body_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A8); }
    some<Armor_t*>  Stalhrim_Light_Body_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A9); }
    some<Armor_t*>  Stalhrim_Light_Body_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AA); }
    some<Armor_t*>  Stalhrim_Light_Body_Destruction_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AB); }
    some<Armor_t*>  Stalhrim_Light_Body_Destruction_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AC); }
    some<Armor_t*>  Stalhrim_Light_Body_Destruction_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AD); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B1); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B2); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_3()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B3); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_Rate_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AE); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_Rate_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290AF); }
    some<Armor_t*>  Stalhrim_Light_Body_Health_Rate_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B0); }
    some<Armor_t*>  Stalhrim_Light_Body_Illusion_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B4); }
    some<Armor_t*>  Stalhrim_Light_Body_Illusion_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B5); }
    some<Armor_t*>  Stalhrim_Light_Body_Illusion_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B6); }
    some<Armor_t*>  Stalhrim_Light_Body_Light_Armor_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B7); }
    some<Armor_t*>  Stalhrim_Light_Body_Light_Armor_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B8); }
    some<Armor_t*>  Stalhrim_Light_Body_Light_Armor_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290B9); }
    some<Armor_t*>  Stalhrim_Light_Body_Restoration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BA); }
    some<Armor_t*>  Stalhrim_Light_Body_Restoration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BB); }
    some<Armor_t*>  Stalhrim_Light_Body_Restoration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BC); }
    some<Armor_t*>  Stalhrim_Light_Body_Stamina_Rate_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BD); }
    some<Armor_t*>  Stalhrim_Light_Body_Stamina_Rate_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BE); }
    some<Armor_t*>  Stalhrim_Light_Body_Stamina_Rate_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290BF); }
    some<Armor_t*>  Stalhrim_Light_Feet()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CD7E); }
    some<Armor_t*>  Stalhrim_Light_Feet_Carry_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029093); }
    some<Armor_t*>  Stalhrim_Light_Feet_Carry_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029094); }
    some<Armor_t*>  Stalhrim_Light_Feet_Carry_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029095); }
    some<Armor_t*>  Stalhrim_Light_Feet_Muffle()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029100); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Fire_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029096); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Fire_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029097); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Fire_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029098); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Frost_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x029099); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Frost_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909A); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Frost_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909B); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Shock_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909D); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Shock_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909E); }
    some<Armor_t*>  Stalhrim_Light_Feet_Resist_Shock_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909F); }
    some<Armor_t*>  Stalhrim_Light_Feet_Sneak_1()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02909C); }
    some<Armor_t*>  Stalhrim_Light_Feet_Sneak_2()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A0); }
    some<Armor_t*>  Stalhrim_Light_Feet_Sneak_3()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A1); }
    some<Armor_t*>  Stalhrim_Light_Feet_Stamina_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A2); }
    some<Armor_t*>  Stalhrim_Light_Feet_Stamina_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A3); }
    some<Armor_t*>  Stalhrim_Light_Feet_Stamina_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290A4); }
    some<Armor_t*>  Stalhrim_Light_Hands()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA5); }
    some<Armor_t*>  Stalhrim_Light_Hands_Alchemy_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C0); }
    some<Armor_t*>  Stalhrim_Light_Hands_Alchemy_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C1); }
    some<Armor_t*>  Stalhrim_Light_Hands_Alchemy_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C2); }
    some<Armor_t*>  Stalhrim_Light_Hands_Lockpicking_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C3); }
    some<Armor_t*>  Stalhrim_Light_Hands_Lockpicking_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C4); }
    some<Armor_t*>  Stalhrim_Light_Hands_Lockpicking_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C5); }
    some<Armor_t*>  Stalhrim_Light_Hands_Marksman_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C6); }
    some<Armor_t*>  Stalhrim_Light_Hands_Marksman_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C7); }
    some<Armor_t*>  Stalhrim_Light_Hands_Marksman_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C8); }
    some<Armor_t*>  Stalhrim_Light_Hands_One_Handed_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290C9); }
    some<Armor_t*>  Stalhrim_Light_Hands_One_Handed_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CA); }
    some<Armor_t*>  Stalhrim_Light_Hands_One_Handed_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CB); }
    some<Armor_t*>  Stalhrim_Light_Hands_Pickpocket_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CC); }
    some<Armor_t*>  Stalhrim_Light_Hands_Pickpocket_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CD); }
    some<Armor_t*>  Stalhrim_Light_Hands_Pickpocket_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CE); }
    some<Armor_t*>  Stalhrim_Light_Hands_Smithing_1()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290CF); }
    some<Armor_t*>  Stalhrim_Light_Hands_Smithing_2()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D0); }
    some<Armor_t*>  Stalhrim_Light_Hands_Smithing_3()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D1); }
    some<Armor_t*>  Stalhrim_Light_Hands_Two_Handed_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D2); }
    some<Armor_t*>  Stalhrim_Light_Hands_Two_Handed_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D3); }
    some<Armor_t*>  Stalhrim_Light_Hands_Two_Handed_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D4); }
    some<Armor_t*>  Stalhrim_Light_Head()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA3); }
    some<Armor_t*>  Stalhrim_Light_Head_Alchemy_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D5); }
    some<Armor_t*>  Stalhrim_Light_Head_Alchemy_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D6); }
    some<Armor_t*>  Stalhrim_Light_Head_Alchemy_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D7); }
    some<Armor_t*>  Stalhrim_Light_Head_Alteration_1()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D8); }
    some<Armor_t*>  Stalhrim_Light_Head_Alteration_2()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290D9); }
    some<Armor_t*>  Stalhrim_Light_Head_Alteration_3()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DA); }
    some<Armor_t*>  Stalhrim_Light_Head_Conjuration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DB); }
    some<Armor_t*>  Stalhrim_Light_Head_Conjuration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DC); }
    some<Armor_t*>  Stalhrim_Light_Head_Conjuration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DD); }
    some<Armor_t*>  Stalhrim_Light_Head_Destruction_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DE); }
    some<Armor_t*>  Stalhrim_Light_Head_Destruction_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290DF); }
    some<Armor_t*>  Stalhrim_Light_Head_Destruction_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E0); }
    some<Armor_t*>  Stalhrim_Light_Head_Illusion_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E1); }
    some<Armor_t*>  Stalhrim_Light_Head_Illusion_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E2); }
    some<Armor_t*>  Stalhrim_Light_Head_Illusion_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E3); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E4); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E5); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E6); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_Rate_1()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E7); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_Rate_2()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E8); }
    some<Armor_t*>  Stalhrim_Light_Head_Magicka_Rate_3()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290E9); }
    some<Armor_t*>  Stalhrim_Light_Head_Marksman_1()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290EA); }
    some<Armor_t*>  Stalhrim_Light_Head_Marksman_2()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290EB); }
    some<Armor_t*>  Stalhrim_Light_Head_Marksman_3()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290EC); }
    some<Armor_t*>  Stalhrim_Light_Head_Restoration_1()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290ED); }
    some<Armor_t*>  Stalhrim_Light_Head_Restoration_2()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290EE); }
    some<Armor_t*>  Stalhrim_Light_Head_Restoration_3()                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290EF); }
    some<Armor_t*>  Stalhrim_Light_Head_Waterbreathing()                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FF); }
    some<Armor_t*>  Stalhrim_Light_Shield()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x026237); }
    some<Armor_t*>  Stalhrim_Light_Shield_Block_1()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F0); }
    some<Armor_t*>  Stalhrim_Light_Shield_Block_2()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F1); }
    some<Armor_t*>  Stalhrim_Light_Shield_Block_3()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F2); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Fire_1()               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F3); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Fire_2()               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F4); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Fire_3()               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F5); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Frost_1()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F6); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Frost_2()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F7); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Frost_3()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F8); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Magic_1()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290F9); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Magic_2()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FA); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Magic_3()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FB); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Shock_1()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FC); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Shock_2()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FD); }
    some<Armor_t*>  Stalhrim_Light_Shield_Resist_Shock_3()              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0290FE); }

    some<Armor_t*>  Stalhrim_Light_Deathbrand_Body()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02401B); }
    some<Armor_t*>  Stalhrim_Light_Deathbrand_Feet()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02401A); }
    some<Armor_t*>  Stalhrim_Light_Deathbrand_Hands()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02401C); }
    some<Armor_t*>  Stalhrim_Light_Deathbrand_Head()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02401D); }

    some<Armor_t*>  Steel_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013952); }
    some<Armor_t*>  Steel_Body_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF2); }
    some<Armor_t*>  Steel_Body_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF3); }
    some<Armor_t*>  Steel_Body_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF4); }
    some<Armor_t*>  Steel_Body_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF5); }
    some<Armor_t*>  Steel_Body_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF6); }
    some<Armor_t*>  Steel_Body_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF7); }
    some<Armor_t*>  Steel_Body_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF8); }
    some<Armor_t*>  Steel_Body_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEF9); }
    some<Armor_t*>  Steel_Body_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFA); }
    some<Armor_t*>  Steel_Body_Health_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A5); }
    some<Armor_t*>  Steel_Body_Health_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A6); }
    some<Armor_t*>  Steel_Body_Health_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A7); }
    some<Armor_t*>  Steel_Body_Heavy_Armor_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A8); }
    some<Armor_t*>  Steel_Body_Heavy_Armor_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A9); }
    some<Armor_t*>  Steel_Body_Heavy_Armor_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50AA); }
    some<Armor_t*>  Steel_Body_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFB); }
    some<Armor_t*>  Steel_Body_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFC); }
    some<Armor_t*>  Steel_Body_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFD); }
    some<Armor_t*>  Steel_Body_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFE); }
    some<Armor_t*>  Steel_Body_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DEFF); }
    some<Armor_t*>  Steel_Body_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF00); }
    some<Armor_t*>  Steel_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013951); }
    some<Armor_t*>  Steel_Feet_Carry_1()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509A); }
    some<Armor_t*>  Steel_Feet_Carry_2()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509B); }
    some<Armor_t*>  Steel_Feet_Carry_3()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509C); }
    some<Armor_t*>  Steel_Feet_Muffle()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092A75); }
    some<Armor_t*>  Steel_Feet_Resist_Fire_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509D); }
    some<Armor_t*>  Steel_Feet_Resist_Fire_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509E); }
    some<Armor_t*>  Steel_Feet_Resist_Fire_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B509F); }
    some<Armor_t*>  Steel_Feet_Resist_Frost_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A0); }
    some<Armor_t*>  Steel_Feet_Resist_Frost_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F9); }
    some<Armor_t*>  Steel_Feet_Resist_Frost_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A1); }
    some<Armor_t*>  Steel_Feet_Resist_Shock_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A2); }
    some<Armor_t*>  Steel_Feet_Resist_Shock_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A3); }
    some<Armor_t*>  Steel_Feet_Resist_Shock_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50A4); }
    some<Armor_t*>  Steel_Feet_Stamina_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9B); }
    some<Armor_t*>  Steel_Feet_Stamina_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9C); }
    some<Armor_t*>  Steel_Feet_Stamina_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9D); }
    some<Armor_t*>  Steel_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013953); }
    some<Armor_t*>  Steel_Hands_Alchemy_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B691); }
    some<Armor_t*>  Steel_Hands_Alchemy_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B692); }
    some<Armor_t*>  Steel_Hands_Alchemy_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B693); }
    some<Armor_t*>  Steel_Hands_Marksman_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50BE); }
    some<Armor_t*>  Steel_Hands_Marksman_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50CB); }
    some<Armor_t*>  Steel_Hands_Marksman_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50CC); }
    some<Armor_t*>  Steel_Hands_One_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50BF); }
    some<Armor_t*>  Steel_Hands_One_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50CD); }
    some<Armor_t*>  Steel_Hands_One_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50CE); }
    some<Armor_t*>  Steel_Hands_Smithing_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50C1); }
    some<Armor_t*>  Steel_Hands_Smithing_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B694); }
    some<Armor_t*>  Steel_Hands_Smithing_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B695); }
    some<Armor_t*>  Steel_Hands_Two_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50C2); }
    some<Armor_t*>  Steel_Hands_Two_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D1); }
    some<Armor_t*>  Steel_Hands_Two_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D2); }
    some<Armor_t*>  Steel_Head()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013954); }
    some<Armor_t*>  Steel_Head_Alchemy_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B69F); }
    some<Armor_t*>  Steel_Head_Alchemy_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A0); }
    some<Armor_t*>  Steel_Head_Alchemy_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B6A1); }
    some<Armor_t*>  Steel_Head_Alteration_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D3); }
    some<Armor_t*>  Steel_Head_Alteration_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DB); }
    some<Armor_t*>  Steel_Head_Alteration_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DC); }
    some<Armor_t*>  Steel_Head_Conjuration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D4); }
    some<Armor_t*>  Steel_Head_Conjuration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DD); }
    some<Armor_t*>  Steel_Head_Conjuration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DE); }
    some<Armor_t*>  Steel_Head_Destruction_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D5); }
    some<Armor_t*>  Steel_Head_Destruction_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DF); }
    some<Armor_t*>  Steel_Head_Destruction_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E0); }
    some<Armor_t*>  Steel_Head_Illusion_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D7); }
    some<Armor_t*>  Steel_Head_Illusion_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E3); }
    some<Armor_t*>  Steel_Head_Illusion_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E4); }
    some<Armor_t*>  Steel_Head_Magicka_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D8); }
    some<Armor_t*>  Steel_Head_Magicka_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E5); }
    some<Armor_t*>  Steel_Head_Magicka_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E6); }
    some<Armor_t*>  Steel_Head_Marksman_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50D9); }
    some<Armor_t*>  Steel_Head_Marksman_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E9); }
    some<Armor_t*>  Steel_Head_Marksman_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50EA); }
    some<Armor_t*>  Steel_Head_Restoration_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50DA); }
    some<Armor_t*>  Steel_Head_Restoration_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E7); }
    some<Armor_t*>  Steel_Head_Restoration_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50E8); }
    some<Armor_t*>  Steel_Head_Waterbreathing()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092A86); }
    some<Armor_t*>  Steel_Shield()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013955); }
    some<Armor_t*>  Steel_Shield_Block_1()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50EB); }
    some<Armor_t*>  Steel_Shield_Block_2()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50EF); }
    some<Armor_t*>  Steel_Shield_Block_3()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F0); }
    some<Armor_t*>  Steel_Shield_Resist_Fire_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50EC); }
    some<Armor_t*>  Steel_Shield_Resist_Fire_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F1); }
    some<Armor_t*>  Steel_Shield_Resist_Fire_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F2); }
    some<Armor_t*>  Steel_Shield_Resist_Frost_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50ED); }
    some<Armor_t*>  Steel_Shield_Resist_Frost_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F3); }
    some<Armor_t*>  Steel_Shield_Resist_Frost_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F4); }
    some<Armor_t*>  Steel_Shield_Resist_Magic_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC5); }
    some<Armor_t*>  Steel_Shield_Resist_Magic_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC6); }
    some<Armor_t*>  Steel_Shield_Resist_Magic_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC7); }
    some<Armor_t*>  Steel_Shield_Resist_Shock_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50EE); }
    some<Armor_t*>  Steel_Shield_Resist_Shock_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F5); }
    some<Armor_t*>  Steel_Shield_Resist_Shock_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B50F6); }

    some<Armor_t*>  Steel_Horned_Head()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6F24); }

    some<Armor_t*>  Steel_Horned_Winterhold_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0940D5); }

    some<Armor_t*>  Steel_Hrolfdir_Shield()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x064B71); }

    some<Armor_t*>  Steel_Imperial_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6F21); }
    some<Armor_t*>  Steel_Imperial_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6F23); }

    some<Armor_t*>  Steel_Ironhand_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E1643); }

    some<Armor_t*>  Steel_Pauldron_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6F22); }

    some<Armor_t*>  Steel_Targe_Of_The_Blooded_Shield()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC5BF); }

    some<Armor_t*>  Steel_Plate_Body()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01395C); }
    some<Armor_t*>  Steel_Plate_Body_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF01); }
    some<Armor_t*>  Steel_Plate_Body_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF02); }
    some<Armor_t*>  Steel_Plate_Body_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF03); }
    some<Armor_t*>  Steel_Plate_Body_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF04); }
    some<Armor_t*>  Steel_Plate_Body_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF05); }
    some<Armor_t*>  Steel_Plate_Body_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF06); }
    some<Armor_t*>  Steel_Plate_Body_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF07); }
    some<Armor_t*>  Steel_Plate_Body_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF08); }
    some<Armor_t*>  Steel_Plate_Body_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF09); }
    some<Armor_t*>  Steel_Plate_Body_Health_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B40C); }
    some<Armor_t*>  Steel_Plate_Body_Health_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B40D); }
    some<Armor_t*>  Steel_Plate_Body_Health_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B40E); }
    some<Armor_t*>  Steel_Plate_Body_Heavy_Armor_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B446); }
    some<Armor_t*>  Steel_Plate_Body_Heavy_Armor_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B54E); }
    some<Armor_t*>  Steel_Plate_Body_Heavy_Armor_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B555); }
    some<Armor_t*>  Steel_Plate_Body_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0A); }
    some<Armor_t*>  Steel_Plate_Body_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0B); }
    some<Armor_t*>  Steel_Plate_Body_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0C); }
    some<Armor_t*>  Steel_Plate_Body_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0D); }
    some<Armor_t*>  Steel_Plate_Body_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0E); }
    some<Armor_t*>  Steel_Plate_Body_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF0F); }
    some<Armor_t*>  Steel_Plate_Feet()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01395B); }
    some<Armor_t*>  Steel_Plate_Feet_Carry_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B31F); }
    some<Armor_t*>  Steel_Plate_Feet_Carry_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3FE); }
    some<Armor_t*>  Steel_Plate_Feet_Carry_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B3FF); }
    some<Armor_t*>  Steel_Plate_Feet_Muffle()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092A8E); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Fire_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B400); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Fire_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B401); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Fire_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B402); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Frost_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B403); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Frost_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B404); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Frost_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B405); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Shock_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B406); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Shock_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B407); }
    some<Armor_t*>  Steel_Plate_Feet_Resist_Shock_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01B408); }
    some<Armor_t*>  Steel_Plate_Feet_Stamina_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9E); }
    some<Armor_t*>  Steel_Plate_Feet_Stamina_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF9F); }
    some<Armor_t*>  Steel_Plate_Feet_Stamina_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFA0); }
    some<Armor_t*>  Steel_Plate_Hands()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01395D); }
    some<Armor_t*>  Steel_Plate_Hands_Alchemy_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B699); }
    some<Armor_t*>  Steel_Plate_Hands_Alchemy_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B69A); }
    some<Armor_t*>  Steel_Plate_Hands_Alchemy_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B69B); }
    some<Armor_t*>  Steel_Plate_Hands_Marksman_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF2B); }
    some<Armor_t*>  Steel_Plate_Hands_Marksman_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF4C); }
    some<Armor_t*>  Steel_Plate_Hands_Marksman_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF62); }
    some<Armor_t*>  Steel_Plate_Hands_One_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF66); }
    some<Armor_t*>  Steel_Plate_Hands_One_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF67); }
    some<Armor_t*>  Steel_Plate_Hands_One_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF6B); }
    some<Armor_t*>  Steel_Plate_Hands_Smithing_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF73); }
    some<Armor_t*>  Steel_Plate_Hands_Smithing_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF74); }
    some<Armor_t*>  Steel_Plate_Hands_Smithing_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF75); }
    some<Armor_t*>  Steel_Plate_Hands_Two_Handed_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF76); }
    some<Armor_t*>  Steel_Plate_Hands_Two_Handed_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF77); }
    some<Armor_t*>  Steel_Plate_Hands_Two_Handed_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF78); }
    some<Armor_t*>  Steel_Plate_Head()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01395E); }
    some<Armor_t*>  Steel_Plate_Head_Alchemy_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B670); }
    some<Armor_t*>  Steel_Plate_Head_Alchemy_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B671); }
    some<Armor_t*>  Steel_Plate_Head_Alchemy_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08B672); }
    some<Armor_t*>  Steel_Plate_Head_Alteration_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF79); }
    some<Armor_t*>  Steel_Plate_Head_Alteration_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7A); }
    some<Armor_t*>  Steel_Plate_Head_Alteration_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7B); }
    some<Armor_t*>  Steel_Plate_Head_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7C); }
    some<Armor_t*>  Steel_Plate_Head_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7D); }
    some<Armor_t*>  Steel_Plate_Head_Conjuration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7E); }
    some<Armor_t*>  Steel_Plate_Head_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF7F); }
    some<Armor_t*>  Steel_Plate_Head_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF80); }
    some<Armor_t*>  Steel_Plate_Head_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF81); }
    some<Armor_t*>  Steel_Plate_Head_Illusion_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03DF85); }
    some<Armor_t*>  Steel_Plate_Head_Illusion_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04101E); }
    some<Armor_t*>  Steel_Plate_Head_Illusion_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041020); }
    some<Armor_t*>  Steel_Plate_Head_Magicka_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041021); }
    some<Armor_t*>  Steel_Plate_Head_Magicka_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041022); }
    some<Armor_t*>  Steel_Plate_Head_Magicka_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041027); }
    some<Armor_t*>  Steel_Plate_Head_Marksman_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04102C); }
    some<Armor_t*>  Steel_Plate_Head_Marksman_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041033); }
    some<Armor_t*>  Steel_Plate_Head_Marksman_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041034); }
    some<Armor_t*>  Steel_Plate_Head_Restoration_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041035); }
    some<Armor_t*>  Steel_Plate_Head_Restoration_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041036); }
    some<Armor_t*>  Steel_Plate_Head_Restoration_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x041037); }
    some<Armor_t*>  Steel_Plate_Head_Waterbreathing()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092ACA); }

    some<Armor_t*>  Steel_Plate_Katria_Body()                           { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x014C05); }

    some<Armor_t*>  Steel_Plate_Yngol_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0295F3); }

    some<Armor_t*>  Stormcloak_Officer_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08697E); }
    some<Armor_t*>  Stormcloak_Officer_Feet()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086981); }
    some<Armor_t*>  Stormcloak_Officer_Hands()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086983); }
    some<Armor_t*>  Stormcloak_Officer_Head()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086985); }

    some<Armor_t*>  Summerset_Shadows_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108540); }
    some<Armor_t*>  Summerset_Shadows_Feet()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10853F); }
    some<Armor_t*>  Summerset_Shadows_Hands()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108541); }
    some<Armor_t*>  Summerset_Shadows_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108542); }

    some<Armor_t*>  Summerset_Shadows_Linwe_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108544); }
    some<Armor_t*>  Summerset_Shadows_Linwe_Feet()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108543); }
    some<Armor_t*>  Summerset_Shadows_Linwe_Hands()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108545); }
    some<Armor_t*>  Summerset_Shadows_Linwe_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x108546); }
    
    some<Armor_t*>  Thief_Body()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3AC3); }
    some<Armor_t*>  Thief_Feet()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3AC2); }
    some<Armor_t*>  Thief_Hands()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3AC4); }
    some<Armor_t*>  Thief_Head()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3AC5); }

    some<Armor_t*>  Thief_Torturer_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EE5C0); }

    some<Armor_t*>  Thief_Torturer_Quest_Head()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x047CBE); }

    some<Armor_t*>  Thief_Blackguard_Body()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02AD33); }
    some<Armor_t*>  Thief_Blackguard_Feet()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02AD34); }
    some<Armor_t*>  Thief_Blackguard_Hands()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02AD32); }
    some<Armor_t*>  Thief_Blackguard_Head()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02AD31); }

    some<Armor_t*>  Thief_Improved_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3ACC); }
    some<Armor_t*>  Thief_Improved_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3ACB); }
    some<Armor_t*>  Thief_Improved_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3ACD); }
    some<Armor_t*>  Thief_Improved_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3ACE); }

    some<Armor_t*>  Thief_Karliah_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35E8); }
    some<Armor_t*>  Thief_Karliah_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35E7); }
    some<Armor_t*>  Thief_Karliah_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35E9); }
    some<Armor_t*>  Thief_Karliah_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35EA); }

    some<Armor_t*>  Thief_Master_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35D7); }
    some<Armor_t*>  Thief_Master_Feet()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35D6); }
    some<Armor_t*>  Thief_Master_Hands()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35D8); }
    some<Armor_t*>  Thief_Master_Head()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35D9); }

    some<Armor_t*>  Thief_Mercer_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1092B5); }
    some<Armor_t*>  Thief_Mercer_Feet()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1092B4); }
    some<Armor_t*>  Thief_Mercer_Hands()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1092B6); }

    some<Armor_t*>  Thief_Unplayable_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036584); }
    some<Armor_t*>  Thief_Unplayable_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036583); }
    some<Armor_t*>  Thief_Unplayable_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x042BE9); }
    some<Armor_t*>  Thief_Unplayable_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036585); }

    some<Armor_t*>  Thief_Variant_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35DB); }
    some<Armor_t*>  Thief_Variant_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35DA); }
    some<Armor_t*>  Thief_Variant_Hands()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35DC); }
    some<Armor_t*>  Thief_Variant_Head()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35DD); }

    some<Armor_t*>  Thief_Variant_Alternate_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E35DF); }
    
    some<Armor_t*>  Tsun_Body()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C0165); }
    some<Armor_t*>  Tsun_Feet()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C0166); }

    some<Armor_t*>  Vampire_Feet()                                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00B5DE); }
    some<Armor_t*>  Vampire_Hands()                                     { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01A51F); }

    some<Armor_t*>  Vampire_Black_Body()                                { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0142C7); }
    some<Armor_t*>  Vampire_Black_Body_Conjuration_1()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBF); }
    some<Armor_t*>  Vampire_Black_Body_Conjuration_2()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC2); }
    some<Armor_t*>  Vampire_Black_Body_Destruction_1()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CB9); }
    some<Armor_t*>  Vampire_Black_Body_Destruction_2()                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBC); }
    some<Armor_t*>  Vampire_Black_Body_Magicka_Rate_1()                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC5); }
    some<Armor_t*>  Vampire_Black_Body_Magicka_Rate_2()                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC8); }

    some<Armor_t*>  Vampire_Grey_Body()                                 { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0191F2); }
    some<Armor_t*>  Vampire_Grey_Body_Conjuration_1()                   { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC0); }
    some<Armor_t*>  Vampire_Grey_Body_Conjuration_2()                   { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC3); }
    some<Armor_t*>  Vampire_Grey_Body_Destruction_1()                   { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBA); }
    some<Armor_t*>  Vampire_Grey_Body_Destruction_2()                   { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBD); }
    some<Armor_t*>  Vampire_Grey_Body_Magicka_Rate()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC6); }

    some<Armor_t*>  Vampire_Red_Body()                                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0191F3); }
    some<Armor_t*>  Vampire_Red_Body_Conjuration_1()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC1); }
    some<Armor_t*>  Vampire_Red_Body_Conjuration_2()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC4); }
    some<Armor_t*>  Vampire_Red_Body_Destruction_1()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBB); }
    some<Armor_t*>  Vampire_Red_Body_Destruction_2()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CBE); }
    some<Armor_t*>  Vampire_Red_Body_Magicka_Rate()                     { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x015CC7); }

    some<Armor_t*>  Vampire_Royal_Body()                                { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00B5DB); }

    some<Armor_t*>  Vampire_Royal_Valerica_Body()                       { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0194C5); }

    some<Armor_t*>  Wolf_Body()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CAE15); }
    some<Armor_t*>  Wolf_Feet()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE7C); }
    some<Armor_t*>  Wolf_Hands()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE7E); }
    some<Armor_t*>  Wolf_Head()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04C3D0); }

    some<Armor_t*>  Amulet_Ancient_Nordic()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CC842); }

    some<Armor_t*>  Amulet_Ancient_Nordic_Kynes_Token()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x107E2D); }

    some<Armor_t*>  Amulet_Ancient_Nordic_Saarthal()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0233D0); }

    some<Armor_t*>  Amulet_Articulation_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x09DFF7); }
    some<Armor_t*>  Amulet_Articulation_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6904); }
    some<Armor_t*>  Amulet_Articulation_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F690D); }
    some<Armor_t*>  Amulet_Articulation_4()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F690E); }
    some<Armor_t*>  Amulet_Articulation_5()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F690F); }
    some<Armor_t*>  Amulet_Articulation_6()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6910); }
    some<Armor_t*>  Amulet_Articulation_7()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F6911); }

    some<Armor_t*>  Amulet_Articulation_Unenchanted()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FDEAF); }

    some<Armor_t*>  Amulet_Bone_Hawk()                                  { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01AA0B); }

    some<Armor_t*>  Amulet_Divine_Akatosh()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C8911); }

    some<Armor_t*>  Amulet_Divine_Arkay()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CC848); }

    some<Armor_t*>  Amulet_Divine_Arkay_Andurs()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x094E3E); }

    some<Armor_t*>  Amulet_Divine_Dibella()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C8915); }

    some<Armor_t*>  Amulet_Divine_Julianos()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C8917); }

    some<Armor_t*>  Amulet_Divine_Kynareth()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C8919); }

    some<Armor_t*>  Amulet_Divine_Mara()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C891B); }

    some<Armor_t*>  Amulet_Divine_Stendarr()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CC844); }

    some<Armor_t*>  Amulet_Divine_Talos()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CC846); }

    some<Armor_t*>  Amulet_Divine_Talos_Ogmund()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x064796); }

    some<Armor_t*>  Amulet_Divine_Zenithar()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0878BB); }

    some<Armor_t*>  Amulet_Divine_Zenithar_Shahvee()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BFA0A); }

    some<Armor_t*>  Amulet_East_Empire_Company_1()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x026735); }

    some<Armor_t*>  Amulet_East_Empire_Company_2()                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x024FA4); }

    some<Armor_t*>  Amulet_Elder_Council_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06B217); }

    some<Armor_t*>  Amulet_Elder_Council_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C8913); }

    some<Armor_t*>  Amulet_Fjotlis_Silver_Locket()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07D678); }

    some<Armor_t*>  Amulet_Gauldur()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02D773); }

    some<Armor_t*>  Amulet_Gauldur_Folgunthur()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02D74F); }

    some<Armor_t*>  Amulet_Gauldur_Geirmund()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02D753); }

    some<Armor_t*>  Amulet_Gauldur_Saarthal()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02D75A); }

    some<Armor_t*>  Amulet_Gold()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877D5); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF27); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF28); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF29); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_4()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2A); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_5()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2B); }
    some<Armor_t*>  Amulet_Gold_Heavy_Armor_6()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2C); }
    some<Armor_t*>  Amulet_Gold_One_Handed_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF10); }
    some<Armor_t*>  Amulet_Gold_One_Handed_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF11); }
    some<Armor_t*>  Amulet_Gold_One_Handed_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF12); }
    some<Armor_t*>  Amulet_Gold_One_Handed_4()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF13); }
    some<Armor_t*>  Amulet_Gold_One_Handed_5()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF14); }
    some<Armor_t*>  Amulet_Gold_One_Handed_6()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF67); }
    some<Armor_t*>  Amulet_Gold_Sneak_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3F); }
    some<Armor_t*>  Amulet_Gold_Sneak_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF40); }
    some<Armor_t*>  Amulet_Gold_Sneak_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF41); }
    some<Armor_t*>  Amulet_Gold_Sneak_4()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF42); }
    some<Armor_t*>  Amulet_Gold_Sneak_5()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF43); }
    some<Armor_t*>  Amulet_Gold_Sneak_6()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF44); }
    some<Armor_t*>  Amulet_Gold_Stamina_1()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC055); }
    some<Armor_t*>  Amulet_Gold_Stamina_2()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC056); }
    some<Armor_t*>  Amulet_Gold_Stamina_3()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC057); }
    some<Armor_t*>  Amulet_Gold_Stamina_4()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC058); }
    some<Armor_t*>  Amulet_Gold_Stamina_5()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC059); }
    some<Armor_t*>  Amulet_Gold_Stamina_6()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC05A); }

    some<Armor_t*>  Amulet_Gold_Charmed()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C72E8); }

    some<Armor_t*>  Amulet_Gold_Diamond()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877F1); }
    some<Armor_t*>  Amulet_Gold_Diamond_Resist_Poison_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC03D); }
    some<Armor_t*>  Amulet_Gold_Diamond_Resist_Poison_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E5F); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4B); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4C); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4D); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_4()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4E); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_5()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4F); }
    some<Armor_t*>  Amulet_Gold_Diamond_Speechcraft_6()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF50); }

    some<Armor_t*>  Amulet_Gold_Jeweled()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x087835); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC061); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC062); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC063); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC064); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC065); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Resist_Magic_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC066); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF21); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF22); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF23); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF24); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_5()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF25); }
    some<Armor_t*>  Amulet_Gold_Jeweled_Smithing_6()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF26); }

    some<Armor_t*>  Amulet_Gold_Jeweled_Saint_Jiub()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x018B91); }

    some<Armor_t*>  Amulet_Gold_Ruby()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877DC); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC037); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC038); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC039); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_4()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC03A); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_5()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC03B); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_6()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC03C); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_Rate_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF57); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_Rate_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF58); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_Rate_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF59); }
    some<Armor_t*>  Amulet_Gold_Ruby_Health_Rate_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF5A); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC043); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC044); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC045); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC046); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_5()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC047); }
    some<Armor_t*>  Amulet_Gold_Ruby_Resist_Fire_6()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC048); }

    some<Armor_t*>  Amulet_Heartstone()                                 { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376EF); }

    some<Armor_t*>  Amulet_Necromancer()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D2328); }

    some<Armor_t*>  Amulet_Necromancer_Enchanted()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C891D); }

    some<Armor_t*>  Amulet_Silver()                                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x09171B); }
    some<Armor_t*>  Amulet_Silver_Alchemy_1()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF45); }
    some<Armor_t*>  Amulet_Silver_Alchemy_2()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF46); }
    some<Armor_t*>  Amulet_Silver_Alchemy_3()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF47); }
    some<Armor_t*>  Amulet_Silver_Alchemy_4()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF48); }
    some<Armor_t*>  Amulet_Silver_Alchemy_5()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF49); }
    some<Armor_t*>  Amulet_Silver_Alchemy_6()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF4A); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2D); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2E); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_3()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF2F); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_4()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF30); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_5()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF31); }
    some<Armor_t*>  Amulet_Silver_Light_Armor_6()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF32); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF15); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF16); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF17); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_4()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF18); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_5()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF19); }
    some<Armor_t*>  Amulet_Silver_Two_Handed_6()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1A); }

    some<Armor_t*>  Amulet_Silver_Grosta()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06BBB5); }

    some<Armor_t*>  Amulet_Silver_Moon()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D9394); }

    some<Armor_t*>  Amulet_Silver_Reyda()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0663DA); }

    some<Armor_t*>  Amulet_Silver_Yisra()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D4FF7); }

    some<Armor_t*>  Amulet_Silver_Emerald()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x087833); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF39); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3A); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3B); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3C); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_5()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3D); }
    some<Armor_t*>  Amulet_Silver_Emerald_Lockpicking_6()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF3E); }
    some<Armor_t*>  Amulet_Silver_Emerald_Stamina_Rate_1()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF5B); }
    some<Armor_t*>  Amulet_Silver_Emerald_Stamina_Rate_2()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF5C); }
    some<Armor_t*>  Amulet_Silver_Emerald_Stamina_Rate_3()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF5D); }
    some<Armor_t*>  Amulet_Silver_Emerald_Stamina_Rate_4()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF5E); }

    some<Armor_t*>  Amulet_Silver_Jeweled()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x087834); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF33); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF34); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF35); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF36); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF37); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Pickpocket_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF38); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Disease_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E64); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Disease_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E65); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_1()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04F); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_2()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC050); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_3()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC051); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_4()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC052); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_5()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC053); }
    some<Armor_t*>  Amulet_Silver_Jeweled_Resist_Shock_6()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC054); }

    some<Armor_t*>  Amulet_Silver_Sapphire()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x087832); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1B); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1C); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1D); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1E); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_5()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF1F); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Block_6()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF20); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF51); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF52); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF53); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_4()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF54); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_5()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF55); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Magicka_6()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DF56); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_1()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC049); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_2()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04A); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_3()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04B); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_4()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04C); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_5()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04D); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Resist_Frost_6()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC04E); }
    some<Armor_t*>  Amulet_Silver_Sapphire_Waterbreathing()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC067); }

    some<Armor_t*>  Amulet_Silver_Sapphire_Bera()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02C8AD); }

    some<Armor_t*>  Amulet_Silver_Sapphire_Savos_Aren()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B33); }

    some<Armor_t*>  Amulet_Skaal()                                      { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039D4A); }

    some<Armor_t*>  Amulet_Vampire_Drain_Magicka()                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F4D7); }

    some<Armor_t*>  Amulet_Vampire_Draining_Bats()                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0068AE); }

    some<Armor_t*>  Amulet_Vampire_Draining_Grip()                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E803); }

    some<Armor_t*>  Amulet_Vampire_Gargoyle()                           { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00F4D5); }

    some<Armor_t*>  Amulet_Vampire_Power_Bats()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A7); }

    some<Armor_t*>  Amulet_Vampire_Power_Empath()                       { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A5); }

    some<Armor_t*>  Amulet_Vampire_Power_Mist_Form()                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A6); }

    some<Armor_t*>  Amulet_Vampire_Power_Supernatural_Reflexes()        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A8); }

    some<Armor_t*>  Circlet_Aetherial_Crown()                           { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00575A); }

    some<Armor_t*>  Circlet_Copper_And_Moonstone()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x016730); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_1()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00C); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_2()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00D); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_3()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00E); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_4()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00F); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_5()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC010); }
    some<Armor_t*>  Circlet_Copper_And_Moonstone_Conjuration_6()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC011); }

    some<Armor_t*>  Circlet_Copper_And_Onyx()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0166FF); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_1()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC030); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_2()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC031); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_3()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC032); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_4()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC033); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_5()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC034); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Restoration_6()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC035); }
    some<Armor_t*>  Circlet_Copper_And_Onyx_Waterbreathing()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC036); }

    some<Armor_t*>  Circlet_Copper_And_Ruby()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x016731); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_1()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC012); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_2()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC013); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_3()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC014); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_4()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC015); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_5()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC016); }
    some<Armor_t*>  Circlet_Copper_And_Ruby_Destruction_6()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC017); }

    some<Armor_t*>  Circlet_Copper_And_Sapphire()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0166FE); }

    some<Armor_t*>  Circlet_Copper_And_Sapphire_Mage()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B2E); }

    some<Armor_t*>  Circlet_Gag()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F9670); }

    some<Armor_t*>  Circlet_Gold_And_Emerald()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01672F); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02A); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02B); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02C); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02D); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_5()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02E); }
    some<Armor_t*>  Circlet_Gold_And_Emerald_Marksman_6()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC02F); }

    some<Armor_t*>  Circlet_Gold_And_Ruby()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0166FD); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC000); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC001); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC002); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_4()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC003); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_5()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC004); }
    some<Armor_t*>  Circlet_Gold_And_Ruby_Alchemy_6()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC005); }

    some<Armor_t*>  Circlet_Gold_And_Ruby_Diadem_Of_The_Savant()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F9904); }

    some<Armor_t*>  Circlet_Jade_And_Emerald()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0166D6); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC01E); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC01F); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC020); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC021); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_5()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC022); }
    some<Armor_t*>  Circlet_Jade_And_Emerald_Illusion_6()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC023); }

    some<Armor_t*>  Circlet_Jade_And_Sapphire()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01671A); }

    some<Armor_t*>  Circlet_Silver_And_Moonstone()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0166E0); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC024); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC025); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_3()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC026); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_4()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC027); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_5()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC028); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Magicka_6()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC029); }

    some<Armor_t*>  Circlet_Silver_And_Moonstone_Mage_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B2C); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Mage_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B2D); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Mage_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B2F); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Mage_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B30); }
    some<Armor_t*>  Circlet_Silver_And_Moonstone_Mage_5()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1B31); }

    some<Armor_t*>  Circlet_Silver_And_Sapphire()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x016719); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_1()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC006); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_2()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC007); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_3()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC008); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_4()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC009); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_5()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00A); }
    some<Armor_t*>  Circlet_Silver_And_Sapphire_Alteration_6()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FC00B); }

    some<Armor_t*>  Clothes_Ball_Of_Light_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x079BE4); }

    some<Armor_t*>  Clothes_Bandages_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04F006); }
    some<Armor_t*>  Clothes_Bandages_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04F000); }

    some<Armor_t*>  Clothes_Bar_Keeper_Feet()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05B6A0); }

    some<Armor_t*>  Clothes_Bar_Keeper_Bright_Body()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05B6A1); }

    some<Armor_t*>  Clothes_Bar_Keeper_Dark_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06FF38); }

    some<Armor_t*>  Clothes_Beggar_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013105); }
    some<Armor_t*>  Clothes_Beggar_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013106); }
    some<Armor_t*>  Clothes_Beggar_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x013104); }

    some<Armor_t*>  Clothes_Black_Smith_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05B69E); }

    some<Armor_t*>  Clothes_Black_Smith_Grey_Body()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06FF37); }

    some<Armor_t*>  Clothes_Black_Smith_Red_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05B69F); }

    some<Armor_t*>  Clothes_Blind_Priest_Body()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0047D7); }
    some<Armor_t*>  Clothes_Blind_Priest_Feet()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0047D9); }
    some<Armor_t*>  Clothes_Blind_Priest_Head()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x0047DA); }

    some<Armor_t*>  Clothes_Chef_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01BC82); }
    some<Armor_t*>  Clothes_Chef_Feet()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x018801); }
    some<Armor_t*>  Clothes_Chef_Head()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01BCA7); }

    some<Armor_t*>  Clothes_Child_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E80A8); }

    some<Armor_t*>  Clothes_Child_Blue_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0467C0); }

    some<Armor_t*>  Clothes_Child_Bright_Body()                         { DEFINE_FORM(Const::Mod::Hearthfires(),    Armor_t, 0x00C740); }

    some<Armor_t*>  Clothes_Child_Dark_Body()                           { DEFINE_FORM(Const::Mod::Hearthfires(),    Armor_t, 0x00C73E); }

    some<Armor_t*>  Clothes_Child_Green_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0467BF); }

    some<Armor_t*>  Clothes_Child_Red_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06D92C); }

    some<Armor_t*>  Clothes_Child_Skaal_Body()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03C819); }
    some<Armor_t*>  Clothes_Child_Skaal_Feet()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03C81A); }

    some<Armor_t*>  Clothes_Cultist_Body()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037B8A); }
    some<Armor_t*>  Clothes_Cultist_Feet()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037B8E); }
    some<Armor_t*>  Clothes_Cultist_Hands()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037B8C); }
    some<Armor_t*>  Clothes_Cultist_Head()                              { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037B88); }

    some<Armor_t*>  Clothes_Cultist_Cheap_Body()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA6); }

    some<Armor_t*>  Clothes_Dremora_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x016FFE); }
    some<Armor_t*>  Clothes_Dremora_Feet()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x016FFF); }

    some<Armor_t*>  Clothes_Dremora_Butler_Body()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376DF); }
    some<Armor_t*>  Clothes_Dremora_Butler_Feet()                       { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376DE); }

    some<Armor_t*>  Clothes_Dremora_Merchant_Body()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376DA); }
    some<Armor_t*>  Clothes_Dremora_Merchant_Feet()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376D9); }

    some<Armor_t*>  Clothes_Dunmer_Feet()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03705A); }

    some<Armor_t*>  Clothes_Dunmer_Blue_Body()                          { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03706B); }

    some<Armor_t*>  Clothes_Dunmer_Blue_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037065); }

    some<Armor_t*>  Clothes_Dunmer_Brown_Body()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03706A); }

    some<Armor_t*>  Clothes_Dunmer_Brown_Hooded_Body()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDAA); }

    some<Armor_t*>  Clothes_Dunmer_Red_Body()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03706C); }

    some<Armor_t*>  Clothes_Dunmer_Red_Hooded_Body()                    { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x037066); }

    some<Armor_t*>  Clothes_Emperor_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x015516); }

    some<Armor_t*>  Clothes_Executionee_Bright_Head()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05A9DF); }
    some<Armor_t*>  Clothes_Executionee_Dark_Head()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05A9E3); }

    some<Armor_t*>  Clothes_Executioner_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8B3); }
    some<Armor_t*>  Clothes_Executioner_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8B0); }
    some<Armor_t*>  Clothes_Executioner_Hands()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8B1); }
    some<Armor_t*>  Clothes_Executioner_Head()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8B2); }

    some<Armor_t*>  Clothes_Farm_A_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01BE1A); }
    some<Armor_t*>  Clothes_Farm_A_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01BE1B); }
    some<Armor_t*>  Clothes_Farm_A_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0330B3); }

    some<Armor_t*>  Clothes_Farm_B_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0209A5); }
    some<Armor_t*>  Clothes_Farm_B_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0209AA); }

    some<Armor_t*>  Clothes_Farm_B_Bright_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0209A6); }

    some<Armor_t*>  Clothes_Farm_B_Dark_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06C1D9); }

    some<Armor_t*>  Clothes_Farm_C_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0261BD); }
    some<Armor_t*>  Clothes_Farm_C_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0261C1); }
    some<Armor_t*>  Clothes_Farm_C_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0330BC); }

    some<Armor_t*>  Clothes_Farm_C_Bright_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0261C0); }

    some<Armor_t*>  Clothes_Farm_C_Bright_Hooded_Body()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x017695); }

    some<Armor_t*>  Clothes_Farm_C_Dark_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06C1DA); }

    some<Armor_t*>  Clothes_Farm_C_Head_Thick()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x017696); }

    some<Armor_t*>  Clothes_Farm_D_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03452F); }

    some<Armor_t*>  Clothes_Farm_D_Bright_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03452E); }

    some<Armor_t*>  Clothes_Farm_D_Dark_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06C1D8); }

    some<Armor_t*>  Clothes_Fine_A_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086993); }

    some<Armor_t*>  Clothes_Fine_A_Blue_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F8713); }

    some<Armor_t*>  Clothes_Fine_A_Green_Body()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086991); }

    some<Armor_t*>  Clothes_Fine_A_Radiant_Raiment_Body()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E9EB5); }

    some<Armor_t*>  Clothes_Fine_B_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE82); }
    some<Armor_t*>  Clothes_Fine_B_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE84); }

    some<Armor_t*>  Clothes_Fine_B_Blue_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F8715); }

    some<Armor_t*>  Clothes_Fine_B_Red_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE80); }

    some<Armor_t*>  Clothes_Fine_B_Party_Body()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E40DF); }
    some<Armor_t*>  Clothes_Fine_B_Party_Feet()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E40DE); }

    some<Armor_t*>  Clothes_Greybeard_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036A44); }
    some<Armor_t*>  Clothes_Greybeard_Feet()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036A46); }
    some<Armor_t*>  Clothes_Greybeard_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x036A45); }

    some<Armor_t*>  Clothes_Ildari_Body()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0376ED); }

    some<Armor_t*>  Clothes_Jarl_A_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB7E); }
    some<Armor_t*>  Clothes_Jarl_A_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E84C1); }

    some<Armor_t*>  Clothes_Jarl_A_Blue_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x05DB7B); }

    some<Armor_t*>  Clothes_Jarl_A_Green_Body()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E84C4); }

    some<Armor_t*>  Clothes_Jarl_A_Yellow_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E84C6); }

    some<Armor_t*>  Clothes_Jarl_B_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08698C); }
    some<Armor_t*>  Clothes_Jarl_B_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08698E); }
    some<Armor_t*>  Clothes_Jarl_B_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x086990); }

    some<Armor_t*>  Clothes_Jarl_C_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE78); }

    some<Armor_t*>  Clothes_Jarl_C_Bright_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE76); }

    some<Armor_t*>  Clothes_Jarl_C_Dark_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0EAD49); }

    some<Armor_t*>  Clothes_Jester_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE6E); }
    some<Armor_t*>  Clothes_Jester_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE70); }
    some<Armor_t*>  Clothes_Jester_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE74); }
    some<Armor_t*>  Clothes_Jester_Head()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CEE72); }

    some<Armor_t*>  Clothes_Jester_Cicero_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06492C); }
    some<Armor_t*>  Clothes_Jester_Cicero_Feet()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06492A); }
    some<Armor_t*>  Clothes_Jester_Cicero_Hands()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06492D); }
    some<Armor_t*>  Clothes_Jester_Cicero_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06492E); }

    some<Armor_t*>  Clothes_Mage_Tuner_Hands()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x092DBE); }

    some<Armor_t*>  Clothes_Mage_Tuner_Mystic_Hands()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x026C3B); }

    some<Armor_t*>  Clothes_Mage_Adept_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D6A4); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Alteration()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66D); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Conjuration()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D673); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Destruction()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D676); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Illusion()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67A); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Magicka_Rate()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67E); }
    some<Armor_t*>  Clothes_Mage_Adept_Body_Restoration()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D682); }
    some<Armor_t*>  Clothes_Mage_Adept_Head()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D6A7); }
    some<Armor_t*>  Clothes_Mage_Adept_Head_Magicka()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DD3C); }

    some<Armor_t*>  Clothes_Mage_Apprentice_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D691); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Alteration()           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66C); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Conjuration()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D672); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Destruction()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D670); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Illusion()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D679); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Magicka_Rate()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67D); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Body_Restoration()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D681); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Feet()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10E2DC); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Head()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D6A6); }
    some<Armor_t*>  Clothes_Mage_Apprentice_Head_Magicka()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DD3B); }

    some<Armor_t*>  Clothes_Mage_Archmage_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07C932); }
    some<Armor_t*>  Clothes_Mage_Archmage_Feet()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07C92E); }

    some<Armor_t*>  Clothes_Mage_Archmage_Hooded_Body()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10F570); }

    some<Armor_t*>  Clothes_Mage_Expert_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3DEA); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Alteration()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66E); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Conjuration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D674); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Destruction()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D677); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Illusion()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67B); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Magicka_Rate()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67F); }
    some<Armor_t*>  Clothes_Mage_Expert_Body_Restoration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D683); }

    some<Armor_t*>  Clothes_Mage_Master_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D6A5); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Alteration()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66F); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Conjuration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D675); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Destruction()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D678); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Illusion()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D67C); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Magicka_Rate()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D680); }
    some<Armor_t*>  Clothes_Mage_Master_Body_Restoration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D684); }
    some<Armor_t*>  Clothes_Mage_Master_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10E2CE); }

    some<Armor_t*>  Clothes_Mage_Master_Taron_Dreth_Body()              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x014C03); }

    some<Armor_t*>  Clothes_Mage_Novice_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3DE9); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Alteration()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D669); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Conjuration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66A); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Destruction()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D668); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Illusion()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D671); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Magicka_Rate()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D667); }
    some<Armor_t*>  Clothes_Mage_Novice_Body_Restoration()              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10D66B); }
    some<Armor_t*>  Clothes_Mage_Novice_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06B46C); }
    some<Armor_t*>  Clothes_Mage_Novice_Feet_Sneak_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FB979); }
    some<Armor_t*>  Clothes_Mage_Novice_Feet_Sneak_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FB97B); }
    some<Armor_t*>  Clothes_Mage_Novice_Head()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3DE8); }
    some<Armor_t*>  Clothes_Mage_Novice_Head_Magicka()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DD3A); }

    some<Armor_t*>  Clothes_Merchant_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04223D); }
    some<Armor_t*>  Clothes_Merchant_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04223B); }

    some<Armor_t*>  Clothes_Merchant_Bright_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x04223C); }

    some<Armor_t*>  Clothes_Merchant_Dark_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06FF45); }

    some<Armor_t*>  Clothes_Miner_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x080699); }

    some<Armor_t*>  Clothes_Miner_Bright_Body()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x080697); }

    some<Armor_t*>  Clothes_Miner_Dark_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06FF43); }

    some<Armor_t*>  Clothes_Miner_Sleep_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F1229); }

    some<Armor_t*>  Clothes_Monk_Body()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BACF3); }
    some<Armor_t*>  Clothes_Monk_Feet()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0BACD7); }

    some<Armor_t*>  Clothes_Monk_Hooded_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x107106); }

    some<Armor_t*>  Clothes_Monk_Prelate_Body()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01570C); }
    some<Armor_t*>  Clothes_Monk_Prelate_Feet()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01570B); }

    some<Armor_t*>  Clothes_Mourner_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0646A7); }
    some<Armor_t*>  Clothes_Mourner_Head()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0646AB); }

    some<Armor_t*>  Clothes_Mythic_Dawn_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109C11); }
    some<Armor_t*>  Clothes_Mythic_Dawn_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B1460); }
    some<Armor_t*>  Clothes_Mythic_Dawn_Hands()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B145B); }

    some<Armor_t*>  Clothes_Mythic_Dawn_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0B144D); }

    some<Armor_t*>  Clothes_Necromancer_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C36EA); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_1()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101777); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_2()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101778); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_3()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101779); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_4()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177A); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_5()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177B); }
    some<Armor_t*>  Clothes_Necromancer_Body_Alteration_6()             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177C); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177D); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B6); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_3()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B5); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_4()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B4); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_5()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B3); }
    some<Armor_t*>  Clothes_Necromancer_Body_Conjuration_6()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B2); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B1); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017B0); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_3()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017AF); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_4()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017AE); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_5()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017AD); }
    some<Armor_t*>  Clothes_Necromancer_Body_Destruction_6()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017AC); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A5); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A4); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A3); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A2); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_5()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A1); }
    some<Armor_t*>  Clothes_Necromancer_Body_Illusion_6()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x1017A0); }
    some<Armor_t*>  Clothes_Necromancer_Body_Magicka_Rate_1()           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10524F); }
    some<Armor_t*>  Clothes_Necromancer_Body_Magicka_Rate_2()           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10179F); }
    some<Armor_t*>  Clothes_Necromancer_Body_Magicka_Rate_3()           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10179E); }
    some<Armor_t*>  Clothes_Necromancer_Body_Magicka_Rate_4()           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10179D); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101783); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101782); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_3()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101781); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_4()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101780); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_5()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177F); }
    some<Armor_t*>  Clothes_Necromancer_Body_Restoration_6()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10177E); }
    some<Armor_t*>  Clothes_Necromancer_Feet()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C36E8); }

    some<Armor_t*>  Clothes_Necromancer_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10710D); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_1()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109008); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_2()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109009); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_3()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900A); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_4()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900B); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_5()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900C); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Alteration_6()      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900D); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_1()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900E); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_2()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10900F); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_3()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109010); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_4()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109011); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_5()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109012); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Conjuration_6()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109013); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_1()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109014); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_2()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109015); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_3()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109016); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_4()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109017); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_5()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109018); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Destruction_6()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109019); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_1()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109020); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_2()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109021); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_3()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109022); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_4()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109023); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_5()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109024); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Illusion_6()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109025); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Magicka_Rate_1()    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109048); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Magicka_Rate_2()    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109047); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Magicka_Rate_3()    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109046); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Magicka_Rate_4()    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109045); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_1()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10902B); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_2()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10902A); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_3()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109029); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_4()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109028); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_5()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109027); }
    some<Armor_t*>  Clothes_Necromancer_Hooded_Body_Restoration_6()     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109026); }

    some<Armor_t*>  Clothes_Nocturnal_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x088952); }
    some<Armor_t*>  Clothes_Nocturnal_Head()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x088954); }

    some<Armor_t*>  Clothes_Prisoner_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08F19A); }
    some<Armor_t*>  Clothes_Prisoner_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03CA00); }
    some<Armor_t*>  Clothes_Prisoner_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10E039); }

    some<Armor_t*>  Clothes_Prisoner_Tunic_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03C9FE); }

    some<Armor_t*>  Clothes_Prisoner_Bloody_Body()                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E9EB); }
    some<Armor_t*>  Clothes_Prisoner_Bloody_Feet()                      { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E9EA); }

    some<Armor_t*>  Clothes_Psiijic_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065B94); }
    some<Armor_t*>  Clothes_Psiijic_Feet()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065B9B); }
    some<Armor_t*>  Clothes_Psiijic_Hands()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065B9D); }
    some<Armor_t*>  Clothes_Psiijic_Head()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065B99); }

    some<Armor_t*>  Clothes_Reaper_Body()                               { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01A752); }
    some<Armor_t*>  Clothes_Reaper_Hands()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01A755); }
    some<Armor_t*>  Clothes_Reaper_Head()                               { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x01A73F); }

    some<Armor_t*>  Clothes_Redguard_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07BC19); }
    some<Armor_t*>  Clothes_Redguard_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07BC15); }
    some<Armor_t*>  Clothes_Redguard_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07BC1A); }

    some<Armor_t*>  Clothes_Redguard_Dark_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E0DD0); }
    some<Armor_t*>  Clothes_Redguard_Dark_Feet()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E0DD4); }
    some<Armor_t*>  Clothes_Redguard_Dark_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E0DD2); }

    some<Armor_t*>  Clothes_Robes_Black_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x106661); }

    some<Armor_t*>  Clothes_Robes_Black_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x107108); }

    some<Armor_t*>  Clothes_Robes_Blue_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0A199B); }

    some<Armor_t*>  Clothes_Robes_Blue_Hooded_Body()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10710A); }
    some<Armor_t*>  Clothes_Robes_Blue_Hooded_Body_Magicka_Rate()       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D1F3B); }

    some<Armor_t*>  Clothes_Robes_Brown_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFEF); }

    some<Armor_t*>  Clothes_Robes_Brown_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFE4); }

    some<Armor_t*>  Clothes_Robes_Green_Body()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFF0); }

    some<Armor_t*>  Clothes_Robes_Green_Hooded_Body()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFEC); }

    some<Armor_t*>  Clothes_Robes_Grey_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFF1); }

    some<Armor_t*>  Clothes_Robes_Grey_Hooded_Body()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFEA); }

    some<Armor_t*>  Clothes_Robes_Red_Body()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFF2); }

    some<Armor_t*>  Clothes_Robes_Red_Hooded_Body()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10CFEB); }

    some<Armor_t*>  Clothes_Sheogorath_Body()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C7CBB); }
    some<Armor_t*>  Clothes_Sheogorath_Feet()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C7CBD); }

    some<Armor_t*>  Clothes_Shrouded_Body()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8A0); }
    some<Armor_t*>  Clothes_Shrouded_Feet()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF89F); }
    some<Armor_t*>  Clothes_Shrouded_Hands()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8A9); }
    some<Armor_t*>  Clothes_Shrouded_Head()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0CF8A1); }

    some<Armor_t*>  Clothes_Skaal_Body()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03910E); }
    some<Armor_t*>  Clothes_Skaal_Feet()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039112); }
    some<Armor_t*>  Clothes_Skaal_Hands()                               { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039110); }
    some<Armor_t*>  Clothes_Skaal_Head()                                { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x039114); }

    some<Armor_t*>  Clothes_Telvanni_Body()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDA8); }
    some<Armor_t*>  Clothes_Telvanni_Feet()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x035677); }

    some<Armor_t*>  Clothes_Temple_Priest_Body()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01CDAB); }
    some<Armor_t*>  Clothes_Temple_Priest_Feet()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03B04B); }
    some<Armor_t*>  Clothes_Temple_Priest_Head()                        { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x03B04E); }

    some<Armor_t*>  Clothes_Thalmor_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065BBF); }
    some<Armor_t*>  Clothes_Thalmor_Feet()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065BAC); }
    some<Armor_t*>  Clothes_Thalmor_Hands()                             { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x065BB3); }

    some<Armor_t*>  Clothes_Thalmor_Hooded_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10C698); }

    some<Armor_t*>  Clothes_Ulfric_Body()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x062303); }
    some<Armor_t*>  Clothes_Ulfric_Feet()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x062311); }
    some<Armor_t*>  Clothes_Ulfric_Hands()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06230B); }

    some<Armor_t*>  Clothes_Vaermina_Priest_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0E739B); }

    some<Armor_t*>  Clothes_Vampire_Body()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x019ADF); }
    some<Armor_t*>  Clothes_Vampire_Feet()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x019AE1); }
    some<Armor_t*>  Clothes_Vampire_Hands()                             { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x019AE3); }
    some<Armor_t*>  Clothes_Vampire_Head()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x019ADE); }

    some<Armor_t*>  Clothes_Vampire_Serana_Head()                       { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E6A0); }

    some<Armor_t*>  Clothes_Warlock_Body()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C5D11); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101737); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101738); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101739); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_4()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173A); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_5()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173B); }
    some<Armor_t*>  Clothes_Warlock_Body_Alteration_6()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173C); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173D); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173E); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10173F); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101740); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101741); }
    some<Armor_t*>  Clothes_Warlock_Body_Conjuration_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101742); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101743); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101744); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101745); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101746); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101747); }
    some<Armor_t*>  Clothes_Warlock_Body_Destruction_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101748); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101749); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101750); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101751); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_4()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101752); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_5()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101753); }
    some<Armor_t*>  Clothes_Warlock_Body_Illusion_6()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101754); }
    some<Armor_t*>  Clothes_Warlock_Body_Magicka_Rate_1()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x105EF0); }
    some<Armor_t*>  Clothes_Warlock_Body_Magicka_Rate_2()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10175B); }
    some<Armor_t*>  Clothes_Warlock_Body_Magicka_Rate_3()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10175C); }
    some<Armor_t*>  Clothes_Warlock_Body_Magicka_Rate_4()               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10175D); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101755); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101756); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101757); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101758); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x101759); }
    some<Armor_t*>  Clothes_Warlock_Body_Restoration_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10175A); }
    some<Armor_t*>  Clothes_Warlock_Feet()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C5D12); }
    some<Armor_t*>  Clothes_Warlock_Head()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C5D10); }

    some<Armor_t*>  Clothes_Warlock_Hooded_Body()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10710C); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_1()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109049); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_2()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904A); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_3()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904B); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_4()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904C); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_5()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904D); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Alteration_6()          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904E); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_1()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10904F); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_2()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109050); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_3()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109051); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_4()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109052); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_5()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109053); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Conjuration_6()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109054); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_1()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109055); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_2()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109056); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_3()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109057); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_4()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109058); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_5()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109059); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Destruction_6()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10905A); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_1()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109089); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_2()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109088); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_3()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109087); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_4()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109086); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_5()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109085); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Illusion_6()            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109084); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Magicka_Rate_1()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109083); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Magicka_Rate_2()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109082); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Magicka_Rate_3()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109081); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Magicka_Rate_4()        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109080); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_1()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109066); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_2()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109065); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_3()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109064); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_4()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109063); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_5()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109062); }
    some<Armor_t*>  Clothes_Warlock_Hooded_Body_Restoration_6()         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x109061); }

    some<Armor_t*>  Clothes_Wedding_Dress_Body()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x088956); }
    some<Armor_t*>  Clothes_Wedding_Dress_Feet()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x088958); }
    some<Armor_t*>  Clothes_Wedding_Dress_Head()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x08895A); }

    some<Armor_t*>  Clothes_Wench_Body()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D191F); }
    some<Armor_t*>  Clothes_Wench_Feet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D1921); }

    some<Armor_t*>  Clothes_Wounded_Arivanya_Body()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x106392); }

    some<Armor_t*>  Clothes_Wounded_Susanna_Body()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x106390); }

    some<Armor_t*>  FX_Dragonborn_Aspect_1()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x02172F); }
    some<Armor_t*>  FX_Dragonborn_Aspect_2()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x021738); }
    some<Armor_t*>  FX_Dragonborn_Aspect_3()                            { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x021739); }

    some<Armor_t*>  Ring_Bone_Hawk()                                    { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x011CF5); }

    some<Armor_t*>  Ring_Gold()                                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x01CF2B); }
    some<Armor_t*>  Ring_Gold_Pickpocket_1()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2F); }
    some<Armor_t*>  Ring_Gold_Pickpocket_2()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E30); }
    some<Armor_t*>  Ring_Gold_Pickpocket_3()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E31); }
    some<Armor_t*>  Ring_Gold_Pickpocket_4()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E32); }
    some<Armor_t*>  Ring_Gold_Pickpocket_5()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E33); }
    some<Armor_t*>  Ring_Gold_Pickpocket_6()                            { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E7B); }
    some<Armor_t*>  Ring_Gold_Stamina_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF7); }
    some<Armor_t*>  Ring_Gold_Stamina_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF8); }
    some<Armor_t*>  Ring_Gold_Stamina_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEF9); }
    some<Armor_t*>  Ring_Gold_Stamina_4()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFA); }
    some<Armor_t*>  Ring_Gold_Stamina_5()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFB); }
    some<Armor_t*>  Ring_Gold_Stamina_6()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFC); }
    some<Armor_t*>  Ring_Gold_Stamina_Rate_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E55); }
    some<Armor_t*>  Ring_Gold_Stamina_Rate_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E56); }
    some<Armor_t*>  Ring_Gold_Stamina_Rate_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E57); }
    some<Armor_t*>  Ring_Gold_Stamina_Rate_4()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E58); }

    some<Armor_t*>  Ring_Gold_Bond_Of_Matrimony()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C5809); }

    some<Armor_t*>  Ring_Gold_Enchanted()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02584C); }

    some<Armor_t*>  Ring_Gold_Pure_Mixtures()                           { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x090E32); }

    some<Armor_t*>  Ring_Gold_Viola()                                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0403A9); }

    some<Armor_t*>  Ring_Gold_Wedding_Asgeir()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F5A1D); }

    some<Armor_t*>  Ring_Gold_Wedding_Vittoria()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F5A1C); }

    some<Armor_t*>  Ring_Gold_Diamond()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877C9); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_1()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFD); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_2()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFE); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_3()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCEFF); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_4()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCF00); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_5()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCF01); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_6()                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FCF02); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_Rate_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E51); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_Rate_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E52); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_Rate_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E53); }
    some<Armor_t*>  Ring_Gold_Diamond_Health_Rate_4()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E54); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E34); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E35); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E36); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_4()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E37); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_5()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E38); }
    some<Armor_t*>  Ring_Gold_Diamond_Restoration_6()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E39); }

    some<Armor_t*>  Ring_Gold_Diamond_Ahzidal_Arcana()                  { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01DB9B); }

    some<Armor_t*>  Ring_Gold_Emerald()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877CA); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E11); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E12); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E13); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_4()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E14); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_5()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E15); }
    some<Armor_t*>  Ring_Gold_Emerald_Illusion_6()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E16); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3B); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3C); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3D); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_4()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3E); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_5()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3F); }
    some<Armor_t*>  Ring_Gold_Emerald_Smithing_6()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E40); }

    some<Armor_t*>  Ring_Gold_Sapphire()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877CB); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_1()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D2); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_2()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D3); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_3()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D4); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_4()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D5); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_5()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D6); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_6()                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7D7); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_Rate_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E59); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_Rate_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E5A); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_Rate_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E5B); }
    some<Armor_t*>  Ring_Gold_Sapphire_Magicka_Rate_4()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E5C); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC8); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFC9); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFCA); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_4()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFCB); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_5()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFCC); }
    some<Armor_t*>  Ring_Gold_Sapphire_Resist_Magic_6()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x10DFCD); }

    some<Armor_t*>  Ring_Gold_Sapphire_Ahzidal_Necromancy()             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01DB9A); }

    some<Armor_t*>  Ring_Hircine()                                      { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02AC60); }

    some<Armor_t*>  Ring_Hircine_Cursed()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0F82FE); }

    some<Armor_t*>  Ring_Namira()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x02C37B); }

    some<Armor_t*>  Ring_Silver()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x03B97C); }
    some<Armor_t*>  Ring_Silver_Block_1()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF3); }
    some<Armor_t*>  Ring_Silver_Block_2()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF4); }
    some<Armor_t*>  Ring_Silver_Block_3()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF5); }
    some<Armor_t*>  Ring_Silver_Block_4()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF6); }
    some<Armor_t*>  Ring_Silver_Block_5()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF7); }
    some<Armor_t*>  Ring_Silver_Block_6()                               { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF8); }
    some<Armor_t*>  Ring_Silver_Lockpicking_1()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E17); }
    some<Armor_t*>  Ring_Silver_Lockpicking_2()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1E); }
    some<Armor_t*>  Ring_Silver_Lockpicking_3()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1F); }
    some<Armor_t*>  Ring_Silver_Lockpicking_4()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E20); }
    some<Armor_t*>  Ring_Silver_Lockpicking_5()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E21); }
    some<Armor_t*>  Ring_Silver_Lockpicking_6()                         { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E22); }

    some<Armor_t*>  Ring_Silver_Bloodlust()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0275B6); }

    some<Armor_t*>  Ring_Silver_Calcelmo()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D8482); }

    some<Armor_t*>  Ring_Silver_Madesi()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x076F12); }

    some<Armor_t*>  Ring_Silver_Muiri()                                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06B219); }

    some<Armor_t*>  Ring_Silver_Muiri_Enchanted()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x06B218); }

    some<Armor_t*>  Ring_Silver_Blood_Family()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x024CFF); }

    some<Armor_t*>  Ring_Silver_Wedding_Fjola_1()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0C0164); }

    some<Armor_t*>  Ring_Silver_Wedding_Fjola_2()                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D3BDB); }

    some<Armor_t*>  Ring_Silver_Amethyst()                              { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877A7); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF9); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFA); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFB); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFC); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFD); }
    some<Armor_t*>  Ring_Silver_Amethyst_Conjuration_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFE); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_1()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E18); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_2()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E19); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_3()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1A); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_4()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1B); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_5()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1C); }
    some<Armor_t*>  Ring_Silver_Amethyst_Light_Armor_6()                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E1D); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_1()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E29); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_2()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2A); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_3()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2B); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_4()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2C); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_5()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2D); }
    some<Armor_t*>  Ring_Silver_Amethyst_One_Handed_6()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E2E); }

    some<Armor_t*>  Ring_Silver_Amethyst_Ilas_Tei()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0D5047); }

    some<Armor_t*>  Ring_Silver_Amethyst_Instinct()                     { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0275B7); }

    some<Armor_t*>  Ring_Silver_Amethyst_Nightweavers()                 { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x068B83); }

    some<Armor_t*>  Ring_Silver_Garnet()                                { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877AB); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_1()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0FF7DE); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_2()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DEE); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_3()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DEF); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_4()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF0); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_5()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF1); }
    some<Armor_t*>  Ring_Silver_Garnet_Alteration_6()                   { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DF2); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_1()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E0B); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_2()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E0C); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_3()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E0D); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_4()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E0E); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_5()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E0F); }
    some<Armor_t*>  Ring_Silver_Garnet_Heavy_Armor_6()                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E10); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E23); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E24); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E25); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_4()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E26); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_5()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E27); }
    some<Armor_t*>  Ring_Silver_Garnet_Marksman_6()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E28); }

    some<Armor_t*>  Ring_Silver_Garnet_Moon()                           { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0275B8); }

    some<Armor_t*>  Ring_Silver_Garnet_Neloth()                         { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x01961C); }

    some<Armor_t*>  Ring_Silver_Ruby()                                  { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x0877B1); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_1()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100DFF); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_2()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E00); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_3()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E01); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_4()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E02); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_5()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E03); }
    some<Armor_t*>  Ring_Silver_Ruby_Destruction_6()                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E04); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_1()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E3A); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_2()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E41); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_3()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E42); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_4()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E43); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_5()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E44); }
    some<Armor_t*>  Ring_Silver_Ruby_Sneak_6()                          { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E45); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_1()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E4C); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_2()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E4D); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_3()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E4E); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_4()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E4F); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_5()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E50); }
    some<Armor_t*>  Ring_Silver_Ruby_Two_Handed_6()                     { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x100E84); }

    some<Armor_t*>  Ring_Silver_Ruby_Hunt()                             { DEFINE_FORM(Const::Mod::Dragonborn(),     Armor_t, 0x0275B9); }

    some<Armor_t*>  Ring_Vampire_Beast()                                { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E7FD); }

    some<Armor_t*>  Ring_Vampire_Corpse_Curse()                         { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A4); }

    some<Armor_t*>  Ring_Vampire_Draining_Claws()                       { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E7EB); }

    some<Armor_t*>  Ring_Vampire_Erudite()                              { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00E7FE); }

    some<Armor_t*>  Ring_Vampire_Gargoyle()                             { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A3); }

    some<Armor_t*>  Ring_Vampire_Reanimate_Corpse()                     { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A1); }

    some<Armor_t*>  Ring_Vampire_Vampiric_Grip()                        { DEFINE_FORM(Const::Mod::Dawnguard(),      Armor_t, 0x00A2A2); }

    some<Armor_t*>  Skin_Afflicted()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x097A43); }

    some<Armor_t*>  Skin_Astrid()                                       { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x07EAF1); }

    some<Armor_t*>  Skin_Mannequin()                                    { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x107611); }

    some<Armor_t*>  Skin_Naked()                                        { DEFINE_FORM(Const::Mod::Skyrim(),         Armor_t, 0x000D64); }

}}}

namespace doticu_skylib { namespace Const { namespace Armors {

    #define DEFINE_CREATE(_FUNCTION_NAME, ...)  \
    {                                           \
        Vector_t<some<Armor_t*>> results;       \
        _FUNCTION_NAME(results, __VA_ARGS__);   \
        return results;                         \
    }

    Vector_t<some<Armor_t*>>    Bonemold_Body_Enchanted()   { DEFINE_CREATE(Bonemold_Body_Enchanted); }
    Vector_t<some<Armor_t*>>    Bonemold_Feet_Enchanted()   { DEFINE_CREATE(Bonemold_Feet_Enchanted); }
    Vector_t<some<Armor_t*>>    Bonemold_Hands_Enchanted()  { DEFINE_CREATE(Bonemold_Hands_Enchanted); }
    Vector_t<some<Armor_t*>>    Bonemold_Head_Enchanted()   { DEFINE_CREATE(Bonemold_Head_Enchanted); }
    Vector_t<some<Armor_t*>>    Bonemold_Shield_Enchanted() { DEFINE_CREATE(Bonemold_Shield_Enchanted); }

    void Bonemold_Body_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Body_Health_1());
        results.push_back(Armor::Bonemold_Body_Health_2());
        results.push_back(Armor::Bonemold_Body_Health_3());
        results.push_back(Armor::Bonemold_Body_Light_Armor_1());
        results.push_back(Armor::Bonemold_Body_Light_Armor_2());
        results.push_back(Armor::Bonemold_Body_Light_Armor_3());
    }

    void Bonemold_Feet_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Feet_Carry_1());
        results.push_back(Armor::Bonemold_Feet_Carry_2());
        results.push_back(Armor::Bonemold_Feet_Carry_3());
        results.push_back(Armor::Bonemold_Feet_Resist_Fire_1());
        results.push_back(Armor::Bonemold_Feet_Resist_Fire_2());
        results.push_back(Armor::Bonemold_Feet_Resist_Fire_3());
        results.push_back(Armor::Bonemold_Feet_Resist_Frost_1());
        results.push_back(Armor::Bonemold_Feet_Resist_Frost_2());
        results.push_back(Armor::Bonemold_Feet_Resist_Frost_3());
        results.push_back(Armor::Bonemold_Feet_Resist_Shock_1());
        results.push_back(Armor::Bonemold_Feet_Resist_Shock_2());
        results.push_back(Armor::Bonemold_Feet_Resist_Shock_3());
        results.push_back(Armor::Bonemold_Feet_Sneak_1());
        results.push_back(Armor::Bonemold_Feet_Sneak_2());
        results.push_back(Armor::Bonemold_Feet_Sneak_3());
    }

    void Bonemold_Hands_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Hands_Alchemy_1());
        results.push_back(Armor::Bonemold_Hands_Alchemy_2());
        results.push_back(Armor::Bonemold_Hands_Alchemy_3());
        results.push_back(Armor::Bonemold_Hands_Alteration_1());
        results.push_back(Armor::Bonemold_Hands_Alteration_2());
        results.push_back(Armor::Bonemold_Hands_Alteration_3());
        results.push_back(Armor::Bonemold_Hands_Conjuration_1());
        results.push_back(Armor::Bonemold_Hands_Conjuration_2());
        results.push_back(Armor::Bonemold_Hands_Conjuration_3());
        results.push_back(Armor::Bonemold_Hands_Destruction_1());
        results.push_back(Armor::Bonemold_Hands_Destruction_2());
        results.push_back(Armor::Bonemold_Hands_Destruction_3());
        results.push_back(Armor::Bonemold_Hands_Lockpicking_1());
        results.push_back(Armor::Bonemold_Hands_Lockpicking_2());
        results.push_back(Armor::Bonemold_Hands_Lockpicking_3());
        results.push_back(Armor::Bonemold_Hands_Marksman_1());
        results.push_back(Armor::Bonemold_Hands_Marksman_2());
        results.push_back(Armor::Bonemold_Hands_Marksman_3());
        results.push_back(Armor::Bonemold_Hands_One_Handed_1());
        results.push_back(Armor::Bonemold_Hands_One_Handed_2());
        results.push_back(Armor::Bonemold_Hands_One_Handed_3());
        results.push_back(Armor::Bonemold_Hands_Pickpocket_1());
        results.push_back(Armor::Bonemold_Hands_Pickpocket_2());
        results.push_back(Armor::Bonemold_Hands_Pickpocket_3());
        results.push_back(Armor::Bonemold_Hands_Smithing_1());
        results.push_back(Armor::Bonemold_Hands_Smithing_2());
        results.push_back(Armor::Bonemold_Hands_Smithing_3());
        results.push_back(Armor::Bonemold_Hands_Two_Handed_1());
        results.push_back(Armor::Bonemold_Hands_Two_Handed_2());
        results.push_back(Armor::Bonemold_Hands_Two_Handed_3());
    }

    void Bonemold_Head_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Head_Alchemy_1());
        results.push_back(Armor::Bonemold_Head_Alchemy_2());
        results.push_back(Armor::Bonemold_Head_Alchemy_3());
        results.push_back(Armor::Bonemold_Head_Alteration_1());
        results.push_back(Armor::Bonemold_Head_Alteration_2());
        results.push_back(Armor::Bonemold_Head_Alteration_3());
        results.push_back(Armor::Bonemold_Head_Conjuration_1());
        results.push_back(Armor::Bonemold_Head_Conjuration_2());
        results.push_back(Armor::Bonemold_Head_Conjuration_3());
        results.push_back(Armor::Bonemold_Head_Destruction_1());
        results.push_back(Armor::Bonemold_Head_Destruction_2());
        results.push_back(Armor::Bonemold_Head_Destruction_3());
        results.push_back(Armor::Bonemold_Head_Illusion_1());
        results.push_back(Armor::Bonemold_Head_Illusion_2());
        results.push_back(Armor::Bonemold_Head_Illusion_3());
        results.push_back(Armor::Bonemold_Head_Magicka_1());
        results.push_back(Armor::Bonemold_Head_Magicka_2());
        results.push_back(Armor::Bonemold_Head_Magicka_3());
    }

    void Bonemold_Shield_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Shield_Block_1());
        results.push_back(Armor::Bonemold_Shield_Block_2());
        results.push_back(Armor::Bonemold_Shield_Block_3());
        results.push_back(Armor::Bonemold_Shield_Resist_Fire_1());
        results.push_back(Armor::Bonemold_Shield_Resist_Fire_2());
        results.push_back(Armor::Bonemold_Shield_Resist_Fire_3());
        results.push_back(Armor::Bonemold_Shield_Resist_Frost_1());
        results.push_back(Armor::Bonemold_Shield_Resist_Frost_2());
        results.push_back(Armor::Bonemold_Shield_Resist_Frost_3());
        results.push_back(Armor::Bonemold_Shield_Resist_Magic_1());
        results.push_back(Armor::Bonemold_Shield_Resist_Magic_2());
        results.push_back(Armor::Bonemold_Shield_Resist_Magic_3());
        results.push_back(Armor::Bonemold_Shield_Resist_Shock_1());
        results.push_back(Armor::Bonemold_Shield_Resist_Shock_2());
        results.push_back(Armor::Bonemold_Shield_Resist_Shock_3());
    }

    Vector_t<some<Armor_t*>>    Chitin_Heavy_Body_Enchanted()   { DEFINE_CREATE(Chitin_Heavy_Body_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Heavy_Feet_Enchanted()   { DEFINE_CREATE(Chitin_Heavy_Feet_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Heavy_Hands_Enchanted()  { DEFINE_CREATE(Chitin_Heavy_Hands_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Heavy_Head_Enchanted()   { DEFINE_CREATE(Chitin_Heavy_Head_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Light_Body_Enchanted()   { DEFINE_CREATE(Chitin_Light_Body_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Light_Feet_Enchanted()   { DEFINE_CREATE(Chitin_Light_Feet_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Light_Hands_Enchanted()  { DEFINE_CREATE(Chitin_Light_Hands_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Light_Head_Enchanted()   { DEFINE_CREATE(Chitin_Light_Head_Enchanted); }
    Vector_t<some<Armor_t*>>    Chitin_Light_Shield_Enchanted() { DEFINE_CREATE(Chitin_Light_Shield_Enchanted); }

    void Chitin_Heavy_Body_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Heavy_Body_Alteration_1());
        results.push_back(Armor::Chitin_Heavy_Body_Alteration_2());
        results.push_back(Armor::Chitin_Heavy_Body_Alteration_3());
        results.push_back(Armor::Chitin_Heavy_Body_Conjuration_1());
        results.push_back(Armor::Chitin_Heavy_Body_Conjuration_2());
        results.push_back(Armor::Chitin_Heavy_Body_Conjuration_3());
        results.push_back(Armor::Chitin_Heavy_Body_Destruction_1());
        results.push_back(Armor::Chitin_Heavy_Body_Destruction_2());
        results.push_back(Armor::Chitin_Heavy_Body_Destruction_3());
        results.push_back(Armor::Chitin_Heavy_Body_Health_1());
        results.push_back(Armor::Chitin_Heavy_Body_Health_2());
        results.push_back(Armor::Chitin_Heavy_Body_Health_3());
        results.push_back(Armor::Chitin_Heavy_Body_Heavy_Armor_1());
        results.push_back(Armor::Chitin_Heavy_Body_Heavy_Armor_2());
        results.push_back(Armor::Chitin_Heavy_Body_Heavy_Armor_3());
        results.push_back(Armor::Chitin_Heavy_Body_Illusion_1());
        results.push_back(Armor::Chitin_Heavy_Body_Illusion_2());
        results.push_back(Armor::Chitin_Heavy_Body_Illusion_3());
        results.push_back(Armor::Chitin_Heavy_Body_Restoration_1());
        results.push_back(Armor::Chitin_Heavy_Body_Restoration_2());
        results.push_back(Armor::Chitin_Heavy_Body_Restoration_3());
    }

    void Chitin_Heavy_Feet_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Heavy_Feet_Carry_1());
        results.push_back(Armor::Chitin_Heavy_Feet_Carry_2());
        results.push_back(Armor::Chitin_Heavy_Feet_Carry_3());
        results.push_back(Armor::Chitin_Heavy_Feet_Muffle());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Fire_1());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Fire_2());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Fire_3());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Frost_1());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Frost_2());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Frost_3());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Shock_1());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Shock_2());
        results.push_back(Armor::Chitin_Heavy_Feet_Resist_Shock_3());
        results.push_back(Armor::Chitin_Heavy_Feet_Stamina_1());
        results.push_back(Armor::Chitin_Heavy_Feet_Stamina_2());
        results.push_back(Armor::Chitin_Heavy_Feet_Stamina_3());
    }

    void Chitin_Heavy_Hands_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Heavy_Hands_Alchemy_1());
        results.push_back(Armor::Chitin_Heavy_Hands_Alchemy_2());
        results.push_back(Armor::Chitin_Heavy_Hands_Alchemy_3());
        results.push_back(Armor::Chitin_Heavy_Hands_Marksman_1());
        results.push_back(Armor::Chitin_Heavy_Hands_Marksman_2());
        results.push_back(Armor::Chitin_Heavy_Hands_Marksman_3());
        results.push_back(Armor::Chitin_Heavy_Hands_One_Handed_1());
        results.push_back(Armor::Chitin_Heavy_Hands_One_Handed_2());
        results.push_back(Armor::Chitin_Heavy_Hands_One_Handed_3());
        results.push_back(Armor::Chitin_Heavy_Hands_Smithing_1());
        results.push_back(Armor::Chitin_Heavy_Hands_Smithing_2());
        results.push_back(Armor::Chitin_Heavy_Hands_Smithing_3());
        results.push_back(Armor::Chitin_Heavy_Hands_Two_Handed_1());
        results.push_back(Armor::Chitin_Heavy_Hands_Two_Handed_2());
        results.push_back(Armor::Chitin_Heavy_Hands_Two_Handed_3());
    }

    void Chitin_Heavy_Head_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Heavy_Head_Alchemy_1());
        results.push_back(Armor::Chitin_Heavy_Head_Alchemy_2());
        results.push_back(Armor::Chitin_Heavy_Head_Alchemy_3());
        results.push_back(Armor::Chitin_Heavy_Head_Alteration_1());
        results.push_back(Armor::Chitin_Heavy_Head_Alteration_2());
        results.push_back(Armor::Chitin_Heavy_Head_Alteration_3());
        results.push_back(Armor::Chitin_Heavy_Head_Conjuration_1());
        results.push_back(Armor::Chitin_Heavy_Head_Conjuration_2());
        results.push_back(Armor::Chitin_Heavy_Head_Conjuration_3());
        results.push_back(Armor::Chitin_Heavy_Head_Destruction_1());
        results.push_back(Armor::Chitin_Heavy_Head_Destruction_2());
        results.push_back(Armor::Chitin_Heavy_Head_Destruction_3());
        results.push_back(Armor::Chitin_Heavy_Head_Illusion_1());
        results.push_back(Armor::Chitin_Heavy_Head_Illusion_2());
        results.push_back(Armor::Chitin_Heavy_Head_Illusion_3());
        results.push_back(Armor::Chitin_Heavy_Head_Magicka_1());
        results.push_back(Armor::Chitin_Heavy_Head_Magicka_2());
        results.push_back(Armor::Chitin_Heavy_Head_Magicka_3());
        results.push_back(Armor::Chitin_Heavy_Head_Marksman_1());
        results.push_back(Armor::Chitin_Heavy_Head_Marksman_2());
        results.push_back(Armor::Chitin_Heavy_Head_Marksman_3());
        results.push_back(Armor::Chitin_Heavy_Head_Restoration_1());
        results.push_back(Armor::Chitin_Heavy_Head_Restoration_2());
        results.push_back(Armor::Chitin_Heavy_Head_Restoration_3());
        results.push_back(Armor::Chitin_Heavy_Head_Waterbreathing());
    }

    void Chitin_Light_Body_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Body_Alteration_1());
        results.push_back(Armor::Chitin_Light_Body_Alteration_2());
        results.push_back(Armor::Chitin_Light_Body_Alteration_3());
        results.push_back(Armor::Chitin_Light_Body_Conjuration_1());
        results.push_back(Armor::Chitin_Light_Body_Conjuration_2());
        results.push_back(Armor::Chitin_Light_Body_Conjuration_3());
        results.push_back(Armor::Chitin_Light_Body_Destruction_1());
        results.push_back(Armor::Chitin_Light_Body_Destruction_2());
        results.push_back(Armor::Chitin_Light_Body_Destruction_3());
        results.push_back(Armor::Chitin_Light_Body_Health_1());
        results.push_back(Armor::Chitin_Light_Body_Health_2());
        results.push_back(Armor::Chitin_Light_Body_Health_3());
        results.push_back(Armor::Chitin_Light_Body_Light_Armor_1());
        results.push_back(Armor::Chitin_Light_Body_Light_Armor_2());
        results.push_back(Armor::Chitin_Light_Body_Light_Armor_3());
        results.push_back(Armor::Chitin_Light_Body_Restoration_1());
        results.push_back(Armor::Chitin_Light_Body_Restoration_2());
        results.push_back(Armor::Chitin_Light_Body_Restoration_3());
    }

    void Chitin_Light_Feet_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Feet_Carry_1());
        results.push_back(Armor::Chitin_Light_Feet_Carry_2());
        results.push_back(Armor::Chitin_Light_Feet_Carry_3());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Fire_1());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Fire_2());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Fire_3());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Frost_1());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Frost_2());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Frost_3());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Shock_1());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Shock_2());
        results.push_back(Armor::Chitin_Light_Feet_Resist_Shock_3());
        results.push_back(Armor::Chitin_Light_Feet_Sneak_1());
        results.push_back(Armor::Chitin_Light_Feet_Sneak_2());
        results.push_back(Armor::Chitin_Light_Feet_Sneak_3());
        results.push_back(Armor::Chitin_Light_Feet_Stamina_1());
        results.push_back(Armor::Chitin_Light_Feet_Stamina_2());
        results.push_back(Armor::Chitin_Light_Feet_Stamina_3());
    }

    void Chitin_Light_Hands_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Hands_Alchemy_1());
        results.push_back(Armor::Chitin_Light_Hands_Alchemy_2());
        results.push_back(Armor::Chitin_Light_Hands_Alchemy_3());
        results.push_back(Armor::Chitin_Light_Hands_Lockpicking_1());
        results.push_back(Armor::Chitin_Light_Hands_Lockpicking_2());
        results.push_back(Armor::Chitin_Light_Hands_Lockpicking_3());
        results.push_back(Armor::Chitin_Light_Hands_Marksman_1());
        results.push_back(Armor::Chitin_Light_Hands_Marksman_2());
        results.push_back(Armor::Chitin_Light_Hands_Marksman_3());
        results.push_back(Armor::Chitin_Light_Hands_One_Handed_1());
        results.push_back(Armor::Chitin_Light_Hands_One_Handed_2());
        results.push_back(Armor::Chitin_Light_Hands_One_Handed_3());
        results.push_back(Armor::Chitin_Light_Hands_Pickpocket_1());
        results.push_back(Armor::Chitin_Light_Hands_Pickpocket_2());
        results.push_back(Armor::Chitin_Light_Hands_Pickpocket_3());
        results.push_back(Armor::Chitin_Light_Hands_Smithing_1());
        results.push_back(Armor::Chitin_Light_Hands_Smithing_2());
        results.push_back(Armor::Chitin_Light_Hands_Smithing_3());
        results.push_back(Armor::Chitin_Light_Hands_Two_Handed_1());
        results.push_back(Armor::Chitin_Light_Hands_Two_Handed_2());
        results.push_back(Armor::Chitin_Light_Hands_Two_Handed_3());
    }

    void Chitin_Light_Head_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Head_Alchemy_1());
        results.push_back(Armor::Chitin_Light_Head_Alchemy_2());
        results.push_back(Armor::Chitin_Light_Head_Alchemy_3());
        results.push_back(Armor::Chitin_Light_Head_Alteration_1());
        results.push_back(Armor::Chitin_Light_Head_Alteration_2());
        results.push_back(Armor::Chitin_Light_Head_Alteration_3());
        results.push_back(Armor::Chitin_Light_Head_Conjuration_1());
        results.push_back(Armor::Chitin_Light_Head_Conjuration_2());
        results.push_back(Armor::Chitin_Light_Head_Conjuration_3());
        results.push_back(Armor::Chitin_Light_Head_Destruction_1());
        results.push_back(Armor::Chitin_Light_Head_Destruction_2());
        results.push_back(Armor::Chitin_Light_Head_Destruction_3());
        results.push_back(Armor::Chitin_Light_Head_Illusion_1());
        results.push_back(Armor::Chitin_Light_Head_Illusion_2());
        results.push_back(Armor::Chitin_Light_Head_Illusion_3());
        results.push_back(Armor::Chitin_Light_Head_Magicka_1());
        results.push_back(Armor::Chitin_Light_Head_Magicka_2());
        results.push_back(Armor::Chitin_Light_Head_Magicka_3());
        results.push_back(Armor::Chitin_Light_Head_Marksman_1());
        results.push_back(Armor::Chitin_Light_Head_Marksman_2());
        results.push_back(Armor::Chitin_Light_Head_Marksman_3());
        results.push_back(Armor::Chitin_Light_Head_Restoration_1());
        results.push_back(Armor::Chitin_Light_Head_Restoration_2());
        results.push_back(Armor::Chitin_Light_Head_Restoration_3());
    }

    void Chitin_Light_Shield_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Shield_Block_1());
        results.push_back(Armor::Chitin_Light_Shield_Block_2());
        results.push_back(Armor::Chitin_Light_Shield_Block_3());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Fire_1());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Fire_2());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Fire_3());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Frost_1());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Frost_2());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Frost_3());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Magic_1());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Magic_2());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Magic_3());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Shock_1());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Shock_2());
        results.push_back(Armor::Chitin_Light_Shield_Resist_Shock_3());
    }

    Vector_t<some<Armor_t*>>    Daedric_Body_Enchanted()    { DEFINE_CREATE(Daedric_Body_Enchanted); }
    Vector_t<some<Armor_t*>>    Daedric_Feet_Enchanted()    { DEFINE_CREATE(Daedric_Feet_Enchanted); }
    Vector_t<some<Armor_t*>>    Daedric_Hands_Enchanted()   { DEFINE_CREATE(Daedric_Hands_Enchanted); }
    Vector_t<some<Armor_t*>>    Daedric_Head_Enchanted()    { DEFINE_CREATE(Daedric_Head_Enchanted); }
    Vector_t<some<Armor_t*>>    Daedric_Shield_Enchanted()  { DEFINE_CREATE(Daedric_Shield_Enchanted); }

    void Daedric_Body_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Body_Alteration_1());
        results.push_back(Armor::Daedric_Body_Alteration_2());
        results.push_back(Armor::Daedric_Body_Alteration_3());
        results.push_back(Armor::Daedric_Body_Conjuration_1());
        results.push_back(Armor::Daedric_Body_Conjuration_2());
        results.push_back(Armor::Daedric_Body_Conjuration_3());
        results.push_back(Armor::Daedric_Body_Destruction_1());
        results.push_back(Armor::Daedric_Body_Destruction_2());
        results.push_back(Armor::Daedric_Body_Destruction_3());
        results.push_back(Armor::Daedric_Body_Health_1());
        results.push_back(Armor::Daedric_Body_Health_2());
        results.push_back(Armor::Daedric_Body_Health_3());
        results.push_back(Armor::Daedric_Body_Health_Rate_1());
        results.push_back(Armor::Daedric_Body_Health_Rate_2());
        results.push_back(Armor::Daedric_Body_Health_Rate_3());
        results.push_back(Armor::Daedric_Body_Heavy_Armor_1());
        results.push_back(Armor::Daedric_Body_Heavy_Armor_2());
        results.push_back(Armor::Daedric_Body_Heavy_Armor_3());
        results.push_back(Armor::Daedric_Body_Illusion_1());
        results.push_back(Armor::Daedric_Body_Illusion_2());
        results.push_back(Armor::Daedric_Body_Illusion_3());
        results.push_back(Armor::Daedric_Body_Restoration_1());
        results.push_back(Armor::Daedric_Body_Restoration_2());
        results.push_back(Armor::Daedric_Body_Restoration_3());
        results.push_back(Armor::Daedric_Body_Stamina_Rate_1());
        results.push_back(Armor::Daedric_Body_Stamina_Rate_2());
        results.push_back(Armor::Daedric_Body_Stamina_Rate_3());
    }

    void Daedric_Feet_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Feet_Carry_1());
        results.push_back(Armor::Daedric_Feet_Carry_2());
        results.push_back(Armor::Daedric_Feet_Carry_3());
        results.push_back(Armor::Daedric_Feet_Muffle());
        results.push_back(Armor::Daedric_Feet_Resist_Fire_1());
        results.push_back(Armor::Daedric_Feet_Resist_Fire_2());
        results.push_back(Armor::Daedric_Feet_Resist_Fire_3());
        results.push_back(Armor::Daedric_Feet_Resist_Frost_1());
        results.push_back(Armor::Daedric_Feet_Resist_Frost_2());
        results.push_back(Armor::Daedric_Feet_Resist_Frost_3());
        results.push_back(Armor::Daedric_Feet_Resist_Shock_1());
        results.push_back(Armor::Daedric_Feet_Resist_Shock_2());
        results.push_back(Armor::Daedric_Feet_Resist_Shock_3());
        results.push_back(Armor::Daedric_Feet_Stamina_1());
        results.push_back(Armor::Daedric_Feet_Stamina_2());
        results.push_back(Armor::Daedric_Feet_Stamina_3());
    }

    void Daedric_Hands_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Hands_Alchemy_1());
        results.push_back(Armor::Daedric_Hands_Alchemy_2());
        results.push_back(Armor::Daedric_Hands_Alchemy_3());
        results.push_back(Armor::Daedric_Hands_Marksman_1());
        results.push_back(Armor::Daedric_Hands_Marksman_2());
        results.push_back(Armor::Daedric_Hands_Marksman_3());
        results.push_back(Armor::Daedric_Hands_One_Handed_1());
        results.push_back(Armor::Daedric_Hands_One_Handed_2());
        results.push_back(Armor::Daedric_Hands_One_Handed_3());
        results.push_back(Armor::Daedric_Hands_Smithing_1());
        results.push_back(Armor::Daedric_Hands_Smithing_2());
        results.push_back(Armor::Daedric_Hands_Smithing_3());
        results.push_back(Armor::Daedric_Hands_Two_Handed_1());
        results.push_back(Armor::Daedric_Hands_Two_Handed_2());
        results.push_back(Armor::Daedric_Hands_Two_Handed_3());
    }

    void Daedric_Head_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Head_Alchemy_1());
        results.push_back(Armor::Daedric_Head_Alchemy_2());
        results.push_back(Armor::Daedric_Head_Alchemy_3());
        results.push_back(Armor::Daedric_Head_Alteration_1());
        results.push_back(Armor::Daedric_Head_Alteration_2());
        results.push_back(Armor::Daedric_Head_Alteration_3());
        results.push_back(Armor::Daedric_Head_Conjuration_1());
        results.push_back(Armor::Daedric_Head_Conjuration_2());
        results.push_back(Armor::Daedric_Head_Conjuration_3());
        results.push_back(Armor::Daedric_Head_Destruction_1());
        results.push_back(Armor::Daedric_Head_Destruction_2());
        results.push_back(Armor::Daedric_Head_Destruction_3());
        results.push_back(Armor::Daedric_Head_Illusion_1());
        results.push_back(Armor::Daedric_Head_Illusion_2());
        results.push_back(Armor::Daedric_Head_Illusion_3());
        results.push_back(Armor::Daedric_Head_Magicka_1());
        results.push_back(Armor::Daedric_Head_Magicka_2());
        results.push_back(Armor::Daedric_Head_Magicka_3());
        results.push_back(Armor::Daedric_Head_Magicka_Rate_1());
        results.push_back(Armor::Daedric_Head_Magicka_Rate_2());
        results.push_back(Armor::Daedric_Head_Magicka_Rate_3());
        results.push_back(Armor::Daedric_Head_Marksman_1());
        results.push_back(Armor::Daedric_Head_Marksman_2());
        results.push_back(Armor::Daedric_Head_Marksman_3());
        results.push_back(Armor::Daedric_Head_Restoration_1());
        results.push_back(Armor::Daedric_Head_Restoration_2());
        results.push_back(Armor::Daedric_Head_Restoration_3());
        results.push_back(Armor::Daedric_Head_Waterbreathing());
    }

    void Daedric_Shield_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Shield_Block_1());
        results.push_back(Armor::Daedric_Shield_Block_2());
        results.push_back(Armor::Daedric_Shield_Block_3());
        results.push_back(Armor::Daedric_Shield_Resist_Fire_1());
        results.push_back(Armor::Daedric_Shield_Resist_Fire_2());
        results.push_back(Armor::Daedric_Shield_Resist_Fire_3());
        results.push_back(Armor::Daedric_Shield_Resist_Frost_1());
        results.push_back(Armor::Daedric_Shield_Resist_Frost_2());
        results.push_back(Armor::Daedric_Shield_Resist_Frost_3());
        results.push_back(Armor::Daedric_Shield_Resist_Magic_1());
        results.push_back(Armor::Daedric_Shield_Resist_Magic_2());
        results.push_back(Armor::Daedric_Shield_Resist_Magic_3());
        results.push_back(Armor::Daedric_Shield_Resist_Shock_1());
        results.push_back(Armor::Daedric_Shield_Resist_Shock_2());
        results.push_back(Armor::Daedric_Shield_Resist_Shock_3());
    }

    Vector_t<some<Armor_t*>>    Dragonplate_Body_Enchanted()    { DEFINE_CREATE(Dragonplate_Body_Enchanted); }
    Vector_t<some<Armor_t*>>    Dragonplate_Feet_Enchanted()    { DEFINE_CREATE(Dragonplate_Feet_Enchanted); }
    Vector_t<some<Armor_t*>>    Dragonplate_Hands_Enchanted()   { DEFINE_CREATE(Dragonplate_Hands_Enchanted); }
    Vector_t<some<Armor_t*>>    Dragonplate_Head_Enchanted()    { DEFINE_CREATE(Dragonplate_Head_Enchanted); }
    Vector_t<some<Armor_t*>>    Dragonplate_Shield_Enchanted()  { DEFINE_CREATE(Dragonplate_Shield_Enchanted); }

    void Dragonplate_Body_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Body_Alteration_1());
        results.push_back(Armor::Dragonplate_Body_Alteration_2());
        results.push_back(Armor::Dragonplate_Body_Alteration_3());
        results.push_back(Armor::Dragonplate_Body_Conjuration_1());
        results.push_back(Armor::Dragonplate_Body_Conjuration_2());
        results.push_back(Armor::Dragonplate_Body_Conjuration_3());
        results.push_back(Armor::Dragonplate_Body_Destruction_1());
        results.push_back(Armor::Dragonplate_Body_Destruction_2());
        results.push_back(Armor::Dragonplate_Body_Destruction_3());
        results.push_back(Armor::Dragonplate_Body_Health_1());
        results.push_back(Armor::Dragonplate_Body_Health_2());
        results.push_back(Armor::Dragonplate_Body_Health_3());
        results.push_back(Armor::Dragonplate_Body_Health_Rate_1());
        results.push_back(Armor::Dragonplate_Body_Health_Rate_2());
        results.push_back(Armor::Dragonplate_Body_Health_Rate_3());
        results.push_back(Armor::Dragonplate_Body_Heavy_Armor_1());
        results.push_back(Armor::Dragonplate_Body_Heavy_Armor_2());
        results.push_back(Armor::Dragonplate_Body_Heavy_Armor_3());
        results.push_back(Armor::Dragonplate_Body_Illusion_1());
        results.push_back(Armor::Dragonplate_Body_Illusion_2());
        results.push_back(Armor::Dragonplate_Body_Illusion_3());
        results.push_back(Armor::Dragonplate_Body_Restoration_1());
        results.push_back(Armor::Dragonplate_Body_Restoration_2());
        results.push_back(Armor::Dragonplate_Body_Restoration_3());
        results.push_back(Armor::Dragonplate_Body_Stamina_Rate_1());
        results.push_back(Armor::Dragonplate_Body_Stamina_Rate_2());
        results.push_back(Armor::Dragonplate_Body_Stamina_Rate_3());
    }

    void Dragonplate_Feet_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Feet_Carry_1());
        results.push_back(Armor::Dragonplate_Feet_Carry_2());
        results.push_back(Armor::Dragonplate_Feet_Carry_3());
        results.push_back(Armor::Dragonplate_Feet_Muffle());
        results.push_back(Armor::Dragonplate_Feet_Resist_Fire_1());
        results.push_back(Armor::Dragonplate_Feet_Resist_Fire_2());
        results.push_back(Armor::Dragonplate_Feet_Resist_Fire_3());
        results.push_back(Armor::Dragonplate_Feet_Resist_Frost_1());
        results.push_back(Armor::Dragonplate_Feet_Resist_Frost_2());
        results.push_back(Armor::Dragonplate_Feet_Resist_Frost_3());
        results.push_back(Armor::Dragonplate_Feet_Resist_Shock_1());
        results.push_back(Armor::Dragonplate_Feet_Resist_Shock_2());
        results.push_back(Armor::Dragonplate_Feet_Resist_Shock_3());
        results.push_back(Armor::Dragonplate_Feet_Stamina_1());
        results.push_back(Armor::Dragonplate_Feet_Stamina_2());
        results.push_back(Armor::Dragonplate_Feet_Stamina_3());
    }

    void Dragonplate_Hands_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Hands_Alchemy_1());
        results.push_back(Armor::Dragonplate_Hands_Alchemy_2());
        results.push_back(Armor::Dragonplate_Hands_Alchemy_3());
        results.push_back(Armor::Dragonplate_Hands_Marksman_1());
        results.push_back(Armor::Dragonplate_Hands_Marksman_2());
        results.push_back(Armor::Dragonplate_Hands_Marksman_3());
        results.push_back(Armor::Dragonplate_Hands_One_Handed_1());
        results.push_back(Armor::Dragonplate_Hands_One_Handed_2());
        results.push_back(Armor::Dragonplate_Hands_One_Handed_3());
        results.push_back(Armor::Dragonplate_Hands_Smithing_1());
        results.push_back(Armor::Dragonplate_Hands_Smithing_2());
        results.push_back(Armor::Dragonplate_Hands_Smithing_3());
        results.push_back(Armor::Dragonplate_Hands_Two_Handed_1());
        results.push_back(Armor::Dragonplate_Hands_Two_Handed_2());
        results.push_back(Armor::Dragonplate_Hands_Two_Handed_3());
    }

    void Dragonplate_Head_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Head_Alchemy_1());
        results.push_back(Armor::Dragonplate_Head_Alchemy_2());
        results.push_back(Armor::Dragonplate_Head_Alchemy_3());
        results.push_back(Armor::Dragonplate_Head_Alteration_1());
        results.push_back(Armor::Dragonplate_Head_Alteration_2());
        results.push_back(Armor::Dragonplate_Head_Alteration_3());
        results.push_back(Armor::Dragonplate_Head_Conjuration_1());
        results.push_back(Armor::Dragonplate_Head_Conjuration_2());
        results.push_back(Armor::Dragonplate_Head_Conjuration_3());
        results.push_back(Armor::Dragonplate_Head_Destruction_1());
        results.push_back(Armor::Dragonplate_Head_Destruction_2());
        results.push_back(Armor::Dragonplate_Head_Destruction_3());
        results.push_back(Armor::Dragonplate_Head_Illusion_1());
        results.push_back(Armor::Dragonplate_Head_Illusion_2());
        results.push_back(Armor::Dragonplate_Head_Illusion_3());
        results.push_back(Armor::Dragonplate_Head_Magicka_1());
        results.push_back(Armor::Dragonplate_Head_Magicka_2());
        results.push_back(Armor::Dragonplate_Head_Magicka_3());
        results.push_back(Armor::Dragonplate_Head_Magicka_Rate_1());
        results.push_back(Armor::Dragonplate_Head_Magicka_Rate_2());
        results.push_back(Armor::Dragonplate_Head_Magicka_Rate_3());
        results.push_back(Armor::Dragonplate_Head_Marksman_1());
        results.push_back(Armor::Dragonplate_Head_Marksman_2());
        results.push_back(Armor::Dragonplate_Head_Marksman_3());
        results.push_back(Armor::Dragonplate_Head_Restoration_1());
        results.push_back(Armor::Dragonplate_Head_Restoration_2());
        results.push_back(Armor::Dragonplate_Head_Restoration_3());
        results.push_back(Armor::Dragonplate_Head_Waterbreathing());
    }

    void Dragonplate_Shield_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Shield_Block_1());
        results.push_back(Armor::Dragonplate_Shield_Block_2());
        results.push_back(Armor::Dragonplate_Shield_Block_3());
        results.push_back(Armor::Dragonplate_Shield_Resist_Fire_1());
        results.push_back(Armor::Dragonplate_Shield_Resist_Fire_2());
        results.push_back(Armor::Dragonplate_Shield_Resist_Fire_3());
        results.push_back(Armor::Dragonplate_Shield_Resist_Frost_1());
        results.push_back(Armor::Dragonplate_Shield_Resist_Frost_2());
        results.push_back(Armor::Dragonplate_Shield_Resist_Frost_3());
        results.push_back(Armor::Dragonplate_Shield_Resist_Magic_1());
        results.push_back(Armor::Dragonplate_Shield_Resist_Magic_2());
        results.push_back(Armor::Dragonplate_Shield_Resist_Magic_3());
        results.push_back(Armor::Dragonplate_Shield_Resist_Shock_1());
        results.push_back(Armor::Dragonplate_Shield_Resist_Shock_2());
        results.push_back(Armor::Dragonplate_Shield_Resist_Shock_3());
    }

    Vector_t<some<Armor_t*>>    Outfit_Ancient_Falmer()                 { DEFINE_CREATE(Outfit_Ancient_Falmer); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Falmer_Auriel()          { DEFINE_CREATE(Outfit_Ancient_Falmer_Auriel); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Falmer_Pauldronless()    { DEFINE_CREATE(Outfit_Ancient_Falmer_Pauldronless); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Falmer_Reflecting()      { DEFINE_CREATE(Outfit_Ancient_Falmer_Reflecting); }

    void Outfit_Ancient_Falmer(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Falmer_Body());
        results.push_back(Armor::Ancient_Falmer_Feet());
        results.push_back(Armor::Ancient_Falmer_Hands());
        results.push_back(Armor::Ancient_Falmer_Head());
    }

    void Outfit_Ancient_Falmer_Auriel(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Falmer_Body());
        results.push_back(Armor::Ancient_Falmer_Feet());
        results.push_back(Armor::Ancient_Falmer_Hands());
        results.push_back(Armor::Ancient_Falmer_Head());
        results.push_back(Armor::Ancient_Falmer_Auriels_Shield());
    }

    void Outfit_Ancient_Falmer_Pauldronless(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Falmer_Pauldronless_Body());
        results.push_back(Armor::Ancient_Falmer_Feet());
        results.push_back(Armor::Ancient_Falmer_Hands());
        results.push_back(Armor::Ancient_Falmer_Head());
    }

    void Outfit_Ancient_Falmer_Reflecting(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Falmer_Body());
        results.push_back(Armor::Ancient_Falmer_Feet());
        results.push_back(Armor::Ancient_Falmer_Hands());
        results.push_back(Armor::Ancient_Falmer_Head());
        results.push_back(Armor::Ancient_Falmer_Reflecting_Shield());
    }

    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic()                 { DEFINE_CREATE(Outfit_Ancient_Nordic); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Ahzidal()         { DEFINE_CREATE(Outfit_Ancient_Nordic_Ahzidal); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Bromjunaar()      { DEFINE_CREATE(Outfit_Ancient_Nordic_Bromjunaar); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Dukaan()          { DEFINE_CREATE(Outfit_Ancient_Nordic_Dukaan); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Hevnoraak()       { DEFINE_CREATE(Outfit_Ancient_Nordic_Hevnoraak); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Hunter()          { DEFINE_CREATE(Outfit_Ancient_Nordic_Hunter); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Jagged_Crown()    { DEFINE_CREATE(Outfit_Ancient_Nordic_Jagged_Crown); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Kolbjorn()        { DEFINE_CREATE(Outfit_Ancient_Nordic_Kolbjorn); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Konahrik()        { DEFINE_CREATE(Outfit_Ancient_Nordic_Konahrik); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Krosis()          { DEFINE_CREATE(Outfit_Ancient_Nordic_Krosis); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Morokei()         { DEFINE_CREATE(Outfit_Ancient_Nordic_Morokei); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Nahkriin()        { DEFINE_CREATE(Outfit_Ancient_Nordic_Nahkriin); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Otar()            { DEFINE_CREATE(Outfit_Ancient_Nordic_Otar); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Rahgot()          { DEFINE_CREATE(Outfit_Ancient_Nordic_Rahgot); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Unburned()        { DEFINE_CREATE(Outfit_Ancient_Nordic_Unburned); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Vokun()           { DEFINE_CREATE(Outfit_Ancient_Nordic_Vokun); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Volsung()         { DEFINE_CREATE(Outfit_Ancient_Nordic_Volsung); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Ysgramor()        { DEFINE_CREATE(Outfit_Ancient_Nordic_Ysgramor); }
    Vector_t<some<Armor_t*>>    Outfit_Ancient_Nordic_Zahkriisos()      { DEFINE_CREATE(Outfit_Ancient_Nordic_Zahkriisos); }

    void Outfit_Ancient_Nordic(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Head());
    }

    void Outfit_Ancient_Nordic_Ahzidal(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Ahzidal_Head());
    }

    void Outfit_Ancient_Nordic_Bromjunaar(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Bromjunaar_Head());
    }

    void Outfit_Ancient_Nordic_Dukaan(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Dukaan_Head());
    }

    void Outfit_Ancient_Nordic_Hevnoraak(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Hevnoraak_Head());
    }

    void Outfit_Ancient_Nordic_Hunter(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Hunter_Body());
        results.push_back(Armor::Ancient_Nordic_Hunter_Feet());
        results.push_back(Armor::Ancient_Nordic_Hunter_Hands());
        results.push_back(Armor::Ancient_Nordic_Head());
    }

    void Outfit_Ancient_Nordic_Jagged_Crown(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Jagged_Crown_Head());
    }

    void Outfit_Ancient_Nordic_Kolbjorn(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Kolbjorn_Body());
        results.push_back(Armor::Ancient_Nordic_Kolbjorn_Feet());
        results.push_back(Armor::Ancient_Nordic_Kolbjorn_Hands());
        results.push_back(Armor::Ancient_Nordic_Kolbjorn_Head());
    }

    void Outfit_Ancient_Nordic_Konahrik(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Konahrik_Head());
    }

    void Outfit_Ancient_Nordic_Krosis(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Krosis_Head());
    }

    void Outfit_Ancient_Nordic_Morokei(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Morokei_Head());
    }

    void Outfit_Ancient_Nordic_Nahkriin(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Nahkriin_Head());
    }

    void Outfit_Ancient_Nordic_Otar(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Otar_Head());
    }

    void Outfit_Ancient_Nordic_Rahgot(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Rahgot_Head());
    }

    void Outfit_Ancient_Nordic_Unburned(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Unburned_Head());
    }

    void Outfit_Ancient_Nordic_Vokun(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Vokun_Head());
    }

    void Outfit_Ancient_Nordic_Volsung(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Volsung_Head());
    }

    void Outfit_Ancient_Nordic_Ysgramor(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Head());
        results.push_back(Armor::Ancient_Nordic_Ysgramor_Shield());
    }

    void Outfit_Ancient_Nordic_Zahkriisos(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Ancient_Nordic_Body());
        results.push_back(Armor::Ancient_Nordic_Feet());
        results.push_back(Armor::Ancient_Nordic_Hands());
        results.push_back(Armor::Ancient_Nordic_Zahkriisos_Head());
    }

    Vector_t<some<Armor_t*>>    Outfit_Blades() { DEFINE_CREATE(Outfit_Blades); }

    void Outfit_Blades(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Blades_Body());
        results.push_back(Armor::Blades_Feet());
        results.push_back(Armor::Blades_Hands());
        results.push_back(Armor::Blades_Head());
        results.push_back(Armor::Blades_Shield());
    }

    Vector_t<some<Armor_t*>>    Outfit_Bonemold()                       { DEFINE_CREATE(Outfit_Bonemold); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Enchanted()             { DEFINE_CREATE(Outfit_Bonemold_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Guard()                 { DEFINE_CREATE(Outfit_Bonemold_Guard); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Guard_Enchanted()       { DEFINE_CREATE(Outfit_Bonemold_Guard_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Pauldron()              { DEFINE_CREATE(Outfit_Bonemold_Pauldron); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Pauldron_Enchanted()    { DEFINE_CREATE(Outfit_Bonemold_Pauldron_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Bonemold_Pauldron_Improved()     { DEFINE_CREATE(Outfit_Bonemold_Pauldron_Improved); }

    void Outfit_Bonemold(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Body());
        results.push_back(Armor::Bonemold_Feet());
        results.push_back(Armor::Bonemold_Hands());
        results.push_back(Armor::Bonemold_Head());
        results.push_back(Armor::Bonemold_Shield());
    }

    void Outfit_Bonemold_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Bonemold_Body_Enchanted().Random());
        results.push_back(Bonemold_Feet_Enchanted().Random());
        results.push_back(Bonemold_Hands_Enchanted().Random());
        results.push_back(Bonemold_Head_Enchanted().Random());
        results.push_back(Bonemold_Shield_Enchanted().Random());
    }

    void Outfit_Bonemold_Guard(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Guard_Body());
        results.push_back(Armor::Bonemold_Feet());
        results.push_back(Armor::Bonemold_Hands());
        results.push_back(Armor::Bonemold_Head());
        results.push_back(Armor::Bonemold_Shield());
    }

    void Outfit_Bonemold_Guard_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Guard_Body());
        results.push_back(Bonemold_Feet_Enchanted().Random());
        results.push_back(Bonemold_Hands_Enchanted().Random());
        results.push_back(Bonemold_Head_Enchanted().Random());
        results.push_back(Bonemold_Shield_Enchanted().Random());
    }

    void Outfit_Bonemold_Pauldron(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Pauldron_Body());
        results.push_back(Armor::Bonemold_Feet());
        results.push_back(Armor::Bonemold_Hands());
        results.push_back(Armor::Bonemold_Head());
        results.push_back(Armor::Bonemold_Shield());
    }

    void Outfit_Bonemold_Pauldron_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Pauldron_Body());
        results.push_back(Bonemold_Feet_Enchanted().Random());
        results.push_back(Bonemold_Hands_Enchanted().Random());
        results.push_back(Bonemold_Head_Enchanted().Random());
        results.push_back(Bonemold_Shield_Enchanted().Random());
    }

    void Outfit_Bonemold_Pauldron_Improved(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Bonemold_Pauldron_Improved_Body());
        results.push_back(Armor::Bonemold_Pauldron_Improved_Feet());
        results.push_back(Armor::Bonemold_Pauldron_Improved_Hands());
        results.push_back(Armor::Bonemold_Pauldron_Improved_Head());
        results.push_back(Armor::Bonemold_Pauldron_Improved_Shield());
    }

    Vector_t<some<Armor_t*>>    Outfit_Chitin_Heavy()           { DEFINE_CREATE(Outfit_Chitin_Heavy); }
    Vector_t<some<Armor_t*>>    Outfit_Chitin_Heavy_Enchanted() { DEFINE_CREATE(Outfit_Chitin_Heavy_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Chitin_Light()           { DEFINE_CREATE(Outfit_Chitin_Light); }
    Vector_t<some<Armor_t*>>    Outfit_Chitin_Light_Enchanted() { DEFINE_CREATE(Outfit_Chitin_Light_Enchanted); }

    void Outfit_Chitin_Heavy(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Heavy_Body());
        results.push_back(Armor::Chitin_Heavy_Feet());
        results.push_back(Armor::Chitin_Heavy_Hands());
        results.push_back(Armor::Chitin_Heavy_Head());
    }

    void Outfit_Chitin_Heavy_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Chitin_Heavy_Body_Enchanted().Random());
        results.push_back(Chitin_Heavy_Feet_Enchanted().Random());
        results.push_back(Chitin_Heavy_Hands_Enchanted().Random());
        results.push_back(Chitin_Heavy_Head_Enchanted().Random());
    }

    void Outfit_Chitin_Light(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Chitin_Light_Body());
        results.push_back(Armor::Chitin_Light_Feet());
        results.push_back(Armor::Chitin_Light_Hands());
        results.push_back(Armor::Chitin_Light_Head());
        results.push_back(Armor::Chitin_Light_Shield());
    }

    void Outfit_Chitin_Light_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Chitin_Light_Body_Enchanted().Random());
        results.push_back(Chitin_Light_Feet_Enchanted().Random());
        results.push_back(Chitin_Light_Hands_Enchanted().Random());
        results.push_back(Chitin_Light_Head_Enchanted().Random());
        results.push_back(Chitin_Light_Shield_Enchanted().Random());
    }

    Vector_t<some<Armor_t*>>    Outfit_Daedric()                    { DEFINE_CREATE(Outfit_Daedric); }
    Vector_t<some<Armor_t*>>    Outfit_Daedric_Enchanted()          { DEFINE_CREATE(Outfit_Daedric_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Daedric_Dremora()            { DEFINE_CREATE(Outfit_Daedric_Dremora); }
    Vector_t<some<Armor_t*>>    Outfit_Daedric_Dremora_Enchanted()  { DEFINE_CREATE(Outfit_Daedric_Dremora_Enchanted); }

    void Outfit_Daedric(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Body());
        results.push_back(Armor::Daedric_Feet());
        results.push_back(Armor::Daedric_Hands());
        results.push_back(Armor::Daedric_Head());
        results.push_back(Armor::Daedric_Shield());
    }

    void Outfit_Daedric_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Daedric_Body_Enchanted().Random());
        results.push_back(Daedric_Feet_Enchanted().Random());
        results.push_back(Daedric_Hands_Enchanted().Random());
        results.push_back(Daedric_Head_Enchanted().Random());
        results.push_back(Daedric_Shield_Enchanted().Random());
    }

    void Outfit_Daedric_Dremora(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Dremora_Body());
        results.push_back(Armor::Daedric_Dremora_Feet());
        results.push_back(Armor::Daedric_Dremora_Hands());
        results.push_back(Armor::Daedric_Dremora_Head());
        results.push_back(Armor::Daedric_Shield());
    }

    void Outfit_Daedric_Dremora_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Daedric_Dremora_Body());
        results.push_back(Armor::Daedric_Dremora_Feet());
        results.push_back(Armor::Daedric_Dremora_Hands());
        results.push_back(Armor::Daedric_Dremora_Head());
        results.push_back(Daedric_Shield_Enchanted().Random());
    }

    Vector_t<some<Armor_t*>>    Outfit_Dawnguard_Heavy_Brown()  { DEFINE_CREATE(Outfit_Dawnguard_Heavy_Brown); }
    Vector_t<some<Armor_t*>>    Outfit_Dawnguard_Heavy_Grey()   { DEFINE_CREATE(Outfit_Dawnguard_Heavy_Grey); }
    Vector_t<some<Armor_t*>>    Outfit_Dawnguard_Light_Brown()  { DEFINE_CREATE(Outfit_Dawnguard_Light_Brown); }
    Vector_t<some<Armor_t*>>    Outfit_Dawnguard_Light_Grey()   { DEFINE_CREATE(Outfit_Dawnguard_Light_Grey); }
    Vector_t<some<Armor_t*>>    Outfit_Dawnguard_Light_Red()    { DEFINE_CREATE(Outfit_Dawnguard_Light_Red); }

    void Outfit_Dawnguard_Heavy_Brown(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dawnguard_Heavy_Brown_Body());
        results.push_back(Armor::Dawnguard_Heavy_Feet());
        results.push_back(Armor::Dawnguard_Heavy_Hands());
        results.push_back(Armor::Dawnguard_Heavy_Head());
        results.push_back(Armor::Dawnguard_Heavy_Shield());
    }

    void Outfit_Dawnguard_Heavy_Grey(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dawnguard_Heavy_Grey_Body());
        results.push_back(Armor::Dawnguard_Heavy_Feet());
        results.push_back(Armor::Dawnguard_Heavy_Hands());
        results.push_back(Armor::Dawnguard_Heavy_Head());
        results.push_back(Armor::Dawnguard_Heavy_Shield());
    }

    void Outfit_Dawnguard_Light_Brown(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dawnguard_Light_Brown_Body());
        results.push_back(Armor::Dawnguard_Light_Feet());
        results.push_back(Armor::Dawnguard_Light_Hands());
        results.push_back(Armor::Dawnguard_Light_Head());
        results.push_back(Armor::Dawnguard_Light_Shield());
    }

    void Outfit_Dawnguard_Light_Grey(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dawnguard_Light_Grey_Body());
        results.push_back(Armor::Dawnguard_Light_Feet());
        results.push_back(Armor::Dawnguard_Light_Hands());
        results.push_back(Armor::Dawnguard_Light_Head());
        results.push_back(Armor::Dawnguard_Light_Shield());
    }

    void Outfit_Dawnguard_Light_Red(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dawnguard_Light_Red_Body());
        results.push_back(Armor::Dawnguard_Light_Feet());
        results.push_back(Armor::Dawnguard_Light_Hands());
        results.push_back(Armor::Dawnguard_Light_Head());
        results.push_back(Armor::Dawnguard_Light_Shield());
    }

    Vector_t<some<Armor_t*>>    Outfit_Dragonplate()                    { DEFINE_CREATE(Outfit_Dragonplate); }
    Vector_t<some<Armor_t*>>    Outfit_Dragonplate_Enchanted()          { DEFINE_CREATE(Outfit_Dragonplate_Enchanted); }
    Vector_t<some<Armor_t*>>    Outfit_Dragonplate_Keeper()             { DEFINE_CREATE(Outfit_Dragonplate_Keeper); }
    Vector_t<some<Armor_t*>>    Outfit_Dragonplate_Keeper_Enchanted()   { DEFINE_CREATE(Outfit_Dragonplate_Keeper_Enchanted); }

    void Outfit_Dragonplate(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Body());
        results.push_back(Armor::Dragonplate_Feet());
        results.push_back(Armor::Dragonplate_Hands());
        results.push_back(Armor::Dragonplate_Head());
        results.push_back(Armor::Dragonplate_Shield());
    }

    void Outfit_Dragonplate_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Dragonplate_Body_Enchanted().Random());
        results.push_back(Dragonplate_Feet_Enchanted().Random());
        results.push_back(Dragonplate_Hands_Enchanted().Random());
        results.push_back(Dragonplate_Head_Enchanted().Random());
        results.push_back(Dragonplate_Shield_Enchanted().Random());
    }

    void Outfit_Dragonplate_Keeper(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Keeper_Body());
        results.push_back(Armor::Dragonplate_Keeper_Feet());
        results.push_back(Armor::Dragonplate_Keeper_Hands());
        results.push_back(Armor::Dragonplate_Head());
        results.push_back(Armor::Dragonplate_Keeper_Shield());
    }

    void Outfit_Dragonplate_Keeper_Enchanted(Vector_t<some<Armor_t*>>& results)
    {
        results.push_back(Armor::Dragonplate_Keeper_Body());
        results.push_back(Armor::Dragonplate_Keeper_Feet());
        results.push_back(Armor::Dragonplate_Keeper_Hands());
        results.push_back(Dragonplate_Head_Enchanted().Random());
        results.push_back(Armor::Dragonplate_Keeper_Shield());
    }

    #undef DEFINE_CREATE

}}}
