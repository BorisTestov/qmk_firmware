#pragma once

#include "alt_config.h"
#include "utils.h"

enum {
    TD_CTRL,
    TD_EN,
    TD_RU,
    TD_SHIFT,
    TD_LAYER_MOD,
    TD_BOOKMARK_1,
    TD_BOOKMARK_2,
    TD_BOOKMARK_3,
    TD_BOOKMARK_4,
    TD_BOOKMARK_5,
    TD_BOOKMARK_6,
    TD_BOOKMARK_7,
    TD_BOOKMARK_8,
    TD_BOOKMARK_9,
    TD_BOOKMARK_REMOVE,
    TD_RUN,
    TD_FIND,
    TD_REPLACE,
    TD_HIDE,
    TD_BREAKPOINT,
    TD_BREAKPOINT_NAVIGATION,
    TD_STOP,
};

void td_en_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_8))));
        set_en_colors();
    } else if (state->count == 2) {
        SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_7))));
        set_gr_colors();
    }
}

void td_ru_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_9))));
        set_ru_colors();
    } else if (state->count == 2) {
        SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_7))));
        set_gr_colors();
    }
}

void td_layer_mod_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        // We're not saving momentary layers, only persistent layers
        change_effect_color(alt_config.layer_hue[1]);
        layer_on(1);
    } else if (state->count == 2) {
        if (alt_config.current_layer == 0)
        {
            change_layer(2);
        }
        else
        {
            change_layer(0);
        }
        layer_invert(2);
    }
}

void td_layer_mod_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_off(1);
        if (alt_config.current_layer == 2) {
            layer_invert(2);
        }
        change_layer(0);
    }
}

void td_bookmark_1_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_1)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_1))));
    }
}

void td_bookmark_2_finished(tap_dance_state_t *state, void *user_data) {
   if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_2)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_2))));
    }
}

void td_bookmark_3_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_3)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_3))));
    }
}

void td_bookmark_4_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_4)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_4))));
    }
}

void td_bookmark_5_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_5)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_5))));
    }
}

void td_bookmark_6_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_6)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_6))));
    }
}

void td_bookmark_7_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_7)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_7))));
    }
}

void td_bookmark_8_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_8)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_8))));
    }
}

void td_bookmark_9_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_9)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_9))));
    }
}


void td_bookmark_remove_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        SEND_STRING(SS_TAP(X_F11));
    }
}

void td_run_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LSFT(SS_TAP(X_F10)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LSFT(SS_TAP(X_F9)));
    }
}

void td_find_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_F))));
    }
}

void td_replace_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_R)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_R))));
    }
}

void td_hide_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LSFT(SS_TAP(X_ESC)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_F12))));
    }
}

void td_breakpoint_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F8)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_TAP(X_F8)))));
    }
}

void td_breakpoint_navigation_finished(tap_dance_state_t *state, void *user_) {
    if (state->count == 1) {
        SEND_STRING(SS_TAP(X_F9));
    } else if (state->count == 2) {
        SEND_STRING(SS_TAP(X_F8));
    }
}

void td_stop_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F2)));
    } else if (state->count == 2) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_F2))));
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_CTRL] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_ESC),
    [TD_EN] = ACTION_TAP_DANCE_FN(td_en_finished),
    [TD_RU] = ACTION_TAP_DANCE_FN(td_ru_finished),
    [TD_SHIFT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS_LOCK),
    [TD_LAYER_MOD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_layer_mod_finished, td_layer_mod_reset),
    [TD_BOOKMARK_1] = ACTION_TAP_DANCE_FN(td_bookmark_1_finished),
    [TD_BOOKMARK_2] = ACTION_TAP_DANCE_FN(td_bookmark_2_finished),
    [TD_BOOKMARK_3] = ACTION_TAP_DANCE_FN(td_bookmark_3_finished),
    [TD_BOOKMARK_4] = ACTION_TAP_DANCE_FN(td_bookmark_4_finished),
    [TD_BOOKMARK_5] = ACTION_TAP_DANCE_FN(td_bookmark_5_finished),
    [TD_BOOKMARK_6] = ACTION_TAP_DANCE_FN(td_bookmark_6_finished),
    [TD_BOOKMARK_7] = ACTION_TAP_DANCE_FN(td_bookmark_7_finished),
    [TD_BOOKMARK_8] = ACTION_TAP_DANCE_FN(td_bookmark_8_finished),
    [TD_BOOKMARK_9] = ACTION_TAP_DANCE_FN(td_bookmark_9_finished),
    [TD_BOOKMARK_REMOVE] = ACTION_TAP_DANCE_FN(td_bookmark_remove_finished),
    [TD_RUN] = ACTION_TAP_DANCE_FN(td_run_finished),
    [TD_FIND] = ACTION_TAP_DANCE_FN(td_find_finished),
    [TD_REPLACE] = ACTION_TAP_DANCE_FN(td_replace_finished),
    [TD_HIDE] = ACTION_TAP_DANCE_FN(td_hide_finished),
    [TD_BREAKPOINT] = ACTION_TAP_DANCE_FN(td_breakpoint_finished),
    [TD_BREAKPOINT_NAVIGATION] = ACTION_TAP_DANCE_FN(td_breakpoint_navigation_finished),
    [TD_STOP] = ACTION_TAP_DANCE_FN(td_stop_finished),
};
