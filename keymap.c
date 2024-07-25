// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// Copyright 2023 74k1
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "keymap_swiss_de.h"

// DEFINITIONS
//#define BT_LAST MT(MOD_RSFT, KC_LALT)

// KEY OVERRIDES
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t backslash_key_override = ko_make_basic(MOD_MASK_SHIFT, CH_SLSH, CH_BSLS);

// this globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
    &delete_key_override,
    &backslash_key_override
};

// TAIKO COMBOS
const uint16_t PROGMEM escape_combo[] = {KC_TAB, CH_1, COMBO_END};
const uint16_t PROGMEM ae_combo[] = {KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_E, KC_U, COMBO_END};

combo_t key_combos[] = {
	COMBO(escape_combo, KC_ESC),
	COMBO(ae_combo, CH_ADIA),
	COMBO(oe_combo, CH_ODIA),
	COMBO(ue_combo, CH_UDIA)
};

// Snap Tap
const key_cancellation_t PROGMEM key_cancellation_list[] = {
    // on key down
    //       |    key to be released
    //       |     |
    [0] = {KC_D, KC_A},
    [1] = {KC_A, KC_D},
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT( // NORMAL
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      | ->     |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Z,    CH_U,    CH_I,    CH_O,    CH_P,  KC_DEL,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | LSFT  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_LSFT,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| MOD    | LALT   | LAYER1 | SPACE  |       | ENTER  | LAYER2 | RALT   | N/A    |
                                   KC_LGUI, KC_LALT,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_RALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [1] = LAYOUT( // FKEYS, ARROWS, MODS
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | §     | F1     | F2     | F3     | F4     | F5     |        |       |        | F6     | F7     | F8     | F9     | F10    | <-     |
        CH_SECT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,         XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | F11    | F12    | F13    | F14    | F15    |        |       |        | F16    | F17    | F18    | F19    | F20    | ->     |
        _______,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                            KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20, _______,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | LSFT  | CAPS   | PrScr  | INS    | UP     |        |        |       |        | LEFT   | DOWN   | UP     | RIGHT  |        | RSFT   |
        _______, KC_CAPS, KC_PSCR,  KC_INS,   KC_UP, XXXXXXX,                           KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  |        |        | LEFT   | DOWN   | RIGHT  | N/A    |       | N/A    | HOME   | PGDOWN | PGUP   | END    |        |        |
        _______, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,         XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| MOD    | LALT   | LAYER1 | SPACE  |       | ENTER  | LAYER3 | RALT   | N/A    |
                                   KC_LGUI, KC_LALT, _______,  KC_SPC,          KC_ENT,   MO(3), KC_RALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [2] = LAYOUT( // SPECIAL
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | ~     | ^      | @      | #      | °      | $      |        |       |        | `      | |      | '      | ?      | !      | ->     |
        CH_TILD, CH_CIRC,   CH_AT, CH_HASH,  CH_DEG,  CH_DLR,                            CH_GRV, CH_PIPE, CH_QUOT, CH_QUES, CH_EXLM, _______,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | LSFT  | <      | [      | {      | (      | \      |        |       |        | /      | )      | }      | ]      | >      | RSFT   |
        _______, CH_LABK, CH_LBRC, CH_LCBR, CH_LPRN, CH_BSLS,                           CH_SLSH, CH_RPRN, CH_RCBR, CH_RBRC, CH_RABK, _______,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  |        |        | MUTE   | VOL DN | VOL UP | N/A    |       | N/A    | PRV    | PLY    | NXT    |        |        | ENTER  |
        _______, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,         XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, _______,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| MOD    | LALT   | LAYER3 | SPACE  |       | ENTER  | LAYER2 | RALT   | N/A    |
                                   KC_LGUI, KC_LALT,   MO(3),  KC_SPC,          KC_ENT, _______, KC_RALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [3] = LAYOUT( // QMK
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // |       |        |        |        |        |        |        |       |        |        |        |        |        |        |        |
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // |       |        |        |        |        |        |        |       |        |        |        |        |        |        |        |
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | BOOT  |        |        |        | SNPTAP |        |        |       |        | HUE +  | SAT +  | BRI +  | EFF +  | TG RGB |        |
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, KX_CATG, XXXXXXX,                           RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_TOG, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // |       |        |        |        |        |        |        |       | LAYER4 | HUE -  | SAT -  | BRI -  | EFF -  | MO RGB |        |
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           TG(4), RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_MOD, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //|        |        | LAYER3 |        |       |        | LAYER3 |        |        |
                                   XXXXXXX, XXXXXXX, _______, XXXXXXX,         XXXXXXX, _______, XXXXXXX, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [4] = LAYOUT( // MOUSE
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // |       |        |        |        |        |        |        |       |        |        |        |        |        |        |        |
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // |       |        | MUP    |        |        |        |        |       |        |        |        | MOUSE3 | MWH UP |        |        |
        XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, KC_BTN3, KC_WH_U, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // |       | MLEFT  | MDOWN  | MRIGHT |        |        |        |       |        |        | MOUSE1 | MOUSE2 | MWH DN |        |        |
        XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,                           XXXXXXX, KC_BTN1, KC_BTN2, KC_WH_D, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // |       |        |        |        |        |        |        |       | LAYER4 |        |        |        |        |        |        |
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           TG(4), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //|        |        |        |        |       |        |        |        |        |
                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    )
};
