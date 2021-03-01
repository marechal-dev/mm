#include <ultra64.h>
#include <global.h>
#include <global_overlay.h>

#define ACTOR_OVERLAY(name, allocType)                                                                    \
    {                                                                                                     \
        (u32)_ovl_##name##SegmentRomStart, (u32)_ovl_##name##SegmentRomEnd, _ovl_##name##SegmentStart, \
            _ovl_##name##SegmentEnd, NULL, &name##_InitVars, NULL, allocType, 0                          \
    }

#define ACTOR_OVERLAY_INTERNAL(name, allocType) \
    { 0, 0, NULL, NULL, NULL, &name##_InitVars, NULL, allocType, 0 }

#define ACTOR_OVERLAY_UNSET \
    { 0 }

ActorOverlay gActorOverlayTable[] = {
    ACTOR_OVERLAY_INTERNAL(Player, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_GirlA, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Part, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Light, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Door, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Box, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pametfrog, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Okuta, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bom, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Wallmas, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dodongo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Firefly, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Horse, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_INTERNAL(En_Item00, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Arrow, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Elf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Niw, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tite, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Peehat, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Butte, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Insect, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fish, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Holl, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Dinofos, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hata, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zl1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Viewer, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bubble, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Door_Shutter, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Boom, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Torch2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Minifrog, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_St, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_INTERNAL(En_A_Obj, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Wturn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_River_Sound, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Ossan, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Famos, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Bombf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Am, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dekubaba, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_M_Fire1, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_M_Thunder, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(Bg_Breakwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Door_Warp1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Syokudai, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Item_B_Heart, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dekunuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bbfall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Arms_Hook, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Bb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Keikoku_Spr, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Wood02, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Death, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Minideath, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Vm, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Effect, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Kankyo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Floormas, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Rd, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_F40_Flift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Mure, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sw, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Object_Kankyo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Horse_Link_Child, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Door_Ana, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Encount1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Tre_Lgt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Encount2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fire_Rock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ctower_Rot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Mir_Ray, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Sb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bigslime, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Karebaba, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_In, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Ru, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bom_Chu, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY(En_Horse_Game_Check, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rr, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Fr, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Fishing, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Oshihiki, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Eff_Dust, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Umajump, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Arrow_Fire, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Arrow_Ice, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Arrow_Light, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Item_Etcetera, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kibako, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tsubo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Ik, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Demo_Shd, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dns, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Honotrap, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tubo_Trap, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Ice_Poly, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fz, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kusa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Bean, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Bombiwa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Switch, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Lift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hsblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Okarina_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Goroiwa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Daiku, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Nwc, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Item_Inbox, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ge1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Blockstop, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sda, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Clear_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Gm, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ms, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hs, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ingate, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kanban, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Attack_Niw, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Mk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Owl, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hana, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Lightswitch, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Mure2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Fu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Stream, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mm, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Weather_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ani, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Js, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Okarina_Effect, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_F40_Swlift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Kakasi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Makeoshihiki, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Oceff_Spot, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Torch, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Shot_Sun, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Roomtimer, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ssh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Oceff_Wipe, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Oceff_Storm, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Obj_Demo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Minislime, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Nutsball, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Oceff_Wipe2, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Oceff_Wipe3, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Dg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Si, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Comb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kibako2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Hs2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Mure3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Wf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Skb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Gs, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Sound, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Crow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Cow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Oceff_Wipe4, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Zo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Makekinsuta, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ge3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Hamishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zl4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mm2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Door_Spiral, ALLOCTYPE_PERMANENT),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Pzlblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Toge, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Armos, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Boyo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Grasshopper, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Grass, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Grass_Carry, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Grass_Unit, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Bg_Fire_Wall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Encount3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Jso, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Chikuwa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Knight, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Warp_tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Aob_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Boj_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Boj_02, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Boj_03, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Encount4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bom_Bowl_Man, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Syateki_Man, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Bg_Icicle, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Syateki_Crow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Boj_04, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Cne_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bba_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bji_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Spdweb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Mt_tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_02, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_03, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_04, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_05, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_06, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_07, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Dy_Yoseizo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Boj_05, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Sob1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Go, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Raf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Funen, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Raillift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Numa_Hana, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Flowerpot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Spinyroll, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Hina, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Syateki_Wf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Skateblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Iceblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bigpamet, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Syateki_Dekunuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Ravine, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Sa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Slime, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pr, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Toudai, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Entotu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Bell, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Syateki_Okuta, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Shutter, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Zl, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Elfgrp, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Tsg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Baguo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Vspinyroll, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Smork, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bat, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sekihi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Wiz, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Wiz_Brock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Wiz_Fire, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Eff_Change, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Statue, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Fireshield, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ladder, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mkk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Getitem, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Dnb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dnh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dnk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dnq, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Bg_Keikoku_Saku, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hugebombiwa, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Firefly2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rat, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Water_Effect, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kusa2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Spout_Fire, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Bg_Dblue_Movebg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dy_Extra, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bal, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ginko_Man, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Warp_Uzu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Driftice, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Look_Nuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mushi2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Mm3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Crace_Movebg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dno, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pr2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Prz, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Jso2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Etcetera, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Egol, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Mine, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Purify, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tru, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Trt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Test5, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test6, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Az, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Estone, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Hakugin_Post, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Opstage, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Stk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char00, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char02, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char03, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char04, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char05, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char06, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char07, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char08, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Char09, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tokeidai, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Mnk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Egblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Guard_Nuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Hakugin_Bombwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tokei_Tobira, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Hakugin_Elvpole, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ma4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Twig, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Po_Fusen, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Door_Etc, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bigokuta, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Icefloe, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Ocarinalift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Time_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Open_Shutter, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Open_Spot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Fu_Kaiten, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Aqua, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Elforg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Elfbub, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Fu_Mato, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fu_Kago, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Osn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ctower_Gear, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Trt2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tokei_Step, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Lotus, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kame, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Takaraya_Wall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Fu_Mizu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sellnuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Dkjail_Ivy, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Obj_Visiblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Takaraya, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tsn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ds2n, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fsn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Shn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Stop_heishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Bigicicle, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Lift_Nuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(Bg_Market_Step, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Lupygamelift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Test7, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Lightblock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Mir_Ray2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Wdhand, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gamelupy, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Danpei_Movebg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Snowwd, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pm, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gakufu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg5, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Col_Man, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Talk_Gibud, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Giant, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Snowball, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Boss_Hakugin, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gb2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Onpuman, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Tobira01, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tag_Obj, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Dhouse, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hakaisi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Hakugin_Switch, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Snowman, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(TG_Sw, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Po_Sisters, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pp, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hakurock, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hanabi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Dowsing, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Wind, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Racedog, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kendo_Js, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Botihasira, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fish2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pst, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Poh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Spidertent, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zoraegg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kbt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Maruta, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Snowball2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gg2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Ghaka, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dnp, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dai, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Goron_Oyu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kgy, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Invadepoh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Gk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_An, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY_UNSET,
    ACTOR_OVERLAY(En_Bee, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dragon, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Dora, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bigpo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kendo_Kanban, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hariko, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sth, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Sinkai_Kabe, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Haka_Curtain, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Kin2_Bombwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Kin2_Fence, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Kin2_Picture, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Kin2_Shelf, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rail_Skb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Jg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tru_Mt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Um, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Neo_Reeba, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Mbar_Chair, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Block, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Mirror, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Rotaryroom, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Dblue_Balance, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Dblue_Waterfall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kaizoku, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ge2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ma_Yts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ma_Yto, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tokei_Turret, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Dblue_Elevator, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Warpstone, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zog, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Rotlift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Jg_Gakki, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Inibs_Movebg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Tree, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Y2lift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Y2shutter, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Boat, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Taru, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hunsui, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Jc_Mato, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Mir_Ray3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zob, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Elf_Msg6, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Nozoki, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Toto, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Railgibud, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Baba, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Suttari, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zod, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kujiya, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Geg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kinoko, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Yasi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron1, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Chan, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zos, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_S_Goro, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Nb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ja, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_F40_Block, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_F40_Switch, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Po_Composer, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Guruguru, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Oceff_Wipe5, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(En_Stone_heishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Oceff_Wipe6, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(En_Scopenuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Scopecrow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Oceff_Wipe7, ALLOCTYPE_ABSOLUTE),
    ACTOR_OVERLAY(Eff_Kamejima_Wave, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hgo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zov, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ah, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Hgdoor, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Bombwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Ray, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Shutter, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Haka_Bombwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Haka_Tomb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sc_Ruppe, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Iknv_Doukutu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Iknv_Obj, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Pamera, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_HsStump, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hidden_Nuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Zow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Talk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Al, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tab, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Nimotsu, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hit_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ruppecrow, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron5, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Tanron6, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Daiku2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Muto, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Baisen, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Heishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Demo_heishi, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Dt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Cha, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Dinner, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Eff_Lastday, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikana_Dharma, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Akindonuts, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Eff_Stk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ig, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rg, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Osk, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Sth2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Yb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rz, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Scopecoin, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bjt, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bomjima, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bomjimb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bombers, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bombers2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bombal, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Moon_Stone, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Mu_Pict, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Ikninside, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Eff_Zoraband, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kepn_Koya, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Usiyane, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Nnh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Kzsaku, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Milk_Bin, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Kitan, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Astr_Bombwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Iknin_Susceil, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bsb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Recepgirl, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Thiefbird, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Jgame_Tsn, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Jgame_Light, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Yado, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Syoten, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Demo_Moonend, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Lbfshot, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Bg_Last_Bwall, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_And, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Invadepoh_Demo, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Danpeilift, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Fall2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Al, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_An, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Ah, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Nb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Drs, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Bal, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Paper, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Hint_Skb, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Tag, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Bh, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero2, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero3, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero4, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero5, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Ending_Hero6, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Dm_Gm, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Swprize, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Invisible_Ruppe, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(Obj_Ending, ALLOCTYPE_NORMAL),
    ACTOR_OVERLAY(En_Rsn, ALLOCTYPE_NORMAL),
};

s32 gMaxActorId = 0;

FaultClient D_801ED930;
FaultAddrConvClient D_801ED940;

void ActorOverlayTable_FaultPrint(void* arg0, void* arg1) {
    ActorOverlay* overlayEntry;
    u32 overlaySize;
    s32 i;

    FaultDrawer_SetCharPad(-2, 0);

    FaultDrawer_Printf("actor_dlftbls %u\n", gMaxActorId);
    FaultDrawer_Printf("No. RamStart- RamEnd cn  Name\n");

    for (i = 0, overlayEntry = &gActorOverlayTable[0]; i < gMaxActorId; i++, overlayEntry++) {
        overlaySize = (u32)overlayEntry->vramEnd - (u32)overlayEntry->vramStart;
        if (overlayEntry->loadedRamAddr != NULL) {
            FaultDrawer_Printf("%3d %08x-%08x %3d %s\n", i, overlayEntry->loadedRamAddr,
                               (u32)overlayEntry->loadedRamAddr + overlaySize, overlayEntry->nbLoaded, "");
        }
    }
}

void* ActorOverlayTable_FaultAddrConv(void* arg0, void* arg1) {
    u8* ptr = arg0;
    ActorOverlay* overlayEntry = &gActorOverlayTable[0];
    s32 i;
    u8* ramStart;
    u8* ramEnd;
    u32 size;
    u32 offset;

    for (i = 0; i < gMaxActorId; i++, overlayEntry++) {
        size = (u8*)overlayEntry->vramEnd - (u8*)overlayEntry->vramStart;
        ramStart = overlayEntry->loadedRamAddr;
        ramEnd = ramStart + size;
        offset = (u8*)overlayEntry->vramStart - ramStart;
        if (ramStart != NULL) {
            if (ptr >= ramStart && ptr < ramEnd) {
                return ptr + offset;
            }
        }
    }
    return NULL;
}

void ActorOverlayTable_Init(void) {
    gMaxActorId = ACTOR_ID_MAX;
    Fault_AddClient(&D_801ED930, &ActorOverlayTable_FaultPrint, NULL, NULL);
    Fault_AddAddrConvClient(&D_801ED940, &ActorOverlayTable_FaultAddrConv, NULL);
}

void ActorOverlayTable_Cleanup(void) {
    Fault_RemoveClient(&D_801ED930);
    Fault_RemoveAddrConvClient(&D_801ED940);
    gMaxActorId = 0;
}