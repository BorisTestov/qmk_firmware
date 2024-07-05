#include QMK_KEYBOARD_H

#include "alt_config.h"
#include "key_codes.h"
#include "key_processor.h"
#include "layers.h"
#include "tapdance.h"
#include "utils.h"

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

void keyboard_post_init_kb(void) {
    if (!rgb_matrix_is_enabled()) {
        rgb_matrix_enable();
    }

    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER);
    rgb_matrix_set_color_all(0, 0, 0);

    change_layer(0);
}
