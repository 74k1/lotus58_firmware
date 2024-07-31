#pragma once
#include "keycodes.h"

// Aliases
#define MC_SECT KC_NUBS // KC_GRV  // §
#define MC_1    KC_1    // 1
#define MC_2    KC_2    // 2
#define MC_3    KC_3    // 3
#define MC_4    KC_4    // 4
#define MC_5    KC_5    // 5
#define MC_6    KC_6    // 6
#define MC_7    KC_7    // 7
#define MC_8    KC_8    // 8
#define MC_9    KC_9    // 9
#define MC_0    KC_0    // 0
#define MC_QUOT KC_MINS // '
#define MC_CIRC KC_EQL  // ^ (dead)
#define MC_Q    KC_Q    // Q
#define MC_W    KC_W    // W
#define MC_E    KC_E    // E
#define MC_R    KC_R    // R
#define MC_T    KC_T    // T
#define MC_Z    KC_Y    // Z
#define MC_U    KC_U    // U
#define MC_I    KC_I    // I
#define MC_O    KC_O    // O
#define MC_P    KC_P    // P
#define MC_UDIA KC_LBRC // ü
#define MC_DIAE KC_RBRC // ¨ (dead)
#define MC_A    KC_A    // A
#define MC_S    KC_S    // S
#define MC_D    KC_D    // D
#define MC_F    KC_F    // F
#define MC_G    KC_G    // G
#define MC_H    KC_H    // H
#define MC_J    KC_J    // J
#define MC_K    KC_K    // K
#define MC_L    KC_L    // L
#define MC_ODIA KC_SCLN // ö
#define MC_ADIA KC_QUOT // ä
#define MC_DLR  KC_NUHS // $
#define MC_LABK KC_GRV  // KC_NUBS // <
#define MC_Y    KC_Z    // Y
#define MC_X    KC_X    // X
#define MC_C    KC_C    // C
#define MC_V    KC_V    // V
#define MC_B    KC_B    // B
#define MC_N    KC_N    // N
#define MC_M    KC_M    // M
#define MC_COMM KC_COMM // ,
#define MC_DOT  KC_DOT  // .
#define MC_MINS KC_SLSH // -
#define MC_DEG  S(MC_SECT) // °
#define MC_PLUS S(MC_1)    // +
#define MC_DQUO S(MC_2)    // "
#define MC_ASTR S(MC_3)    // *
#define MC_CCED S(MC_4)    // ç
#define MC_PERC S(MC_5)    // %
#define MC_AMPR S(MC_6)    // &
#define MC_SLSH S(MC_7)    // /
#define MC_LPRN S(MC_8)    // (
#define MC_RPRN S(MC_9)    // )
#define MC_EQL  S(MC_0)    // =
#define MC_QUES S(MC_QUOT) // ?
#define MC_GRV  S(MC_CIRC) // ` (dead)
#define MC_EGRV S(MC_UDIA) // è
#define MC_EXLM S(MC_DIAE) // !
#define MC_EACU S(MC_ODIA) // é
#define MC_AGRV S(MC_ADIA) // à
#define MC_PND  S(MC_DLR)  // £
#define MC_RABK S(MC_LABK) // >
#define MC_SCLN S(MC_COMM) // ;
#define MC_COLN S(MC_DOT)  // :
#define MC_UNDS S(MC_MINS) // _
#define MC_FI   A(MC_SECT) // ﬁ
#define MC_PLMN A(MC_1)    // ±
#define MC_RDQU A(MC_2)    // “
#define MC_HASH A(MC_3)    // #
#define MC_CCCE A(MC_4)    // Ç
#define MC_LBRC A(MC_5)    // [
#define MC_RBRC A(MC_6)    // ]
#define MC_PIPE A(MC_7)    // |
#define MC_LCBR A(MC_8)    // {
#define MC_RCBR A(MC_9)    // }
#define MC_NEQL A(MC_0)    // ≠
#define MC_IQUE A(MC_QUOT) // ¿
#define MC_ACUT A(MC_CIRC) // ´ (dead)
#define MC_AT   A(MC_G)    // @
#define MC_TILD A(MC_N)    // ~ (dead)
#define MC_BSLS S(A(MC_7)) // (backslash)
