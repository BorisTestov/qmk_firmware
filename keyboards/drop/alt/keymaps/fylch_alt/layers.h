#pragma once

#include "key_codes.h"
#include "tapdance.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker(
        KC_GRAVE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        TD(TD_CTRL), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_END ,
        TD(TD_SHIFT), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   TD(TD_LAYER_MOD),
        TD(TD_EN), KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, TD(TD_RU),           KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT_65_ansi_blocker(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_SCROLL_LOCK,
        _______, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, _______, _______,_______, _______, _______, _______, _______, KC_PGUP,
        _______, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_PGDN,
        _______, _______, _______, _______, _______, MD_BOOT, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT_65_ansi_blocker(
        _______, TD(TD_BOOKMARK_1), TD(TD_BOOKMARK_2), TD(TD_BOOKMARK_3), TD(TD_BOOKMARK_4), TD(TD_BOOKMARK_5), TD(TD_BOOKMARK_6), TD(TD_BOOKMARK_7), TD(TD_BOOKMARK_8), TD(TD_BOOKMARK_9), TD(TD_BOOKMARK_REMOVE), _______, _______, TD(TD_STOP), _______,
        _______, _______, _______, _______, TD(TD_REPLACE), PYCHARM_TRANSPOSE, PYCHARM_FIND_USAGES, PYCHARM_TOGGLE_CASE, _______, _______, _______, PYCHARM_PREV_TAB, PYCHARM_NEXT_TAB, _______, _______,
        _______, _______, PYCHARM_SETTINGS, PYCHARM_GO_TO_DECLARATION, TD(TD_FIND), _______, TD(TD_HIDE), _______, _______, PYCHARM_REFORMAT, _______, _______,          TD(TD_RUN), _______,
        _______, _______, _______, _______, _______, TD(TD_BREAKPOINT), TD(TD_BREAKPOINT_NAVIGATION), _______, PYCHARM_PREV_CHANGE, PYCHARM_NEXT_CHANGE, PYCHARM_COMMENT, _______,          _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______
    ),
};
