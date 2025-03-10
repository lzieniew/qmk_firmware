// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S RALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

#define ESC_L1 LT(1, KC_CAPS_LOCK)
#define ESC_L3 LT(3, KC_CAPS_LOCK)
#define BACKSPACE_L2 LT(2, KC_BSPC)
#define BACKSPACE_L3 LT(3, KC_BSPC)

// Define combo
enum combos {
  QTYP_LAYER
};

const uint16_t PROGMEM qtyp_combo[] = {KC_Q, KC_T, KC_Y, KC_P, COMBO_END};

combo_t key_combos[] = {
  [QTYP_LAYER] = COMBO(qtyp_combo, TO(4))  // TO(4) switches to layer 4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,
        KC_NO,   KC_NO,   KC_NO,    ESC_L1,    KC_SPC,    KC_ENT,    BACKSPACE_L2,    KC_NO,    KC_NO,    KC_NO
    ),
    [1] = LAYOUT_ortho_4x10(
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,     KC_0,
       KC_LSFT, KC_LALT, KC_RGUI, KC_LCTL, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_RSFT,
       XXXXXXX, XXXXXXX, XXXXXXX, KC_D,    KC_D,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_QUOTE,
       KC_NO,   KC_NO,   KC_NO, _______, KC_SPC,     KC_ENT,   BACKSPACE_L3, KC_NO, KC_NO, KC_NO
    ),
    [2] = LAYOUT_ortho_4x10(
       KC_TAB,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_GRV, KC_SCLN, KC_QUOT, KC_BSPC,
       KC_TAB, KC_LALT, KC_RGUI, KC_LCTL, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_RSFT,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS,
       KC_NO, KC_NO, KC_NO,   ESC_L3,  KC_SPC,     KC_ENT, _______, KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT_ortho_4x10(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        RGB_HUI, RGB_SAI, KC_BTN1, KC_BTN2, KC_BTN3,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
        RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
        KC_NO, KC_NO, KC_NO, _______,  KC_SPC,     KC_ENT, _______, KC_NO, KC_NO, KC_NO
    ),
    [4] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        HOME_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    HOME_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_NO,   KC_NO,  KC_NO, TO(0), KC_SPC, KC_ENT, BACKSPACE_L2, KC_NO, KC_NO, KC_NO
    )
};
