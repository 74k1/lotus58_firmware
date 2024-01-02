/* Copyright 2021-2022 TweetyDaBird, Marius Renner
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "lotus58.h"

#ifdef RGB_MATRIX_ENABLE

#define LED_MATRIX_CENTER {110, 21}

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 5,  4,  3,  2,  1,  0},
        { 6,  7,  8,  9, 10, 11},
        {17, 16, 15, 14, 13, 12},
        {18, 19, 20, 21, 22, 23},
    {NO_LED, 28, 27, 26, 25, 24},

                                        {34, 33, 32, 31, 30, 29},
                                        {35, 36, 37, 38, 39, 40},
                                        {46, 45, 44, 43, 42, 41},
                                        {47, 48, 49, 50, 51, 52},
                                {NO_LED, 57, 56, 55, 54, 53}
    }, {
        // LED Index to Physical Position
        // The default expected range of values for `{ x, y }` is the inclusive range `{ 0..224, 0..64 }`
        // 224 / (14 real cols + 6 cols as buffer) ~= 11 per col
        // 64 / (5 real rows + 1 row as buffer) ~= 10 per row

        // Left half
        { 55,  2}, { 44,  1}, { 33,  0}, { 22,  1}, { 11,  3}, {  0,  4},
        {  0, 14}, { 11, 13}, { 22, 11}, { 33, 10}, { 44, 11}, { 55, 12},
        { 55, 22}, { 44, 21}, { 33, 20}, { 22, 21}, { 11, 23}, {  0, 24},
        {  0, 34}, { 11, 33}, { 22, 31}, { 33, 30}, { 44, 31}, { 55, 32},
        { 70, 27}, { 66, 40}, { 50, 42}, { 39, 41} ,{ 28, 40}, // bottom row, right to left, far outer right key is first

        // Right half
        {165, 2}, {176, 1}, {187, 0}, {198, 1}, {209, 3}, {220, 4},
        {220, 14}, {209, 13}, {198, 11}, {187, 10}, {176, 11}, {165, 12},
        {165, 22}, {176, 21}, {187, 20}, {198, 21}, {209, 23}, {220, 24},
        {220, 34}, {209, 33}, {198, 31}, {187, 30}, {176, 31}, {165, 32},
        {150, 27}, {154, 40}, {170, 42}, {181, 41}, {192, 40}, // bottom row, left to right, far outer left key is first
    }, {
        // LED Index to Flag
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4,

        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4
    }
};

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif

// #pragma once
//
// void save_rgb_config(void) {
//     #ifdef RGBLIGHT_ENABLE
//         RGB_current_config.enable = rgblight_config.enable;
//         RGB_current_config.mode   = rgblight_get_mode();
//         RGB_current_config.speed  = rgblight_get_speed();
//         RGB_current_config.hue    = rgblight_get_hue();
//         RGB_current_config.sat    = rgblight_get_sat();
//         RGB_current_config.val    = rgblight_get_val();
//     #elif RGB_MATRIX_ENABLE
//         RGB_current_config.enable = rgb_matrix_config.enable;
//         RGB_current_config.mode   = rgb_matrix_get_mode();
//         RGB_current_config.speed  = rgb_matrix_config.speed;
//         RGB_current_config.hsv    = rgb_matrix_config.hsv;
//     #endif
// }
//
// void restore_rgb_config(void) {
//     #ifdef RGBLIGHT_ENABLE
//         rgblight_set_speed_noeeprom(RGB_current_config.speed);
//         if (rgblight_config.mode != RGB_current_config.mode) {
//             rgblight_mode_noeeprom(RGB_current_config.mode);
//         }
//         if ((RGB_current_config.hue != rgblight_config.hue) || (RGB_current_config.sat != rgblight_config.sat) || (RGB_current_config.val != rgblight_config.val)) {
//             rgblight_sethsv_noeeprom(RGB_current_config.hue, RGB_current_config.sat, RGB_current_config.val);
//         }
//         if (rgblight_config.enable) {
//             rgblight_enable_noeeprom();
//         } else {
//             rgblight_disable_noeeprom();
//         }
//     #elif RGB_MATRIX_ENABLE
//         rgb_matrix_config.speed   = RGB_current_config.speed;
//         if (rgb_matrix_config.mode != RGB_current_config.mode) {
//             rgb_matrix_mode_noeeprom(RGB_current_config.mode);
//         }
//         if ((RGB_current_config.hsv.h != rgb_matrix_config.hsv.h) || (RGB_current_config.hsv.s != rgb_matrix_config.hsv.s) || (RGB_current_config.hsv.v != rgb_matrix_config.hsv.v)) {
//             rgb_matrix_sethsv_noeeprom(RGB_current_config.hsv.h, RGB_current_config.hsv.s, RGB_current_config.hsv.v);
//         }
//         if (rgb_matrix_config.enable) {
//             rgb_matrix_enable_noeeprom();
//         } else {
//             rgb_matrix_disable_noeeprom();
//         }
//     #endif
// }
//
// void rgb_by_layer(int layer) {
//     #ifdef RGBLIGHT_ENABLE
//         rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
//     #elif RGB_MATRIX_ENABLE
//         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//     #endif
//
//     switch (layer) {
//         case 0:
//             rgblight_sethsv_noeeprom(187, 234, 211);
//             break;
//         default:
//             rgblight_sethsv_noeeprom(187, 234, 211);
//     }
// }
