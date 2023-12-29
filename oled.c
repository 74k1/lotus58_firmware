/*
 * Copyright 2023 @74k1
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
 *
 */

#include QMK_KEYBOARD_H

// OLED

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) { // main
        return OLED_ROTATION_270;
    } else { // offhand
        return OLED_ROTATION_180;
    }
}

void oled_render_led_state(void) {
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    //oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("     "), false);
    oled_write_P(led_state.caps_lock ? PSTR("[CAP]") : PSTR("     "), false);
    //oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("     "), false);
}

void oled_render_layer_state_main(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("[NOR]"), false);
            break;
        case 1:
            oled_write_P(PSTR("[012]"), false);
            break;
        case 2:
            oled_write_P(PSTR("[#!?]"), false);
            break;
        case 3:
            oled_write_P(PSTR("[FKE]"), false);
            break;
        case 4:
            oled_write_P(PSTR("[MOU]"), false);
            break;
        case 5:
            oled_write_P(PSTR("[GAM]"), false);
            break;
        default:
            oled_write_P(PSTR("[ ? ]"), false);
    }
}

// static void render_default_logo(void) {
//     static const char PROGMEM qmk_default_logo[] = {
//         128, 129, 130, 131, 132,
//         160, 161, 162, 163, 164,
//         192, 193, 194, 195, 196, 0
//     };
//     oled_write_P(qmk_default_logo, false);
// }

static void render_logo(void) {
    static const char PROGMEM qmk_default_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_write_P(qmk_default_logo, false);
}

// static void render_mac_logo(void) {
//     static const char PROGMEM qmk_logo[] = {
//         32, 134, 135, 136, 137,
//         32, 166, 167, 168, 169,
//         32, 198, 199, 200, 201, 0
//     };
//     oled_write_P(qmk_logo, false);
// }
//
// static void render_first_logo(void) {
//     static const char PROGMEM qmk_first_logo[] = {
//         32, 138, 139, 140, 141,
//         32, 170, 171, 172, 173,
//         32, 202, 203, 204, 205, 0
//     };
//     oled_write_P(qmk_first_logo, false);
// }
//
// static void render_second_logo(void) {
//     static const char PROGMEM qmk_second_logo[] = {
//         32, 143, 144, 145, 146,
//         32, 175, 176, 177, 178,
//         32, 207, 208, 209, 210, 0
//     };
//     oled_write_P(qmk_second_logo, false);
// }
//
// static void render_third_logo(void) {
//     static const char PROGMEM qmk_third_logo[] = {
//         32, 148, 149, 150, 151,
//         32, 180, 181, 182, 183,
//         32, 212, 213, 214, 215, 0
//     };
//     oled_write_P(qmk_third_logo, false);
// }
//
// static void render_fourth_logo(void) {
//     static const char PROGMEM qmk_fourth_logo[] = {
//         32, 153, 154, 155, 156,
//         32, 182, 183, 187, 188,
//         32, 217, 218, 219, 220, 0
//     };
//     oled_write_P(qmk_fourth_logo, false);
// }
//
// void oled_render_layer_state(void) {
//     switch (get_highest_layer(layer_state)) {
//         case 0:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_default_logo();
//             break;
//         case 1:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_first_logo();
//             break;
//         case 2:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_second_logo();
//             break;
//         case 3:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_third_logo();
//             break;
//         case 4:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_fourth_logo();
//             break;
//         case 5:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_third_logo();
//             break;
//         case 6:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             render_fourth_logo();
//             break;
//         default:
//             oled_write_P(PSTR("\n\n\n\n\n\n"), false);
//             oled_write_P(PSTR("  ?  \n\n"), false);
//     }
// }

//static void print_status_narrow(void) {
//    // Create OLED content
//    oled_write_P(PSTR("\n"), false);
//    oled_write_P(PSTR(""), false);
//    oled_write_P(PSTR("Lotus -58-"), false);
//    oled_write_P(PSTR("\n"), false);
//
//    // Print current layer
//    oled_write_P(PSTR("Layer"), false);
//    switch (get_highest_layer(layer_state)) {
//        case 0:
//            oled_write_P(PSTR("-Base\n"), false);
//            break;
//        case 1:
//            oled_write_P(PSTR("-Num \n"), false);
//            break;
//        case 2:
//            oled_write_P(PSTR("-Func\n"), false);
//            break;
//        case 3:
//            oled_write_P(PSTR("-Sys \n"), false);
//            break;
//        default:
//            oled_write_P(PSTR("Undef"), false);
//    }
//    oled_write_P(PSTR("\n"), false);
//    led_t led_usb_state = host_keyboard_led_state();
//    oled_write_ln_P(PSTR("Caps- lock"), led_usb_state.caps_lock);
//}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // oled_write_P(PSTR("\n\n\n\n\n"), false);
        // oled_write_P(PSTR("-----"), false);
        oled_render_layer_state_main();
        // oled_write(get_u8_str(get_current_wpm(), '0'), false);
        // oled_write_P(PSTR("-----"), false);
        oled_render_led_state();
    } else {
        // oled_write_P(PSTR("\n\n\n\n\n"), false);
        // render_default_logo();
        // oled_write_P(PSTR("\nLOTUS"), false);
        render_logo();
    }
    return false;
}
#endif
