#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _GAMING 1
#define _NUMBERS 2
#define _SYMBOLS 3
#define _FUNCTIONS 4
#define _NAVIGATION 5
#define _GAMING_NUMS 6
#define _GAMING_FNS 7

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    GAMING,
    NUMBERS,
    SYMBOLS,
    FUNCTIONS,
    NAVIGATION,
    GAMING_NUMS,
    GAMING_FNS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[_QWERTY]      = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, LSFT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LALT_T(KC_F), KC_G, KC_H, LALT_T(KC_J), RGUI_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_QUOT), KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(_FUNCTIONS, KC_ESC), LT(_NUMBERS, KC_TAB), LT(_SYMBOLS, KC_ENT), KC_SPC, LT(_NAVIGATION, KC_BSPC), KC_DEL),
                                                              [_GAMING]      = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(_GAMING_FNS), KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_LALT, KC_SPC, MO(_GAMING_NUMS), KC_NO, MO(_NAVIGATION), KC_NO),
                                                              [_NUMBERS]     = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_7, KC_8, KC_9, KC_BSLS, KC_NO, KC_NO, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_LBRC, KC_4, KC_5, KC_6, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_1, KC_2, KC_3, KC_SCLN, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MINS, KC_0, KC_DOT),
                                                              [_SYMBOLS]     = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_AMPR, KC_ASTR, KC_LPRN, KC_PIPE, KC_NO, KC_NO, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_LCBR, KC_DLR, KC_PERC, KC_CIRC, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_EXLM, KC_AT, KC_HASH, KC_COLN, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_UNDS, KC_LPRN, KC_RPRN),
                                                              [_FUNCTIONS]   = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_NO, KC_NO, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [_NAVIGATION]  = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(_GAMING), KC_NO, KC_NO, KC_NO, KC_UP, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_CAPS, KC_LALT, KC_RGUI, KC_RCTL, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),
                                                              [_GAMING_NUMS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
                                                              [_GAMING_FNS]  = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    return false;
}
