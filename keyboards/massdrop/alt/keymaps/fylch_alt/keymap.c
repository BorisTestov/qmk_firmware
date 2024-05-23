#include QMK_KEYBOARD_H

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    MD_BOOT,               //Restart into bootloader after hold timeout
	EN,
	RU
};

typedef union {
    uint32_t raw;
    struct {
        uint8_t rgb_mode :8;
    };
} alt_config_t;

alt_config_t alt_config;

// Tap Dance declarations
enum {
    TD_CTRL,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CTRL] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_VOLU,
        TD(TD_CTRL), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_VOLD ,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   MO(1),
        EN, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, RU,           KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_65_ansi_blocker(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_PSCR,
        _______, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, _______, _______,_______, _______, _______, _______, _______, KC_SLCK,
        _______, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, U_T_AUTO, U_T_AGCR, _______, _______, _______,          _______, KC_PAUSE,
        _______, _______, _______, _______, _______, MD_BOOT, _______, _______, _______, _______, _______, _______,          KC_PGUP, _______,
        _______, _______, _______,                            _______,                            _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______
    ),
    */
};

void set_led_colors_in_range(unsigned char start_led, unsigned char end_led,  unsigned char r, unsigned char g, unsigned char b)
{
	for (int i = start_led; i <= end_led; ++i)
	{
		rgb_matrix_set_color(i, r,g,b);
	}
}

// Keyboard post initialization
void keyboard_post_init_kb(void) {
    // Set pre-configured RGB mode
    alt_config.raw = eeconfig_read_user();
	rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER);
    rgb_matrix_set_color_all(0, 0, 0);
    // Fix usb hub on both type c
    TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
    // Fix usb power
    TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
}

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
		case RU:
             if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("9")));
				set_led_colors_in_range(67, 105, 255,0,0);
            }
            return false;
        case EN:
             if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("8")));
				set_led_colors_in_range(67, 105, 0,0,255);
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}