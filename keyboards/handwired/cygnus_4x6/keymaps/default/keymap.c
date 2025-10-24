// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _WIN 0
#define _MAC 1
#define _RAISE 2
#define _LOWER 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0 : Windows Layer
     *                    .-----.                                                    .-----.
     *              .-----|  3  |-----------.                            .-----------|  8  |-----.
     * .------------|  2  |-----|  4  |  5  |                            |  6  |  7  |-----|  9  |------------.
     * |  ESC |  1  |-----|  E  |-----+-----|                            |-----+-----|  I  |-----|  0  | BKSP |
     * |------+-----|  W  |-----|  R  |  T  |                            |  Y  |  U  |-----|  O  |-----+------|
     * |  TAB |  Q  |-----|  D  |-----+-----|                            |-----+-----|  K  |-----|  P  | ENT  |
     * |------+-----|  S  |-----|  F  |  G  |                            |  H  |  J  |-----|  L  |-----+------|
     * | SHFT |  A  |-----|  C  |-----+-----|                            |-----+-----|  ,  |-----|  ;  |  '   |
     * |------+-----|  X  |-----|  V  |  B  |                            |  N  |  M  |-----|  .  |-----+------|
     * | CTRL |  Z  |-----'     '-----------'   .-----.        .-----.   '-----------'     '-----|  /  |SHIFT |
     * .------+-----'               .-----------|     |        |     |-----------.               '------------'
     *                              | GUI | ALT | SPC |        | SPC | RSE | LWR |
     *                              '-----------------'        '-----------------'
     */
    [_WIN] = LAYOUT(
        // Left hand
            KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
            KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
            KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
            KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                                          KC_LGUI, KC_LALT, KC_SPC,
        // Right hand

            KC_6,       KC_7,       KC_8,       KC_9,    KC_0,    KC_BSPC,
            KC_Y,       KC_U,       KC_I,       KC_O,    KC_P,    KC_ENT,
            KC_H,       KC_J,       KC_K,       KC_L,    KC_SCLN, KC_QUOT,
            KC_N,       KC_M,       KC_COMM,    KC_DOT,  KC_SLSH, KC_RSFT,
            KC_SPC,     MO(_RAISE), MO(_LOWER)

        ),
    /* Keymap 1 : Mac Layer
     *                    .-----.                                                    .-----.
     *              .-----|     |-----------.                            .-----------|     |-----.
     * .------------|     |-----|     |     |                            |     |     |-----|     |------------.
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----|     |-----|     |     |                            |     |     |-----|     |-----+------|
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----|     |-----|     |     |                            |     |     |-----|     |-----+------|
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----|     |-----|     |     |                            |     |     |-----|     |-----+------|
     * |      |     |-----'     '-----------'   .-----.        .-----.   '-----------'     '-----|     |      |
     * .------+-----'               .-----------|     |        |     |-----------.               '------------'
     *                              | ALT | GUI |     |        |     |     |     |
     *                              '-----------------'        '-----------------'
     */
    [_MAC] = LAYOUT(
        // Left hand
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
                                           KC_LALT,  KC_LGUI,  KC_TRNS,
        // Right hand

            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS

        ),
    /* Keymap 2 : Symbol Layer
     *                    .-----.                                                    .-----.
     *              .-----| F3  |-----------.                            .-----------| F8  |-----.
     * .------------+ F2  |-----| F4  | F5  |                            | F6  | F7  |-----| F9  |------------.
     * |  `   | F1  |-----|  (  |-----+-----|                            |-----+-----|  9  |-----| F10 | DEL  |
     * |------+-----|     |-----|  )  |     |                            |  7  |  8  |-----|  +  |-----+------|
     * |      |     |-----|  [  |-----+-----|                            |-----+-----|  6  |-----| F11 | F12  |
     * |------+-----|     |-----|  ]  |     |                            |  4  |  5  |-----|  -  |-----+------|
     * |      |     |-----|  {  |-----+-----|                            |-----+-----|  3  |-----|     |      |
     * |------+-----|     |-----|  }  |     |                            |  1  |  2  |-----|  0  |-----+------|
     * |QK_BOOT|    |-----'     '-----------'   .-----.        .-----.   '-----------'     '-----|  /  | ENT  |
     * .------+-----'               .-----------|     |        |     |-----------.               '------------'
     *                              |     |     |     |        |     |     |     |
     *                              '-----------------'        '-----------------'
     */
    [_RAISE] = LAYOUT(
        // Left hand
            KC_GRV,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_TRNS,
            QK_BOOT,   KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR,  KC_TRNS,
                                           KC_TRNS,  KC_TRNS,  KC_TRNS,
        // Right hand

            KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_DEL,
            KC_7,     KC_8,     KC_9,     KC_PLUS,  KC_F11,   KC_F12,
            KC_4,     KC_5,     KC_6,     KC_MINS,  KC_MINS,  KC_TRNS,
            KC_1,     KC_2,     KC_3,     KC_0,     KC_SLSH,  KC_ENT,
            KC_TRNS,  KC_TRNS,  KC_TRNS
        ),

    /* Keymap 3 : OS Layer
     *                    .-----.                                                    .-----.
     *              .-----|     |-----------.                            .-----------|     |-----.
     * .------------+     |-----|     |     |                            |     |     |-----|     |------------.
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----| WIN |-----|     |     |                            |     |     |-----|     |-----+------|
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----|     |-----|     |     |                            |     |     |-----|     |-----+------|
     * |      |     |-----|     |-----+-----|                            |-----+-----|     |-----|     |      |
     * |------+-----|     |-----|     |     |                            |     | MAC |-----|     |-----+------|
     * |      |     |-----'     '-----------'   .-----.        .-----.   '-----------'     '-----|     |      |
     * .------+-----'               .-----------|     |        |     |-----------.               '------------'
     *                              |     |     |     |        |     |     |     |
     *                              '-----------------'        '-----------------'
     */
    [_LOWER] = LAYOUT(
        // Left hand
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
            KC_TRNS,   KC_TRNS,  TO(_WIN), KC_TRNS,  KC_TRNS,  KC_TRNS,
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

