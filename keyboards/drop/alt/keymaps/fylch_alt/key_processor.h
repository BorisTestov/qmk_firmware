#pragma once

#include "key_codes.h"
#include "utils.h"

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LEFT_SHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case PYCHARM_COMMENT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_TAP(X_SLASH)));
            }
            return false;
        case PYCHARM_PREV_TAB:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_LEFT)));
            }
            return false;
        case PYCHARM_NEXT_TAB:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_RIGHT)));
            }
            return false;
        case PYCHARM_PREV_CHANGE:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_LEFT))));
            }
            return false;
        case PYCHARM_NEXT_CHANGE:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_RIGHT))));
            }
            return false;
        case PYCHARM_REFORMAT:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_L))));
            }
            return false;
        case PYCHARM_TOGGLE_CASE:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_LCTL(SS_TAP(X_U))));
            }
            return false;
        case PYCHARM_FIND_USAGES:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_F7)));
            }
            return false;
        case PYCHARM_SETTINGS:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LALT(SS_TAP(X_S))));
            }
            return false;
        case PYCHARM_GO_TO_DECLARATION:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_TAP(X_B)));
            }
            return false;
        default:
            return true;
    }
}
