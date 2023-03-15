/* Copyright 2021 Jonavin Eng
 * Copyright 2022 RustyBrakes (ISO conversion)
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

#ifdef RGB_MATRIX_ENABLE

    // Custom RGB Colours
    #define RGB_GODSPEED 0x00, 0xE4, 0xFF // colour for matching keycaps
    #define RGB_NAUTILUS 0x00, 0xA4, 0xA9 // Naurilus Font colours

    // RGB LED locations
    enum led_location_map {
        LED_ESC, // 0, ESC, k13
        LED_GRV, // 1, `, k16
        LED_TAB, // 2, Tab, k11
        LED_CAPS, // 3, Caps, k21
        LED_LSFT, // 4, Sh_L, k00
        LED_LCTL, // 5, Ct_L, k06
        LED_F1, // 6, F1, k26
        LED_1, // 7, 1, k17
        LED_Q, // 8, Q, k10
        LED_A, // 9, A, k12
        LED_Z, // 10, Z, k14
        LED_LWIN, // 11, Win_L, k90
        LED_F2, // 12, F2, k36
        LED_2, // 13, 2, k27
        LED_W, // 14, W, k20
        LED_S, // 15, S, k22
        LED_X, // 16, X, k24
        LED_LALT, // 17, Alt_L, k93
        LED_F3, // 18, F3, k31
        LED_3, // 19, 3, k37
        LED_E, // 20, E, k30
        LED_D, // 21, D, k32
        LED_C, // 22, C, k34
        LED_F4, // 23, F4, k33
        LED_4, // 24, 4, k47
        LED_R, // 25, R, k40
        LED_F, // 26, F, k42
        LED_V, // 27, V, k44
        LED_F5, // 28, F5, k07
        LED_5, // 29, 5, k46
        LED_T, // 30, T, k41
        LED_G, // 31, G, k43
        LED_B, // 32, B, k45
        LED_SPC, // 33, SPACE, k94
        LED_F6, // 34, F6, k63
        LED_6, // 35, 6, k56
        LED_Y, // 36, Y, k51
        LED_H, // 37, H, k53
        LED_N, // 38, N, k55
        LED_F7, // 39, F7, k71
        LED_7, // 40, 7, k57
        LED_U, // 41, U, k50
        LED_J, // 42, J, k52
        LED_M, // 43, M, k54
        LED_F8, // 44, F8, k76
        LED_8, // 45, 8, k67
        LED_I, // 46, I, k60
        LED_K, // 47, K, k62
        LED_COMM, // 48, ,, k64
        LED_RALT, // 49, Alt_R, k95
        LED_F9, // 50, F9, ka6
        LED_9, // 51, 9, k77
        LED_O, // 52, O, k70
        LED_L, // 53, L, k72
        LED_DOT, // 54, ., k74
        LED_FN, // 55, FN, k92
        LED_F10, // 56, F10, ka7
        LED_0, // 57, 0, k87
        LED_P, // 58, P, k80
        LED_SCLN, // 59, ;, k82
        LED_SLSH, // 60, /, k85
        LED_F11, // 61, F11, ka3
        LED_MINS, // 62, -, k86
        LED_LBRC, // 63, [, k81
        LED_QUOT, // 64, ", k83
        LED_RCTL, // 65, Ct_R, k04
        LED_F12, // 66, F12, ka5
        LED_BSLS, // 67, \, k23
        LED_L1, // 68, LED, l01
        LED_R1, // 69, LED, l11
        LED_PRT, // 70, Prt, k97
        LED_L2, // 71, LED, l02
        LED_R2, // 72, LED, l12
        LED_DEL, // 73, Del, k65
        LED_L3, // 74, LED, l03
        LED_R3, // 75, LED, l13
        LED_PGUP, // 76, PgUp, k15
        LED_L4, // 77, LED, l04
        LED_R4, // 78, LED, l14
        LED_EQL, // 79, =, k66
        LED_RIGHT, // 80, Right, k05
        LED_L5, // 81, LED, l05
        LED_R5, // 82, LED, l15
        LED_END, // 83, End, k75
        LED_L6, // 84, LED, l06
        LED_R6, // 85, LED, l16
        LED_BSPC, // 86, BSpc, ka1
        LED_PGDN, // 87, PgDn, k25
        LED_L7, // 88, LED, l07
        LED_R7, // 89, LED, l17
        LED_RBRC, // 90, ], k61
        LED_RSFT, // 91, Sh_R, k91
        LED_L8, // 92, LED, l08
        LED_R8, // 93, LED, l18
        LED_UP, // 94, Up, k35
        LED_HASH, // 95, #, k84
        LED_LEFT, // 96, Left, k03
        LED_ENT, // 97, Enter, ka4
        LED_DOWN // 98, Down, k73
    };

    const uint8_t LED_LIST_WASD[] = { LED_W, LED_A, LED_S, LED_D };

    const uint8_t LED_LIST_ARROWS[] = { LED_LEFT, LED_RIGHT, LED_UP, LED_DOWN };

    const uint8_t LED_LIST_FUNCROW[] = { LED_ESC, LED_F1, LED_F2, LED_F3, LED_F4, LED_F5, LED_F6, LED_F7, LED_F8, LED_F9, LED_F10, LED_F11, LED_F12, LED_PRT};

    const uint8_t LED_LIST_NUMROW[] = { LED_GRV, LED_1, LED_2, LED_3, LED_4, LED_5, LED_6, LED_7, LED_8, LED_9, LED_0, LED_MINS, LED_EQL, LED_BSPC, LED_DEL};

    const uint8_t LED_LIST_NUMPAD[] = {
        LED_7, LED_8, LED_9,
        LED_U, LED_I, LED_O,
        LED_J, LED_K, LED_L,
        LED_M, LED_COMM, LED_DOT
        };

    const uint8_t LED_SIDE_LEFT[] = { LED_L1, LED_L2, LED_L3, LED_L4, LED_L5, LED_L6, LED_L7, LED_L8};

    const uint8_t LED_SIDE_RIGHT[] = { LED_R1, LED_R2, LED_R3, LED_R4, LED_R5, LED_R6, LED_R7, LED_R8};

    const uint8_t LED_CAPS_MODIFIERS[] = {
        LED_LSFT, LED_RSFT, LED_CAPS
    };

#endif
