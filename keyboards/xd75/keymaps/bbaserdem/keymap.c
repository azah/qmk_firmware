#include "xd75.h"
#include "bbaserdem.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layout
 * ,-----------------------------------------------------------.
 * |Blt|Lck| ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |
 * |---+---+-----------------------------------------------+---|
 * |Int|Trm|                                               |Cps|
 * |---+---|                                               |---|
 * |Clc|Psw|                                               | \ |
 * |---+---|                    PLANCK                     |---|
 * |Rev|Ffw|                                               | [ |
 * |---+---|                                               |---|
 * |Tog|Mut|                                               | ] |
 * `-----------------------------------------------------------'
 */
[_DV] = KM(
    BL_STEP, LGUI(KC_ESC), KC_GRV,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,
    KC_WHOM, LGUI(KC_ENT), DVORAK_1, KC_CAPS,
    KC_CALC, LGUI(KC_P),   DVORAK_2, KC_BSLS,
    KC_MPRV, KC_MNXT,      DVORAK_3, KC_LBRC,
    KC_MPLY, KC_MUTE,      DVORAK_4, KC_RBRC ),

[_AL] = KM(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,
    _______,_______, ALTCHAR_1, _______,
    _______,_______, ALTCHAR_2, _______,
    _______,_______, ALTCHAR_3, _______,
    _______,_______, ALTCHAR_4, _______ ),

[_GA] = KM(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,
    _______,_______, GAME_1, _______,
    _______,_______, GAME_2, _______,
    _______,_______, GAME_3, _______,
    _______,_______, GAME_4, _______ ),

[_NU] = KM(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,
    _______,_______, NUMBERS_1, _______,
    _______,_______, NUMBERS_2, _______,
    _______,_______, NUMBERS_3, _______,
    _______,_______, NUMBERS_4, _______ ),

[_SE] = KM(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,
    _______,_______, SETTINGS_1, _______,
    _______,_______, SETTINGS_2, _______,
    _______,_______, SETTINGS_3, _______,
    _______,_______, SETTINGS_4, _______ ),

[_MO] = KM(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,
    _______,_______, MOUSE_1, _______,
    _______,_______, MOUSE_2, _______,
    _______,_______, MOUSE_3, _______,
    _______,_______, MOUSE_4, _______ ),

#ifdef AUDIO_ENABLE
[_MU] = KM(
    XXX, XXX, MASK,     XXX,
    XXX, XXX, MASK,     XXX,
    XXX, XXX, MASK,     XXX,
    XXX, XXX, MASK,     XXX,
    XXX, XXX, MUSIC_4,  XXX ),
#endif

};
