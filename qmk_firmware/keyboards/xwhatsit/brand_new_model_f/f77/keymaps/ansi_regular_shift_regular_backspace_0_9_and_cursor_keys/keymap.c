/* Copyright 2020 Purdea Andrei
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
#include QMK_KEYBOARD_H

#define UNICODE_SELECTED_MODES UC_OSX
// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _FN2,
    _FN3,
    _FN4
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_ansi_regular_shift_regular_backspace(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, KC_PSCR, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_ESC, TT(3), TT(2), KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_HOME, KC_INS, KC_PGUP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_END, KC_UP, KC_PGDN, TT(4), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, TT(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
    [_FN] = LAYOUT_ansi_regular_shift_regular_backspace(UC(0x233B), UC(0x00A8), UC(0x00AF), KC_LT, UC(0x2264), KC_PEQL, UC(0x2265), KC_GT, UC(0x2260), UC(0x8744), UC(0x2227), KC_PLUS, UC(0x00D7), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x003F), UC(0x03C9), UC(0x03F5), UC(0x03C1), UC(0x223C), UC(0x2191), UC(0x2193), UC(0x03B9), UC(0x25CB), UC(0x22C6), UC(0x2190), UC(0x2337), UC(0x2261), KC_NO, KC_TRNS, KC_NO, KC_NO, UC(0x03B1), UC(0x2308), UC(0x230A), UC(0x2015), UC(0x2207), UC(0x2206), UC(0x2218), KC_QUOT, UC(0x2395), KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x2282), UC(0x2283), UC(0x2229), UC(0x222A), UC(0x22A5), UC(0x22A4), UC(0x2223), KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
    [_FN2] = LAYOUT_ansi_regular_shift_regular_backspace(UC(0x2342), UC(0x2336), UC(0x236B), UC(0x2352), UC(0x234B), UC(0x233D), UC(0x2349), UC(0x29B5), UC(0x23F5), UC(0x2371), UC(0x2372), KC_EXLM, UC(0x2339), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x235E), UC(0x2359), UC(0x2235), KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x234E), UC(0x2355), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x235D), UC(0x2340), UC(0x233F), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
    [_FN3] = LAYOUT_ansi_regular_shift_regular_backspace(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, UC(0x00F7), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UC(0x2192), UC(0x2378), UC(0x2377), KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_COLN, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [_FN4] = LAYOUT_ansi_regular_shift_regular_backspace(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

// TODO: on orginal keymap Fn + numpad7 = KC_INSERT, not KC_HOME. Should I change it here?

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
