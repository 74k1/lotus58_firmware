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
const key_override_t **key_override = (const key_override_t *[]){
    &delete_key_override,
    &backslash_key_override,
    NULL
};

// TAIKO COMBOS
const uint16_t PROGMEM escape_combo[] = {KC_TAB, KC_Q, COMBO_END};
const uint16_t PROGMEM ae_combo[] = {KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_E, KC_U, COMBO_END};

combo_t key_combos[] = {
	COMBO(escape_combo, KC_ESC),
	COMBO(ae_combo, CH_ADIA),
	COMBO(oe_combo, CH_ODIA),
	COMBO(ue_combo, CH_UDIA)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT( // NORMAL
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      |        |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Y,    CH_U,    CH_I,    CH_O,    CH_P, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | CAPS  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_CAPS,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| N/A    | MOD    | LAYER1 | SPACE  |       | ENTER  | LAYER2 | ALT    | N/A    |
                                   XXXXXXX, KC_LGUI,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_LALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [1] = LAYOUT( // ARROWS, MODS
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      |        |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Y,    CH_U,    CH_I,    CH_O,    CH_P, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | CAPS  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_CAPS,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| N/A    | MOD    | LAYER1 | SPACE  |       | ENTER  | LAYER2 | ALT    | N/A    |
                                   XXXXXXX, KC_LGUI,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_LALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [2] = LAYOUT( // SPECIAL
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      |        |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Y,    CH_U,    CH_I,    CH_O,    CH_P, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | CAPS  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_CAPS,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| N/A    | MOD    | LAYER1 | SPACE  |       | ENTER  | LAYER2 | ALT    | N/A    |
                                   XXXXXXX, KC_LGUI,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_LALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [3] = LAYOUT( // F KEYS, QMK RGB
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      |        |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Y,    CH_U,    CH_I,    CH_O,    CH_P, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | CAPS  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_CAPS,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| N/A    | MOD    | LAYER1 | SPACE  |       | ENTER  | LAYER2 | ALT    | N/A    |
                                   XXXXXXX, KC_LGUI,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_LALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    ),
    [4] = LAYOUT( // MOUSE
    // .-------------------------------------------------------------.       .--------------------------------------------------------------.
    // | ESC   | 1      | 2      | 3      | 4      | 5      |        |       |        | 6      | 7      | 8      | 9      | 0      | <-     |
         KC_ESC,    CH_1,    CH_2,    CH_3,    CH_4,    CH_5, XXXXXXX,         XXXXXXX,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0, KC_BSPC,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | TAB   | Q      | W      | E      | R      | T      |        |       |        | Z      | U      | I      | O      | P      |        |
         KC_TAB,    CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,                              CH_Y,    CH_U,    CH_I,    CH_O,    CH_P, XXXXXXX,
    // |-------+--------+--------+--------+--------+--------|        |       |        |--------+--------+--------+--------+--------+--------|
    // | CAPS  | A      | S      | D      | F      | G      |        |       |        | H      | J      | K      | L      | /      | RSFT   |
        KC_CAPS,    CH_A,    CH_S,    CH_D,    CH_F,    CH_G,                              CH_H,    CH_J,    CH_K,    CH_L, CH_SLSH, KC_RSFT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
    // | LCTL  | Y      | X      | C      | V      | B      | N/A    |       | N/A    | N      | M      | ,      | .      | -      | ENTER  |
        KC_LCTL,    CH_Y,    CH_X,    CH_C,    CH_V,    CH_B, XXXXXXX,         XXXXXXX,    CH_N,    CH_M, CH_COMM,  CH_DOT, CH_MINS,  KC_ENT,
    // |-------+--------+--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------+--------+--------|
                               //| N/A    | MOD    | LAYER1 | SPACE  |       | ENTER  | LAYER2 | ALT    | N/A    |
                                   XXXXXXX, KC_LGUI,   MO(1),  KC_SPC,          KC_ENT,   MO(2), KC_LALT, XXXXXXX
                               //'--------+--------+--------+--------'       '--------+--------+--------+--------'
    )
};

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
//     [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//     [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//     [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//     [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
// };
// #endif
