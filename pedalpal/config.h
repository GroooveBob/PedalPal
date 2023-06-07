// Copyright 2022 Marco "Bob" (@Marco "Bob")
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define MATRIX_ROWS 2
#define MATRIX_COLS 8

#define DIRECT_PINS { \
    { C6, D4, D0, D1, F4, F5, F6, F7}, \
    { D7, E6, B4, B5, B6, B2, B3, B1} \
}

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
    K10, K11, K12, K13, K14, K15, K16, K17  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }  \
}


#define VIAL_KEYBOARD_UID {0x52, 0x2C, 0x56, 0xAB, 0x73, 0x80, 0x03, 0x5A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1}
#define VIAL_UNLOCK_COMBO_COLS { 0, 4}