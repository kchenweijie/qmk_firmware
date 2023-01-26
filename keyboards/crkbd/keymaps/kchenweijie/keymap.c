#include QMK_KEYBOARD_H

///// KEYCODE SHORTHANDS    ////////////////////////////////////////////////////
#define LSFT_A LSFT_T(KC_A)
#define LCTL_S LCTL_T(KC_S)
#define LGUI_D LGUI_T(KC_D)
#define LALT_F LALT_T(KC_F)

#define LALT_J LALT_T(KC_J)
#define RGUI_K RGUI_T(KC_K)
#define RCTL_L RCTL_T(KC_L)
#define RSFT_Q RSFT_T(KC_QUOT)

#define LFUN_E LT(_FUNCTIONS, KC_ESC)
#define LNUM_T LT(_NUMBERS, KC_TAB)
#define LSYM_E LT(_SYMBOLS, KC_ENT)
#define LNAV_B LT(_NAVIGATION, KC_BSPC)

#define _____ KC_NO

///// LAYERS    ////////////////////////////////////////////////////////////////
enum layers {
    _QWERTY,
    _NUMBERS,
    _SYMBOLS,
    _FUNCTIONS,
    _NAVIGATION,
};

///// KEYMAPS   ////////////////////////////////////////////////////////////////
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
      _____,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   _____,
      _____,  LSFT_A, LCTL_S, LGUI_D, LALT_F, KC_G,                       KC_H,   LALT_J, RGUI_K, RCTL_L, RSFT_Q, _____,
      _____,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                       KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,_____,
                                      LFUN_E, LNUM_T, LSYM_E,     KC_SPC, LNAV_B, KC_DEL
  ),

  [_NUMBERS] = LAYOUT_split_3x6_3(
      _____,  _____,  _____,  _____,  _____,  _____,                      KC_GRV, KC_7,   KC_8,   KC_9,   KC_BSLS,_____,
      _____,  KC_LSFT,KC_LCTL,KC_LGUI,KC_LALT,_____,                      KC_LBRC,KC_4,   KC_5,   KC_6,   KC_RBRC,_____,
      _____,  _____,  _____,  _____,  _____,  _____,                       KC_EQL, KC_1,   KC_2,   KC_3,   KC_SCLN,_____,
                                      _____,  KC_TRNS,_____,      KC_MINS,KC_0,   KC_DOT
  ),

  [_SYMBOLS] = LAYOUT_split_3x6_3(
      _____,  _____,  _____,  _____,  _____,  _____,                      KC_TILD,KC_AMPR,KC_ASTR,KC_LPRN,KC_PIPE,_____,
      _____,  KC_LSFT,KC_LCTL,KC_LGUI,KC_LALT,_____,                      KC_LCBR,KC_DLR, KC_PERC,KC_CIRC,KC_RCBR,_____,
      _____,  _____,  _____,  _____,  _____, _____,                       KC_PLUS,KC_EXLM,KC_AT,  KC_HASH,KC_COLN,_____,
                                      _____,  _____,  KC_TRNS,    KC_UNDS,KC_LPRN,KC_RPRN
  ),

  [_FUNCTIONS] = LAYOUT_split_3x6_3(
      _____,  _____,  _____,  _____,  _____,  _____,                      _____,  KC_F7,  KC_F8,  KC_F9,  KC_F12, _____,
      _____,  KC_LSFT,KC_LCTL,KC_LGUI,KC_LALT,_____,                      _____,  KC_F4,  KC_F5,  KC_F6,  KC_F11, _____,
      _____,  _____,  _____,  _____,  _____, _____,                       _____,  KC_F1,  KC_F2,  KC_F3,  KC_F10, _____,
                                      KC_TRNS,_____,  _____,      _____,  _____,  _____
  ),

  [_NAVIGATION] = LAYOUT_split_3x6_3(
      _____,  _____,  _____,  KC_UP,  KC_PGUP,_____,                      _____,  _____,  _____,  _____,  _____,  _____,
      _____,  KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,KC_END,                     KC_CAPS,KC_LALT,KC_RGUI,KC_RCTL,KC_RSFT,_____,
      _____,  _____,  _____,  _____,  KC_PGDN,_____,                      _____,  _____,  _____,  _____,  _____,  _____,
                                      _____,  _____,  _____,       _____, KC_TRNS,_____
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
