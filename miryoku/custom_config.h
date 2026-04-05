// Miryoku custom config for pskeeb5 with trackpoint

#pragma once

// QWERTY base layout
#define MIRYOKU_ALPHAS_QWERTY

// Vi-style navigation (HJKL)
#define MIRYOKU_NAV_VI

// Mac clipboard shortcuts
#define MIRYOKU_CLIPBOARD_MAC

// Custom Mouse layer: trackpoint handles cursor movement,
// so replace mmv keys with trackpoint sensitivity controls.
// Keep scroll and mouse button bindings.
#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_MSS_TP_S_D,      U_MSS_TP_S_I,      U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
