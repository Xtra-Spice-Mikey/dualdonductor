// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_F1,   KC_F10,   KC_SPACE,   KC_UP,
        KC_DOWN,   KC_LEFT,   KC_RIGHT   )
};
