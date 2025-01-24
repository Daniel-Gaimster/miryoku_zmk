// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// U_NP = key is not present
// U_NA = present but not available for use
// U_NU = available but not used

#include "keys_en_gb_extended.h"
#include "keys_us_international.h"

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_QWERTY // this refers to the extra base layer, not extra keys on the 3x6 corne
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_CLIPBOARD_WIN
// #define MIRYOKU_LAYERS_FLIP

// The default miryoku behvaviours have been hard coded overwritten in the miryoku_behavours.dtsi
// The above values are used to tweak the home row and layer mods
#define U_TAPPING_TERM 280
#define U_QUICK_TAP_TERM 175
// #define U_HOLD_TAP_FLAVOUR "balanced" // Couldn't get this to work as a variable, hard coded instead
// #define U_GLOBAL_QUICK_TAP_TERM 150 // Need to have the PR in my fork for this to be an option



#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none


// Below is how you configure the keymaps, the first mapping for editing the outer 6 keys, the second for the base 36 keys
// No idea if there is a better way to do this remapping, but this works

//
// Changes to the LAYERMAPPING will only affect a single layer
// Grab the default config for the layer from layers_alternatives.h and then modify

// Changes made to the LAYOUTMAPPING will affect all layers, will be overwritten by layer specific changes
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37


// Below are the layer specific keymap changes, remember the first mapping for editing the outer 6 keys, the second for the base 36 keys
//// BASE ////
// This one for chaning the 6 outer keys
#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp GB_POUND \
&kp GB_MINUS  &kp A  K11  K12  K13  K14       K15  K16  K17  K18  &kp SQT  &kp GB_UNDER \
&kp GB_BACKSLASH  K20  K21  K22  U_MT(LGUI, V)  K24       K25  U_MT(LGUI, M)  K27  K28  K29  &kp GB_EQUAL \
               U_LT(LSHFT, ESC)  K33  U_LT(U_MEDIA, TAB)       K35  K36  K37

// // This one for changing the base 36 keys
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     &kp SQT, \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             U_MT(LGUI, V),             &kp B,             &kp N,             U_MT(LGUI, M),             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NP,              U_NP,              U_LT(LSHFT, ESC),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

//// NUM ////
// #define MIRYOKU_LAYERMAPPING_NUM( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_NUM \
// &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// //// NAV ////
// #define MIRYOKU_LAYERMAPPING_NAV( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_NAV_FLIP \
// &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// //// MOUSE ////
// #define MIRYOKU_LAYERMAPPING_MOUSE( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
// U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// //// BUTTON ////
// #define MIRYOKU_LAYERMAPPING_BUTTON( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_BUTTON \
// U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
// U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


// //// MEDIA ////
// #define MIRYOKU_LAYERMAPPING_MEDIA( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
// U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// //// SYM ////
// #define MIRYOKU_LAYERMAPPING_SYM( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_SYM_FLIP \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
// U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP


// //// FUN ////
// #define MIRYOKU_LAYERMAPPING_FUN( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37

// #define MIRYOKU_ALTERNATIVES_FUN_FLIP \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
// U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPACE,         &kp K_APP,         U_NP,              U_NP


#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP



#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40


#endif



#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10