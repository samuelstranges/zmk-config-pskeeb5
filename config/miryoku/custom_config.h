// Miryoku custom config for pskeeb5 with trackpoint

#pragma once

// Vi-style navigation (HJKL)
#define MIRYOKU_NAV_VI

// Mac clipboard shortcuts
#define MIRYOKU_CLIPBOARD_MAC

// QWERTY for Tap layer
#define MIRYOKU_TAP_QWERTY

// Custom BASE: QWERTY with bilateral home row mods (HJKL right-hand)
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_HML(LGUI, A),    U_HML(LALT, S),    U_HML(LCTRL, D),   U_HML(LSHFT, F),   &kp G,             U_HMR(LSHFT, H),   U_HMR(LCTRL, J),   U_HMR(LALT, K),    U_HMR(LGUI, L),    &kp SEMICOLON,           \
U_HML(LS(LA(LC(LGUI))), Z), U_HML(RALT, X), &kp C,          &kp V,             &kp B,             &kp N,             &kp M,             U_HMR(RALT, COMMA), U_HMR(LS(LA(LC(LGUI))), DOT), &kp SQT, \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, F19),  U_NP,              U_NP

// EXTRA: same as BASE
#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_HML(LGUI, A),    U_HML(LALT, S),    U_HML(LCTRL, D),   U_HML(LSHFT, F),   &kp G,             U_HMR(LSHFT, H),   U_HMR(LCTRL, J),   U_HMR(LALT, K),    U_HMR(LGUI, L),    &kp SEMICOLON,           \
U_HML(LS(LA(LC(LGUI))), Z), U_HML(RALT, X), &kp C,          &kp V,             &kp B,             &kp N,             &kp M,             U_HMR(RALT, COMMA), U_HMR(LS(LA(LC(LGUI))), DOT), &kp SQT, \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, F19),  U_NP,              U_NP

// Custom NAV: removed clipboard from top right row
#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

// Custom MEDIA: removed RGB from top right row
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              &kp C_BRI_DN,      &kp C_BRI_UP,      U_NA,              U_NA,      \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

// Custom Mouse layer: trackpoint handles cursor movement,
// so replace mmv keys with trackpoint sensitivity controls.
// Keep scroll and mouse button bindings. Removed clipboard from top right row.
#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_MSS_TP_S_D,      U_MSS_TP_S_I,      U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP

// Custom BUTTON: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NU,              \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

// Custom NUM: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_NUM \
&kp CARET,         &kp N7,            &kp N8,            &kp N9,            &kp TILDE,         &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NA,            \
&kp ASTRK,         &kp N4,            &kp N5,            &kp N6,            &kp PLUS,        &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp SLASH,         &kp N1,            &kp N2,            &kp N3,            &kp MINUS,       &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              U_NA,              \
U_NP,              U_NP,              &kp N0,            &kp DOT,           &kp EQUAL,       U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Custom SYM: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NA,            \
&kp LPAR,          &kp RPAR,          &kp LBKT,          &kp RBKT,          &kp QMARK,         &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp LBRC,          &kp RBRC,          &kp SLASH,         &kp BSLH,          &kp PIPE,          &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              U_NA,              \
U_NP,              U_NP,              &kp AMPS,          &kp UNDER,         &kp GRAVE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Custom FUN: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NA,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
