// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _WIN 0
#define _MAC 1
#define _RAISE 2
#define _LOWER 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0 : Windows Layer
     * .------------------------------------.                .-------------------------------------.
     * |  ESC |  1  |  2  |  3  |  4  |  5  |                |  6  |  7   |  8  |  9  |  0  |  ?   |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * |  TAB |  Q  |  W  |  E  |  R  |  T  |                |  Y  |  U   |  I  |  O  |  P  | BKSP |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * | SHFT |  A  |  S  |  D  |  F  |  G  |                |  H  |  J   |  K  |  L  |  ;  |  '   |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * | CTRL |  Z  |  X  |  C  |  V  |  B  |                |  N  |  M   |  ,  |  .  |  /  | ESC  |
     * .------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------.
     *                    | GUI | ALT | SPC |                | ENT | RSE  | LWR |
     *                    '-----+-----+-----'                '-----+-----+------'
     */
    [_WIN] = LAYOUT(
        // Left hand
            KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
            KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
            KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
            KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                                          KC_LGUI, KC_LALT, KC_SPC,
        // Right hand

            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUES,
            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
            KC_ENT,  MO(_RAISE),  MO(_LOWER)

        ),
    /* Keymap 1 : Mac Layer
     * .------------------------------------.                .-------------------------------------.
     * |  ESC |  1  |  2  |  3  |  4  |  5  |                |  6  |  7   |  8  |  9  |  0  |  ?   |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * |  TAB |  Q  |  W  |  E  |  R  |  T  |                |  Y  |  U   |  I  |  O  |  P  | BKSP |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * | SHFT |  A  |  S  |  D  |  F  |  G  |                |  H  |  J   |  K  |  L  |  ;  |  '   |
     * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
     * | CTRL |  Z  |  X  |  C  |  V  |  B  |                |  N  |  M   |  ,  |  .  |  /  | ESC  |
     * .------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------.
     *                    | ALT | GUI | SPC |                | ENT | RSE  | LWR |
     *                    '-----+-----+-----'                '-----+-----+------'
     */
    [_MAC] = LAYOUT(
        // Left hand
            KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
            KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
            KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
            KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                                          KC_LALT, KC_LGUI, KC_SPC,
        // Right hand

            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUES,
            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
            KC_ENT,  MO(_RAISE),  MO(_LOWER)

        ),
/* Keymap 2 : Symbol Layer
 * .------------------------------------.                .-------------------------------------.
 * |  `   | F1  |  F2 |  F3 |  F4 |  F5 |                |  F6 |  F7  |  F8 |  F9 | F10 |  F11 |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |      |     |     |  (  |  )  |     |                |  7  |  8   |  9  | F12 |  +  | DEL  |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |      |     |     |  [  |  ]  |     |                |  4  |  5   |  6  |  0  |  -  |      |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |QK_BOOT|    |     |  {  |  }  |     |                |  1  |  2   |  3  |     |  /  |      |
 * .------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------.
 *                    |     |     |     |                |     |      |     |
 *                    '-----+-----+-----'                '-----+-----+------'
 */
    [_RAISE] = LAYOUT(
        // Left hand
            KC_GRV,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_TRNS,
            QK_BOOT,   KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR,  KC_TRNS,
                                           KC_TRNS,  KC_TRNS,  KC_TRNS,
        // Right hand

            KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
            KC_7,     KC_8,     KC_9,     KC_F12,   KC_PLUS,  KC_DEL,
            KC_4,     KC_5,     KC_6,     KC_0,     KC_MINS,  KC_TRNS,
            KC_1,     KC_2,     KC_3,     KC_TRNS,  KC_SLSH,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS
        ),

/* Keymap 3 : OS Layer
 * .------------------------------------.                .-------------------------------------.
 * |      |     |     |     |     |     |                |     |      |     |     |     |      |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |      | WIN |     |     |     |     |                |     |      |     |     |     |      |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |      |     |     |     |     |     |                |     |      |     |     |     |      |
 * |------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------|
 * |      |     |     |     |     |     |                |     | MAC  |     |     |     |      |
 * .------+-----+-----+-----+-----+-----|                |-----+------+-----+-----+-----+------.
 *                    | GUI |     | SPC |                | ENT |      | ALT |
 *                    '-----+-----+-----'                '-----+-----+------'
 */
    [_LOWER] = LAYOUT(
        // Left hand
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   TO(_WIN), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                           KC_TRNS,  KC_TRNS,  KC_TRNS,
        // Right hand

            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   TO(_MAC), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS
        )
    };
