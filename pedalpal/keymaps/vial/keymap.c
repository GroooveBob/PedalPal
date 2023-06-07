#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_all(
        MI_C,   MI_D,   KC_D,   KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        MI_E,   MI_F,   KC_F,   KC_PMNS, KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    ),
};
