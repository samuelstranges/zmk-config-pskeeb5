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
U_HML(LGUI, A),    U_HML(LALT, S),    U_HML(LCTRL, D),   U_HML(LSHFT, F),   &kp G,             U_HMR(LSHFT, H),   U_HMR(LCTRL, J),   U_HMR(LALT, K),    U_HMR(LGUI, L),    &kp SQT,           \
U_LT(U_BUTTON, Z), U_HML(RALT, X),    &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_HMR(RALT, DOT),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, F19),  U_NP,              U_NP

// EXTRA: same as BASE
#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_HML(LGUI, A),    U_HML(LALT, S),    U_HML(LCTRL, D),   U_HML(LSHFT, F),   &kp G,             U_HMR(LSHFT, H),   U_HMR(LCTRL, J),   U_HMR(LALT, K),    U_HMR(LGUI, L),    &kp SQT,           \
U_LT(U_BUTTON, Z), U_HML(RALT, X),    &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_HMR(RALT, DOT),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, F19),  U_NP,              U_NP

// Custom Mouse layer: trackpoint handles cursor movement,
// so replace mmv keys with trackpoint sensitivity controls.
// Keep scroll and mouse button bindings.
#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
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
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Custom SYM: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Custom FUN: shift mods left to align with HJKL home row
#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
