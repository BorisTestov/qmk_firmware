// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
// clang-format off

enum qk_keycode_ranges {
// Ranges
    QK_BASIC                       = 0x0000,
    QK_BASIC_MAX                   = 0x00FF,
    QK_MODS                        = 0x0100,
    QK_MODS_MAX                    = 0x1FFF,
    QK_MOD_TAP                     = 0x2000,
    QK_MOD_TAP_MAX                 = 0x3FFF,
    QK_LAYER_TAP                   = 0x4000,
    QK_LAYER_TAP_MAX               = 0x4FFF,
    QK_LAYER_MOD                   = 0x5000,
    QK_LAYER_MOD_MAX               = 0x51FF,
    QK_TO                          = 0x5200,
    QK_TO_MAX                      = 0x521F,
    QK_MOMENTARY                   = 0x5220,
    QK_MOMENTARY_MAX               = 0x523F,
    QK_DEF_LAYER                   = 0x5240,
    QK_DEF_LAYER_MAX               = 0x525F,
    QK_TOGGLE_LAYER                = 0x5260,
    QK_TOGGLE_LAYER_MAX            = 0x527F,
    QK_ONE_SHOT_LAYER              = 0x5280,
    QK_ONE_SHOT_LAYER_MAX          = 0x529F,
    QK_ONE_SHOT_MOD                = 0x52A0,
    QK_ONE_SHOT_MOD_MAX            = 0x52BF,
    QK_LAYER_TAP_TOGGLE            = 0x52C0,
    QK_LAYER_TAP_TOGGLE_MAX        = 0x52DF,
    QK_SWAP_HANDS                  = 0x5600,
    QK_SWAP_HANDS_MAX              = 0x56FF,
    QK_TAP_DANCE                   = 0x5700,
    QK_TAP_DANCE_MAX               = 0x57FF,
    QK_MAGIC                       = 0x7000,
    QK_MAGIC_MAX                   = 0x70FF,
    QK_MIDI                        = 0x7100,
    QK_MIDI_MAX                    = 0x71FF,
    QK_SEQUENCER                   = 0x7200,
    QK_SEQUENCER_MAX               = 0x73FF,
    QK_JOYSTICK                    = 0x7400,
    QK_JOYSTICK_MAX                = 0x743F,
    QK_PROGRAMMABLE_BUTTON         = 0x7440,
    QK_PROGRAMMABLE_BUTTON_MAX     = 0x747F,
    QK_AUDIO                       = 0x7480,
    QK_AUDIO_MAX                   = 0x74BF,
    QK_STENO                       = 0x74C0,
    QK_STENO_MAX                   = 0x74FF,
    QK_MACRO                       = 0x7700,
    QK_MACRO_MAX                   = 0x777F,
    QK_LIGHTING                    = 0x7800,
    QK_LIGHTING_MAX                = 0x78FF,
    QK_QUANTUM                     = 0x7C00,
    QK_QUANTUM_MAX                 = 0x7DFF,
    QK_KB                          = 0x7E00,
    QK_KB_MAX                      = 0x7EFF,
    QK_USER                        = 0x7F00,
    QK_USER_MAX                    = 0x7FFF,
    QK_UNICODE                     = 0x8000,
    QK_UNICODE_MAX                 = 0xFFFF,
};

enum qk_keycode_defines {
// Keycodes
    KC_NO = 0x0000,
    KC_TRANSPARENT = 0x0001,
    KC_A = 0x0004,
    KC_B = 0x0005,
    KC_C = 0x0006,
    KC_D = 0x0007,
    KC_E = 0x0008,
    KC_F = 0x0009,
    KC_G = 0x000A,
    KC_H = 0x000B,
    KC_I = 0x000C,
    KC_J = 0x000D,
    KC_K = 0x000E,
    KC_L = 0x000F,
    KC_M = 0x0010,
    KC_N = 0x0011,
    KC_O = 0x0012,
    KC_P = 0x0013,
    KC_Q = 0x0014,
    KC_R = 0x0015,
    KC_S = 0x0016,
    KC_T = 0x0017,
    KC_U = 0x0018,
    KC_V = 0x0019,
    KC_W = 0x001A,
    KC_X = 0x001B,
    KC_Y = 0x001C,
    KC_Z = 0x001D,
    KC_1 = 0x001E,
    KC_2 = 0x001F,
    KC_3 = 0x0020,
    KC_4 = 0x0021,
    KC_5 = 0x0022,
    KC_6 = 0x0023,
    KC_7 = 0x0024,
    KC_8 = 0x0025,
    KC_9 = 0x0026,
    KC_0 = 0x0027,
    KC_ENTER = 0x0028,
    KC_ESCAPE = 0x0029,
    KC_BACKSPACE = 0x002A,
    KC_TAB = 0x002B,
    KC_SPACE = 0x002C,
    KC_MINUS = 0x002D,
    KC_EQUAL = 0x002E,
    KC_LEFT_BRACKET = 0x002F,
    KC_RIGHT_BRACKET = 0x0030,
    KC_BACKSLASH = 0x0031,
    KC_NONUS_HASH = 0x0032,
    KC_SEMICOLON = 0x0033,
    KC_QUOTE = 0x0034,
    KC_GRAVE = 0x0035,
    KC_COMMA = 0x0036,
    KC_DOT = 0x0037,
    KC_SLASH = 0x0038,
    KC_CAPS_LOCK = 0x0039,
    KC_F1 = 0x003A,
    KC_F2 = 0x003B,
    KC_F3 = 0x003C,
    KC_F4 = 0x003D,
    KC_F5 = 0x003E,
    KC_F6 = 0x003F,
    KC_F7 = 0x0040,
    KC_F8 = 0x0041,
    KC_F9 = 0x0042,
    KC_F10 = 0x0043,
    KC_F11 = 0x0044,
    KC_F12 = 0x0045,
    KC_PRINT_SCREEN = 0x0046,
    KC_SCROLL_LOCK = 0x0047,
    KC_PAUSE = 0x0048,
    KC_INSERT = 0x0049,
    KC_HOME = 0x004A,
    KC_PAGE_UP = 0x004B,
    KC_DELETE = 0x004C,
    KC_END = 0x004D,
    KC_PAGE_DOWN = 0x004E,
    KC_RIGHT = 0x004F,
    KC_LEFT = 0x0050,
    KC_DOWN = 0x0051,
    KC_UP = 0x0052,
    KC_NUM_LOCK = 0x0053,
    KC_KP_SLASH = 0x0054,
    KC_KP_ASTERISK = 0x0055,
    KC_KP_MINUS = 0x0056,
    KC_KP_PLUS = 0x0057,
    KC_KP_ENTER = 0x0058,
    KC_KP_1 = 0x0059,
    KC_KP_2 = 0x005A,
    KC_KP_3 = 0x005B,
    KC_KP_4 = 0x005C,
    KC_KP_5 = 0x005D,
    KC_KP_6 = 0x005E,
    KC_KP_7 = 0x005F,
    KC_KP_8 = 0x0060,
    KC_KP_9 = 0x0061,
    KC_KP_0 = 0x0062,
    KC_KP_DOT = 0x0063,
    KC_NONUS_BACKSLASH = 0x0064,
    KC_APPLICATION = 0x0065,
    KC_KB_POWER = 0x0066,
    KC_KP_EQUAL = 0x0067,
    KC_F13 = 0x0068,
    KC_F14 = 0x0069,
    KC_F15 = 0x006A,
    KC_F16 = 0x006B,
    KC_F17 = 0x006C,
    KC_F18 = 0x006D,
    KC_F19 = 0x006E,
    KC_F20 = 0x006F,
    KC_F21 = 0x0070,
    KC_F22 = 0x0071,
    KC_F23 = 0x0072,
    KC_F24 = 0x0073,
    KC_EXECUTE = 0x0074,
    KC_HELP = 0x0075,
    KC_MENU = 0x0076,
    KC_SELECT = 0x0077,
    KC_STOP = 0x0078,
    KC_AGAIN = 0x0079,
    KC_UNDO = 0x007A,
    KC_CUT = 0x007B,
    KC_COPY = 0x007C,
    KC_PASTE = 0x007D,
    KC_FIND = 0x007E,
    KC_KB_MUTE = 0x007F,
    KC_KB_VOLUME_UP = 0x0080,
    KC_KB_VOLUME_DOWN = 0x0081,
    KC_LOCKING_CAPS_LOCK = 0x0082,
    KC_LOCKING_NUM_LOCK = 0x0083,
    KC_LOCKING_SCROLL_LOCK = 0x0084,
    KC_KP_COMMA = 0x0085,
    KC_KP_EQUAL_AS400 = 0x0086,
    KC_INTERNATIONAL_1 = 0x0087,
    KC_INTERNATIONAL_2 = 0x0088,
    KC_INTERNATIONAL_3 = 0x0089,
    KC_INTERNATIONAL_4 = 0x008A,
    KC_INTERNATIONAL_5 = 0x008B,
    KC_INTERNATIONAL_6 = 0x008C,
    KC_INTERNATIONAL_7 = 0x008D,
    KC_INTERNATIONAL_8 = 0x008E,
    KC_INTERNATIONAL_9 = 0x008F,
    KC_LANGUAGE_1 = 0x0090,
    KC_LANGUAGE_2 = 0x0091,
    KC_LANGUAGE_3 = 0x0092,
    KC_LANGUAGE_4 = 0x0093,
    KC_LANGUAGE_5 = 0x0094,
    KC_LANGUAGE_6 = 0x0095,
    KC_LANGUAGE_7 = 0x0096,
    KC_LANGUAGE_8 = 0x0097,
    KC_LANGUAGE_9 = 0x0098,
    KC_ALTERNATE_ERASE = 0x0099,
    KC_SYSTEM_REQUEST = 0x009A,
    KC_CANCEL = 0x009B,
    KC_CLEAR = 0x009C,
    KC_PRIOR = 0x009D,
    KC_RETURN = 0x009E,
    KC_SEPARATOR = 0x009F,
    KC_OUT = 0x00A0,
    KC_OPER = 0x00A1,
    KC_CLEAR_AGAIN = 0x00A2,
    KC_CRSEL = 0x00A3,
    KC_EXSEL = 0x00A4,
    KC_SYSTEM_POWER = 0x00A5,
    KC_SYSTEM_SLEEP = 0x00A6,
    KC_SYSTEM_WAKE = 0x00A7,
    KC_AUDIO_MUTE = 0x00A8,
    KC_AUDIO_VOL_UP = 0x00A9,
    KC_AUDIO_VOL_DOWN = 0x00AA,
    KC_MEDIA_NEXT_TRACK = 0x00AB,
    KC_MEDIA_PREV_TRACK = 0x00AC,
    KC_MEDIA_STOP = 0x00AD,
    KC_MEDIA_PLAY_PAUSE = 0x00AE,
    KC_MEDIA_SELECT = 0x00AF,
    KC_MEDIA_EJECT = 0x00B0,
    KC_MAIL = 0x00B1,
    KC_CALCULATOR = 0x00B2,
    KC_MY_COMPUTER = 0x00B3,
    KC_WWW_SEARCH = 0x00B4,
    KC_WWW_HOME = 0x00B5,
    KC_WWW_BACK = 0x00B6,
    KC_WWW_FORWARD = 0x00B7,
    KC_WWW_STOP = 0x00B8,
    KC_WWW_REFRESH = 0x00B9,
    KC_WWW_FAVORITES = 0x00BA,
    KC_MEDIA_FAST_FORWARD = 0x00BB,
    KC_MEDIA_REWIND = 0x00BC,
    KC_BRIGHTNESS_UP = 0x00BD,
    KC_BRIGHTNESS_DOWN = 0x00BE,
    KC_CONTROL_PANEL = 0x00BF,
    KC_ASSISTANT = 0x00C0,
    KC_MS_UP = 0x00CD,
    KC_MS_DOWN = 0x00CE,
    KC_MS_LEFT = 0x00CF,
    KC_MS_RIGHT = 0x00D0,
    KC_MS_BTN1 = 0x00D1,
    KC_MS_BTN2 = 0x00D2,
    KC_MS_BTN3 = 0x00D3,
    KC_MS_BTN4 = 0x00D4,
    KC_MS_BTN5 = 0x00D5,
    KC_MS_BTN6 = 0x00D6,
    KC_MS_BTN7 = 0x00D7,
    KC_MS_BTN8 = 0x00D8,
    KC_MS_WH_UP = 0x00D9,
    KC_MS_WH_DOWN = 0x00DA,
    KC_MS_WH_LEFT = 0x00DB,
    KC_MS_WH_RIGHT = 0x00DC,
    KC_MS_ACCEL0 = 0x00DD,
    KC_MS_ACCEL1 = 0x00DE,
    KC_MS_ACCEL2 = 0x00DF,
    KC_LEFT_CTRL = 0x00E0,
    KC_LEFT_SHIFT = 0x00E1,
    KC_LEFT_ALT = 0x00E2,
    KC_LEFT_GUI = 0x00E3,
    KC_RIGHT_CTRL = 0x00E4,
    KC_RIGHT_SHIFT = 0x00E5,
    KC_RIGHT_ALT = 0x00E6,
    KC_RIGHT_GUI = 0x00E7,
    SH_TG = 0x56F0,
    SH_TT = 0x56F1,
    SH_MON = 0x56F2,
    SH_MOFF = 0x56F3,
    SH_OFF = 0x56F4,
    SH_ON = 0x56F5,
    SH_OS = 0x56F6,
    MAGIC_SWAP_CONTROL_CAPSLOCK = 0x7000,
    MAGIC_UNSWAP_CONTROL_CAPSLOCK = 0x7001,
    MAGIC_TOGGLE_CONTROL_CAPSLOCK = 0x7002,
    MAGIC_UNCAPSLOCK_TO_CONTROL = 0x7003,
    MAGIC_CAPSLOCK_TO_CONTROL = 0x7004,
    MAGIC_SWAP_LALT_LGUI = 0x7005,
    MAGIC_UNSWAP_LALT_LGUI = 0x7006,
    MAGIC_SWAP_RALT_RGUI = 0x7007,
    MAGIC_UNSWAP_RALT_RGUI = 0x7008,
    MAGIC_UNNO_GUI = 0x7009,
    MAGIC_NO_GUI = 0x700A,
    MAGIC_TOGGLE_GUI = 0x700B,
    MAGIC_SWAP_GRAVE_ESC = 0x700C,
    MAGIC_UNSWAP_GRAVE_ESC = 0x700D,
    MAGIC_SWAP_BACKSLASH_BACKSPACE = 0x700E,
    MAGIC_UNSWAP_BACKSLASH_BACKSPACE = 0x700F,
    MAGIC_TOGGLE_BACKSLASH_BACKSPACE = 0x7010,
    MAGIC_HOST_NKRO = 0x7011,
    MAGIC_UNHOST_NKRO = 0x7012,
    MAGIC_TOGGLE_NKRO = 0x7013,
    MAGIC_SWAP_ALT_GUI = 0x7014,
    MAGIC_UNSWAP_ALT_GUI = 0x7015,
    MAGIC_TOGGLE_ALT_GUI = 0x7016,
    MAGIC_SWAP_LCTL_LGUI = 0x7017,
    MAGIC_UNSWAP_LCTL_LGUI = 0x7018,
    MAGIC_SWAP_RCTL_RGUI = 0x7019,
    MAGIC_UNSWAP_RCTL_RGUI = 0x701A,
    MAGIC_SWAP_CTL_GUI = 0x701B,
    MAGIC_UNSWAP_CTL_GUI = 0x701C,
    MAGIC_TOGGLE_CTL_GUI = 0x701D,
    MAGIC_EE_HANDS_LEFT = 0x701E,
    MAGIC_EE_HANDS_RIGHT = 0x701F,
    MAGIC_SWAP_ESCAPE_CAPSLOCK = 0x7020,
    MAGIC_UNSWAP_ESCAPE_CAPSLOCK = 0x7021,
    MAGIC_TOGGLE_ESCAPE_CAPSLOCK = 0x7022,
    MI_ON = 0x7100,
    MI_OFF = 0x7101,
    MI_TOG = 0x7102,
    MI_C = 0x7110,
    MI_Cs = 0x7111,
    MI_D = 0x7112,
    MI_Ds = 0x7113,
    MI_E = 0x7114,
    MI_F = 0x7115,
    MI_Fs = 0x7116,
    MI_G = 0x7117,
    MI_Gs = 0x7118,
    MI_A = 0x7119,
    MI_As = 0x711A,
    MI_B = 0x711B,
    MI_C_1 = 0x7120,
    MI_Cs_1 = 0x7121,
    MI_D_1 = 0x7122,
    MI_Ds_1 = 0x7123,
    MI_E_1 = 0x7124,
    MI_F_1 = 0x7125,
    MI_Fs_1 = 0x7126,
    MI_G_1 = 0x7127,
    MI_Gs_1 = 0x7128,
    MI_A_1 = 0x7129,
    MI_As_1 = 0x712A,
    MI_B_1 = 0x712B,
    MI_C_2 = 0x7130,
    MI_Cs_2 = 0x7131,
    MI_D_2 = 0x7132,
    MI_Ds_2 = 0x7133,
    MI_E_2 = 0x7134,
    MI_F_2 = 0x7135,
    MI_Fs_2 = 0x7136,
    MI_G_2 = 0x7137,
    MI_Gs_2 = 0x7138,
    MI_A_2 = 0x7139,
    MI_As_2 = 0x713A,
    MI_B_2 = 0x713B,
    MI_C_3 = 0x7140,
    MI_Cs_3 = 0x7141,
    MI_D_3 = 0x7142,
    MI_Ds_3 = 0x7143,
    MI_E_3 = 0x7144,
    MI_F_3 = 0x7145,
    MI_Fs_3 = 0x7146,
    MI_G_3 = 0x7147,
    MI_Gs_3 = 0x7148,
    MI_A_3 = 0x7149,
    MI_As_3 = 0x714A,
    MI_B_3 = 0x714B,
    MI_C_4 = 0x7150,
    MI_Cs_4 = 0x7151,
    MI_D_4 = 0x7152,
    MI_Ds_4 = 0x7153,
    MI_E_4 = 0x7154,
    MI_F_4 = 0x7155,
    MI_Fs_4 = 0x7156,
    MI_G_4 = 0x7157,
    MI_Gs_4 = 0x7158,
    MI_A_4 = 0x7159,
    MI_As_4 = 0x715A,
    MI_B_4 = 0x715B,
    MI_C_5 = 0x7160,
    MI_Cs_5 = 0x7161,
    MI_D_5 = 0x7162,
    MI_Ds_5 = 0x7163,
    MI_E_5 = 0x7164,
    MI_F_5 = 0x7165,
    MI_Fs_5 = 0x7166,
    MI_G_5 = 0x7167,
    MI_Gs_5 = 0x7168,
    MI_A_5 = 0x7169,
    MI_As_5 = 0x716A,
    MI_B_5 = 0x716B,
    MI_OCT_N2 = 0x7170,
    MI_OCT_N1 = 0x7171,
    MI_OCT_0 = 0x7172,
    MI_OCT_1 = 0x7173,
    MI_OCT_2 = 0x7174,
    MI_OCT_3 = 0x7175,
    MI_OCT_4 = 0x7176,
    MI_OCT_5 = 0x7177,
    MI_OCT_6 = 0x7178,
    MI_OCT_7 = 0x7179,
    MI_OCTD = 0x717A,
    MI_OCTU = 0x717B,
    MI_TRNS_N6 = 0x7180,
    MI_TRNS_N5 = 0x7181,
    MI_TRNS_N4 = 0x7182,
    MI_TRNS_N3 = 0x7183,
    MI_TRNS_N2 = 0x7184,
    MI_TRNS_N1 = 0x7185,
    MI_TRNS_0 = 0x7186,
    MI_TRNS_1 = 0x7187,
    MI_TRNS_2 = 0x7188,
    MI_TRNS_3 = 0x7189,
    MI_TRNS_4 = 0x718A,
    MI_TRNS_5 = 0x718B,
    MI_TRNS_6 = 0x718C,
    MI_TRNSD = 0x718D,
    MI_TRNSU = 0x718E,
    MI_VEL_0 = 0x7190,
    MI_VEL_1 = 0x7191,
    MI_VEL_2 = 0x7192,
    MI_VEL_3 = 0x7193,
    MI_VEL_4 = 0x7194,
    MI_VEL_5 = 0x7195,
    MI_VEL_6 = 0x7196,
    MI_VEL_7 = 0x7197,
    MI_VEL_8 = 0x7198,
    MI_VEL_9 = 0x7199,
    MI_VEL_10 = 0x719A,
    MI_VELD = 0x719B,
    MI_VELU = 0x719C,
    MI_CH1 = 0x71A0,
    MI_CH2 = 0x71A1,
    MI_CH3 = 0x71A2,
    MI_CH4 = 0x71A3,
    MI_CH5 = 0x71A4,
    MI_CH6 = 0x71A5,
    MI_CH7 = 0x71A6,
    MI_CH8 = 0x71A7,
    MI_CH9 = 0x71A8,
    MI_CH10 = 0x71A9,
    MI_CH11 = 0x71AA,
    MI_CH12 = 0x71AB,
    MI_CH13 = 0x71AC,
    MI_CH14 = 0x71AD,
    MI_CH15 = 0x71AE,
    MI_CH16 = 0x71AF,
    MI_CHD = 0x71B0,
    MI_CHU = 0x71B1,
    MI_ALLOFF = 0x71C0,
    MI_SUS = 0x71C1,
    MI_PORT = 0x71C2,
    MI_SOST = 0x71C3,
    MI_SOFT = 0x71C4,
    MI_LEG = 0x71C5,
    MI_MOD = 0x71C6,
    MI_MODSD = 0x71C7,
    MI_MODSU = 0x71C8,
    MI_BENDD = 0x71C9,
    MI_BENDU = 0x71CA,
    SQ_ON = 0x7200,
    SQ_OFF = 0x7201,
    SQ_TOG = 0x7202,
    SQ_TMPD = 0x7203,
    SQ_TMPU = 0x7204,
    SQ_RESD = 0x7205,
    SQ_RESU = 0x7206,
    SQ_SALL = 0x7207,
    SQ_SCLR = 0x7208,
    QK_JOYSTICK_BUTTON_0 = 0x7400,
    QK_JOYSTICK_BUTTON_1 = 0x7401,
    QK_JOYSTICK_BUTTON_2 = 0x7402,
    QK_JOYSTICK_BUTTON_3 = 0x7403,
    QK_JOYSTICK_BUTTON_4 = 0x7404,
    QK_JOYSTICK_BUTTON_5 = 0x7405,
    QK_JOYSTICK_BUTTON_6 = 0x7406,
    QK_JOYSTICK_BUTTON_7 = 0x7407,
    QK_JOYSTICK_BUTTON_8 = 0x7408,
    QK_JOYSTICK_BUTTON_9 = 0x7409,
    QK_JOYSTICK_BUTTON_10 = 0x740A,
    QK_JOYSTICK_BUTTON_11 = 0x740B,
    QK_JOYSTICK_BUTTON_12 = 0x740C,
    QK_JOYSTICK_BUTTON_13 = 0x740D,
    QK_JOYSTICK_BUTTON_14 = 0x740E,
    QK_JOYSTICK_BUTTON_15 = 0x740F,
    QK_JOYSTICK_BUTTON_16 = 0x7410,
    QK_JOYSTICK_BUTTON_17 = 0x7411,
    QK_JOYSTICK_BUTTON_18 = 0x7412,
    QK_JOYSTICK_BUTTON_19 = 0x7413,
    QK_JOYSTICK_BUTTON_20 = 0x7414,
    QK_JOYSTICK_BUTTON_21 = 0x7415,
    QK_JOYSTICK_BUTTON_22 = 0x7416,
    QK_JOYSTICK_BUTTON_23 = 0x7417,
    QK_JOYSTICK_BUTTON_24 = 0x7418,
    QK_JOYSTICK_BUTTON_25 = 0x7419,
    QK_JOYSTICK_BUTTON_26 = 0x741A,
    QK_JOYSTICK_BUTTON_27 = 0x741B,
    QK_JOYSTICK_BUTTON_28 = 0x741C,
    QK_JOYSTICK_BUTTON_29 = 0x741D,
    QK_JOYSTICK_BUTTON_30 = 0x741E,
    QK_JOYSTICK_BUTTON_31 = 0x741F,
    QK_PROGRAMMABLE_BUTTON_1 = 0x7440,
    QK_PROGRAMMABLE_BUTTON_2 = 0x7441,
    QK_PROGRAMMABLE_BUTTON_3 = 0x7442,
    QK_PROGRAMMABLE_BUTTON_4 = 0x7443,
    QK_PROGRAMMABLE_BUTTON_5 = 0x7444,
    QK_PROGRAMMABLE_BUTTON_6 = 0x7445,
    QK_PROGRAMMABLE_BUTTON_7 = 0x7446,
    QK_PROGRAMMABLE_BUTTON_8 = 0x7447,
    QK_PROGRAMMABLE_BUTTON_9 = 0x7448,
    QK_PROGRAMMABLE_BUTTON_10 = 0x7449,
    QK_PROGRAMMABLE_BUTTON_11 = 0x744A,
    QK_PROGRAMMABLE_BUTTON_12 = 0x744B,
    QK_PROGRAMMABLE_BUTTON_13 = 0x744C,
    QK_PROGRAMMABLE_BUTTON_14 = 0x744D,
    QK_PROGRAMMABLE_BUTTON_15 = 0x744E,
    QK_PROGRAMMABLE_BUTTON_16 = 0x744F,
    QK_PROGRAMMABLE_BUTTON_17 = 0x7450,
    QK_PROGRAMMABLE_BUTTON_18 = 0x7451,
    QK_PROGRAMMABLE_BUTTON_19 = 0x7452,
    QK_PROGRAMMABLE_BUTTON_20 = 0x7453,
    QK_PROGRAMMABLE_BUTTON_21 = 0x7454,
    QK_PROGRAMMABLE_BUTTON_22 = 0x7455,
    QK_PROGRAMMABLE_BUTTON_23 = 0x7456,
    QK_PROGRAMMABLE_BUTTON_24 = 0x7457,
    QK_PROGRAMMABLE_BUTTON_25 = 0x7458,
    QK_PROGRAMMABLE_BUTTON_26 = 0x7459,
    QK_PROGRAMMABLE_BUTTON_27 = 0x745A,
    QK_PROGRAMMABLE_BUTTON_28 = 0x745B,
    QK_PROGRAMMABLE_BUTTON_29 = 0x745C,
    QK_PROGRAMMABLE_BUTTON_30 = 0x745D,
    QK_PROGRAMMABLE_BUTTON_31 = 0x745E,
    QK_PROGRAMMABLE_BUTTON_32 = 0x745F,
    AU_ON = 0x7480,
    AU_OFF = 0x7481,
    AU_TOG = 0x7482,
    CLICKY_TOGGLE = 0x748A,
    CLICKY_ENABLE = 0x748B,
    CLICKY_DISABLE = 0x748C,
    CLICKY_UP = 0x748D,
    CLICKY_DOWN = 0x748E,
    CLICKY_RESET = 0x748F,
    MU_ON = 0x7490,
    MU_OFF = 0x7491,
    MU_TOG = 0x7492,
    MU_MOD = 0x7493,
    MUV_IN = 0x7494,
    MUV_DE = 0x7495,
    QK_STENO_BOLT = 0x74F0,
    QK_STENO_GEMINI = 0x74F1,
    QK_STENO_COMB = 0x74F2,
    QK_STENO_COMB_MAX = 0x74FC,
    QK_MACRO_0 = 0x7700,
    QK_MACRO_1 = 0x7701,
    QK_MACRO_2 = 0x7702,
    QK_MACRO_3 = 0x7703,
    QK_MACRO_4 = 0x7704,
    QK_MACRO_5 = 0x7705,
    QK_MACRO_6 = 0x7706,
    QK_MACRO_7 = 0x7707,
    QK_MACRO_8 = 0x7708,
    QK_MACRO_9 = 0x7709,
    QK_MACRO_10 = 0x770A,
    QK_MACRO_11 = 0x770B,
    QK_MACRO_12 = 0x770C,
    QK_MACRO_13 = 0x770D,
    QK_MACRO_14 = 0x770E,
    QK_MACRO_15 = 0x770F,
    QK_MACRO_16 = 0x7710,
    QK_MACRO_17 = 0x7711,
    QK_MACRO_18 = 0x7712,
    QK_MACRO_19 = 0x7713,
    QK_MACRO_20 = 0x7714,
    QK_MACRO_21 = 0x7715,
    QK_MACRO_22 = 0x7716,
    QK_MACRO_23 = 0x7717,
    QK_MACRO_24 = 0x7718,
    QK_MACRO_25 = 0x7719,
    QK_MACRO_26 = 0x771A,
    QK_MACRO_27 = 0x771B,
    QK_MACRO_28 = 0x771C,
    QK_MACRO_29 = 0x771D,
    QK_MACRO_30 = 0x771E,
    QK_MACRO_31 = 0x771F,
    BL_ON = 0x7800,
    BL_OFF = 0x7801,
    BL_DEC = 0x7802,
    BL_INC = 0x7803,
    BL_TOGG = 0x7804,
    BL_STEP = 0x7805,
    BL_BRTG = 0x7806,
    RGB_TOG = 0x7820,
    RGB_MODE_FORWARD = 0x7821,
    RGB_MODE_REVERSE = 0x7822,
    RGB_HUI = 0x7823,
    RGB_HUD = 0x7824,
    RGB_SAI = 0x7825,
    RGB_SAD = 0x7826,
    RGB_VAI = 0x7827,
    RGB_VAD = 0x7828,
    RGB_SPI = 0x7829,
    RGB_SPD = 0x782A,
    RGB_MODE_PLAIN = 0x782B,
    RGB_MODE_BREATHE = 0x782C,
    RGB_MODE_RAINBOW = 0x782D,
    RGB_MODE_SWIRL = 0x782E,
    RGB_MODE_SNAKE = 0x782F,
    RGB_MODE_KNIGHT = 0x7830,
    RGB_MODE_XMAS = 0x7831,
    RGB_MODE_GRADIENT = 0x7832,
    RGB_MODE_RGBTEST = 0x7833,
    RGB_MODE_TWINKLE = 0x7834,
    QK_BOOTLOADER = 0x7C00,
    QK_REBOOT = 0x7C01,
    QK_DEBUG_TOGGLE = 0x7C02,
    QK_CLEAR_EEPROM = 0x7C03,
    QK_MAKE = 0x7C04,
    QK_AUTO_SHIFT_DOWN = 0x7C10,
    QK_AUTO_SHIFT_UP = 0x7C11,
    QK_AUTO_SHIFT_REPORT = 0x7C12,
    QK_AUTO_SHIFT_ON = 0x7C13,
    QK_AUTO_SHIFT_OFF = 0x7C14,
    QK_AUTO_SHIFT_TOGGLE = 0x7C15,
    QK_GRAVE_ESCAPE = 0x7C16,
    QK_VELOCIKEY_TOGGLE = 0x7C17,
    QK_SPACE_CADET_LEFT_CTRL_PARENTHESIS_OPEN = 0x7C18,
    QK_SPACE_CADET_RIGHT_CTRL_PARENTHESIS_CLOSE = 0x7C19,
    QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN = 0x7C1A,
    QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE = 0x7C1B,
    QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN = 0x7C1C,
    QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE = 0x7C1D,
    QK_SPACE_CADET_RIGHT_SHIFT_ENTER = 0x7C1E,
    OUT_AUTO = 0x7C20,
    OUT_USB = 0x7C21,
    OUT_BT = 0x7C22,
    QK_UNICODE_MODE_NEXT = 0x7C30,
    QK_UNICODE_MODE_PREVIOUS = 0x7C31,
    QK_UNICODE_MODE_MACOS = 0x7C32,
    QK_UNICODE_MODE_LINUX = 0x7C33,
    QK_UNICODE_MODE_WINDOWS = 0x7C34,
    QK_UNICODE_MODE_BSD = 0x7C35,
    QK_UNICODE_MODE_WINCOMPOSE = 0x7C36,
    QK_UNICODE_MODE_EMACS = 0x7C37,
    HPT_ON = 0x7C40,
    HPT_OFF = 0x7C41,
    HPT_TOG = 0x7C42,
    HPT_RST = 0x7C43,
    HPT_FBK = 0x7C44,
    HPT_BUZ = 0x7C45,
    HPT_MODI = 0x7C46,
    HPT_MODD = 0x7C47,
    HPT_CONT = 0x7C48,
    HPT_CONI = 0x7C49,
    HPT_COND = 0x7C4A,
    HPT_DWLI = 0x7C4B,
    HPT_DWLD = 0x7C4C,
    QK_COMBO_ON = 0x7C50,
    QK_COMBO_OFF = 0x7C51,
    QK_COMBO_TOGGLE = 0x7C52,
    QK_DYNAMIC_MACRO_RECORD_START_1 = 0x7C53,
    QK_DYNAMIC_MACRO_RECORD_START_2 = 0x7C54,
    QK_DYNAMIC_MACRO_RECORD_STOP = 0x7C55,
    QK_DYNAMIC_MACRO_PLAY_1 = 0x7C56,
    QK_DYNAMIC_MACRO_PLAY_2 = 0x7C57,
    QK_LEADER = 0x7C58,
    QK_LOCK = 0x7C59,
    QK_ONE_SHOT_ON = 0x7C5A,
    QK_ONE_SHOT_OFF = 0x7C5B,
    QK_ONE_SHOT_TOGGLE = 0x7C5C,
    QK_KEY_OVERRIDE_TOGGLE = 0x7C5D,
    QK_KEY_OVERRIDE_ON = 0x7C5E,
    QK_KEY_OVERRIDE_OFF = 0x7C5F,
    QK_SECURE_LOCK = 0x7C60,
    QK_SECURE_UNLOCK = 0x7C61,
    QK_SECURE_TOGGLE = 0x7C62,
    QK_SECURE_REQUEST = 0x7C63,
    DT_PRNT = 0x7C70,
    DT_UP = 0x7C71,
    DT_DOWN = 0x7C72,
    QK_CAPS_WORD_TOGGLE = 0x7C73,
    QK_AUTOCORRECT_ON = 0x7C74,
    QK_AUTOCORRECT_OFF = 0x7C75,
    QK_AUTOCORRECT_TOGGLE = 0x7C76,
    SAFE_RANGE = 0x7E00,

// Alias
    XXXXXXX    = KC_NO,
    _______    = KC_TRANSPARENT,
    KC_TRNS    = KC_TRANSPARENT,
    KC_ENT     = KC_ENTER,
    KC_ESC     = KC_ESCAPE,
    KC_BSPC    = KC_BACKSPACE,
    KC_SPC     = KC_SPACE,
    KC_MINS    = KC_MINUS,
    KC_EQL     = KC_EQUAL,
    KC_LBRC    = KC_LEFT_BRACKET,
    KC_RBRC    = KC_RIGHT_BRACKET,
    KC_BSLS    = KC_BACKSLASH,
    KC_NUHS    = KC_NONUS_HASH,
    KC_SCLN    = KC_SEMICOLON,
    KC_QUOT    = KC_QUOTE,
    KC_GRV     = KC_GRAVE,
    KC_COMM    = KC_COMMA,
    KC_SLSH    = KC_SLASH,
    KC_CAPS    = KC_CAPS_LOCK,
    KC_PSCR    = KC_PRINT_SCREEN,
    KC_SCRL    = KC_SCROLL_LOCK,
    KC_BRMD    = KC_SCROLL_LOCK,
    KC_PAUS    = KC_PAUSE,
    KC_BRK     = KC_PAUSE,
    KC_BRMU    = KC_PAUSE,
    KC_INS     = KC_INSERT,
    KC_PGUP    = KC_PAGE_UP,
    KC_DEL     = KC_DELETE,
    KC_PGDN    = KC_PAGE_DOWN,
    KC_RGHT    = KC_RIGHT,
    KC_NUM     = KC_NUM_LOCK,
    KC_PSLS    = KC_KP_SLASH,
    KC_PAST    = KC_KP_ASTERISK,
    KC_PMNS    = KC_KP_MINUS,
    KC_PPLS    = KC_KP_PLUS,
    KC_PENT    = KC_KP_ENTER,
    KC_P1      = KC_KP_1,
    KC_P2      = KC_KP_2,
    KC_P3      = KC_KP_3,
    KC_P4      = KC_KP_4,
    KC_P5      = KC_KP_5,
    KC_P6      = KC_KP_6,
    KC_P7      = KC_KP_7,
    KC_P8      = KC_KP_8,
    KC_P9      = KC_KP_9,
    KC_P0      = KC_KP_0,
    KC_PDOT    = KC_KP_DOT,
    KC_NUBS    = KC_NONUS_BACKSLASH,
    KC_APP     = KC_APPLICATION,
    KC_PEQL    = KC_KP_EQUAL,
    KC_EXEC    = KC_EXECUTE,
    KC_SLCT    = KC_SELECT,
    KC_AGIN    = KC_AGAIN,
    KC_PSTE    = KC_PASTE,
    KC_LCAP    = KC_LOCKING_CAPS_LOCK,
    KC_LNUM    = KC_LOCKING_NUM_LOCK,
    KC_LSCR    = KC_LOCKING_SCROLL_LOCK,
    KC_PCMM    = KC_KP_COMMA,
    KC_INT1    = KC_INTERNATIONAL_1,
    KC_INT2    = KC_INTERNATIONAL_2,
    KC_INT3    = KC_INTERNATIONAL_3,
    KC_INT4    = KC_INTERNATIONAL_4,
    KC_INT5    = KC_INTERNATIONAL_5,
    KC_INT6    = KC_INTERNATIONAL_6,
    KC_INT7    = KC_INTERNATIONAL_7,
    KC_INT8    = KC_INTERNATIONAL_8,
    KC_INT9    = KC_INTERNATIONAL_9,
    KC_LNG1    = KC_LANGUAGE_1,
    KC_LNG2    = KC_LANGUAGE_2,
    KC_LNG3    = KC_LANGUAGE_3,
    KC_LNG4    = KC_LANGUAGE_4,
    KC_LNG5    = KC_LANGUAGE_5,
    KC_LNG6    = KC_LANGUAGE_6,
    KC_LNG7    = KC_LANGUAGE_7,
    KC_LNG8    = KC_LANGUAGE_8,
    KC_LNG9    = KC_LANGUAGE_9,
    KC_ERAS    = KC_ALTERNATE_ERASE,
    KC_SYRQ    = KC_SYSTEM_REQUEST,
    KC_CNCL    = KC_CANCEL,
    KC_CLR     = KC_CLEAR,
    KC_PRIR    = KC_PRIOR,
    KC_RETN    = KC_RETURN,
    KC_SEPR    = KC_SEPARATOR,
    KC_CLAG    = KC_CLEAR_AGAIN,
    KC_CRSL    = KC_CRSEL,
    KC_EXSL    = KC_EXSEL,
    KC_PWR     = KC_SYSTEM_POWER,
    KC_SLEP    = KC_SYSTEM_SLEEP,
    KC_WAKE    = KC_SYSTEM_WAKE,
    KC_MUTE    = KC_AUDIO_MUTE,
    KC_VOLU    = KC_AUDIO_VOL_UP,
    KC_VOLD    = KC_AUDIO_VOL_DOWN,
    KC_MNXT    = KC_MEDIA_NEXT_TRACK,
    KC_MPRV    = KC_MEDIA_PREV_TRACK,
    KC_MSTP    = KC_MEDIA_STOP,
    KC_MPLY    = KC_MEDIA_PLAY_PAUSE,
    KC_MSEL    = KC_MEDIA_SELECT,
    KC_EJCT    = KC_MEDIA_EJECT,
    KC_CALC    = KC_CALCULATOR,
    KC_MYCM    = KC_MY_COMPUTER,
    KC_WSCH    = KC_WWW_SEARCH,
    KC_WHOM    = KC_WWW_HOME,
    KC_WBAK    = KC_WWW_BACK,
    KC_WFWD    = KC_WWW_FORWARD,
    KC_WSTP    = KC_WWW_STOP,
    KC_WREF    = KC_WWW_REFRESH,
    KC_WFAV    = KC_WWW_FAVORITES,
    KC_MFFD    = KC_MEDIA_FAST_FORWARD,
    KC_MRWD    = KC_MEDIA_REWIND,
    KC_BRIU    = KC_BRIGHTNESS_UP,
    KC_BRID    = KC_BRIGHTNESS_DOWN,
    KC_CPNL    = KC_CONTROL_PANEL,
    KC_ASST    = KC_ASSISTANT,
    KC_MS_U    = KC_MS_UP,
    KC_MS_D    = KC_MS_DOWN,
    KC_MS_L    = KC_MS_LEFT,
    KC_MS_R    = KC_MS_RIGHT,
    KC_BTN1    = KC_MS_BTN1,
    KC_BTN2    = KC_MS_BTN2,
    KC_BTN3    = KC_MS_BTN3,
    KC_BTN4    = KC_MS_BTN4,
    KC_BTN5    = KC_MS_BTN5,
    KC_BTN6    = KC_MS_BTN6,
    KC_BTN7    = KC_MS_BTN7,
    KC_BTN8    = KC_MS_BTN8,
    KC_WH_U    = KC_MS_WH_UP,
    KC_WH_D    = KC_MS_WH_DOWN,
    KC_WH_L    = KC_MS_WH_LEFT,
    KC_WH_R    = KC_MS_WH_RIGHT,
    KC_ACL0    = KC_MS_ACCEL0,
    KC_ACL1    = KC_MS_ACCEL1,
    KC_ACL2    = KC_MS_ACCEL2,
    KC_LCTL    = KC_LEFT_CTRL,
    KC_LSFT    = KC_LEFT_SHIFT,
    KC_LALT    = KC_LEFT_ALT,
    KC_LOPT    = KC_LEFT_ALT,
    KC_LGUI    = KC_LEFT_GUI,
    KC_LCMD    = KC_LEFT_GUI,
    KC_LWIN    = KC_LEFT_GUI,
    KC_RCTL    = KC_RIGHT_CTRL,
    KC_RSFT    = KC_RIGHT_SHIFT,
    KC_RALT    = KC_RIGHT_ALT,
    KC_ROPT    = KC_RIGHT_ALT,
    KC_ALGR    = KC_RIGHT_ALT,
    KC_RGUI    = KC_RIGHT_GUI,
    KC_RCMD    = KC_RIGHT_GUI,
    KC_RWIN    = KC_RIGHT_GUI,
    CL_SWAP    = MAGIC_SWAP_CONTROL_CAPSLOCK,
    CL_NORM    = MAGIC_UNSWAP_CONTROL_CAPSLOCK,
    CL_TOGG    = MAGIC_TOGGLE_CONTROL_CAPSLOCK,
    CL_CAPS    = MAGIC_UNCAPSLOCK_TO_CONTROL,
    CL_CTRL    = MAGIC_CAPSLOCK_TO_CONTROL,
    LAG_SWP    = MAGIC_SWAP_LALT_LGUI,
    LAG_NRM    = MAGIC_UNSWAP_LALT_LGUI,
    RAG_SWP    = MAGIC_SWAP_RALT_RGUI,
    RAG_NRM    = MAGIC_UNSWAP_RALT_RGUI,
    GUI_ON     = MAGIC_UNNO_GUI,
    GUI_OFF    = MAGIC_NO_GUI,
    GUI_TOG    = MAGIC_TOGGLE_GUI,
    GE_SWAP    = MAGIC_SWAP_GRAVE_ESC,
    GE_NORM    = MAGIC_UNSWAP_GRAVE_ESC,
    BS_SWAP    = MAGIC_SWAP_BACKSLASH_BACKSPACE,
    BS_NORM    = MAGIC_UNSWAP_BACKSLASH_BACKSPACE,
    BS_TOGG    = MAGIC_TOGGLE_BACKSLASH_BACKSPACE,
    NK_ON      = MAGIC_HOST_NKRO,
    NK_OFF     = MAGIC_UNHOST_NKRO,
    NK_TOGG    = MAGIC_TOGGLE_NKRO,
    AG_SWAP    = MAGIC_SWAP_ALT_GUI,
    AG_NORM    = MAGIC_UNSWAP_ALT_GUI,
    AG_TOGG    = MAGIC_TOGGLE_ALT_GUI,
    LCG_SWP    = MAGIC_SWAP_LCTL_LGUI,
    LCG_NRM    = MAGIC_UNSWAP_LCTL_LGUI,
    RCG_SWP    = MAGIC_SWAP_RCTL_RGUI,
    RCG_NRM    = MAGIC_UNSWAP_RCTL_RGUI,
    CG_SWAP    = MAGIC_SWAP_CTL_GUI,
    CG_NORM    = MAGIC_UNSWAP_CTL_GUI,
    CG_TOGG    = MAGIC_TOGGLE_CTL_GUI,
    EH_LEFT    = MAGIC_EE_HANDS_LEFT,
    EH_RGHT    = MAGIC_EE_HANDS_RIGHT,
    EC_SWAP    = MAGIC_SWAP_ESCAPE_CAPSLOCK,
    EC_NORM    = MAGIC_UNSWAP_ESCAPE_CAPSLOCK,
    EC_TOGG    = MAGIC_TOGGLE_ESCAPE_CAPSLOCK,
    MI_Db      = MI_Cs,
    MI_Eb      = MI_Ds,
    MI_Gb      = MI_Fs,
    MI_Ab      = MI_Gs,
    MI_Bb      = MI_As,
    MI_Db_1    = MI_Cs_1,
    MI_Eb_1    = MI_Ds_1,
    MI_Gb_1    = MI_Fs_1,
    MI_Ab_1    = MI_Gs_1,
    MI_Bb_1    = MI_As_1,
    MI_Db_2    = MI_Cs_2,
    MI_Eb_2    = MI_Ds_2,
    MI_Gb_2    = MI_Fs_2,
    MI_Ab_2    = MI_Gs_2,
    MI_Bb_2    = MI_As_2,
    MI_Db_3    = MI_Cs_3,
    MI_Eb_3    = MI_Ds_3,
    MI_Gb_3    = MI_Fs_3,
    MI_Ab_3    = MI_Gs_3,
    MI_Bb_3    = MI_As_3,
    MI_Db_4    = MI_Cs_4,
    MI_Eb_4    = MI_Ds_4,
    MI_Gb_4    = MI_Fs_4,
    MI_Ab_4    = MI_Gs_4,
    MI_Bb_4    = MI_As_4,
    MI_Db_5    = MI_Cs_5,
    MI_Eb_5    = MI_Ds_5,
    MI_Gb_5    = MI_Fs_5,
    MI_Ab_5    = MI_Gs_5,
    MI_Bb_5    = MI_As_5,
    JS_0       = QK_JOYSTICK_BUTTON_0,
    JS_1       = QK_JOYSTICK_BUTTON_1,
    JS_2       = QK_JOYSTICK_BUTTON_2,
    JS_3       = QK_JOYSTICK_BUTTON_3,
    JS_4       = QK_JOYSTICK_BUTTON_4,
    JS_5       = QK_JOYSTICK_BUTTON_5,
    JS_6       = QK_JOYSTICK_BUTTON_6,
    JS_7       = QK_JOYSTICK_BUTTON_7,
    JS_8       = QK_JOYSTICK_BUTTON_8,
    JS_9       = QK_JOYSTICK_BUTTON_9,
    JS_10      = QK_JOYSTICK_BUTTON_10,
    JS_11      = QK_JOYSTICK_BUTTON_11,
    JS_12      = QK_JOYSTICK_BUTTON_12,
    JS_13      = QK_JOYSTICK_BUTTON_13,
    JS_14      = QK_JOYSTICK_BUTTON_14,
    JS_15      = QK_JOYSTICK_BUTTON_15,
    JS_16      = QK_JOYSTICK_BUTTON_16,
    JS_17      = QK_JOYSTICK_BUTTON_17,
    JS_18      = QK_JOYSTICK_BUTTON_18,
    JS_19      = QK_JOYSTICK_BUTTON_19,
    JS_20      = QK_JOYSTICK_BUTTON_20,
    JS_21      = QK_JOYSTICK_BUTTON_21,
    JS_22      = QK_JOYSTICK_BUTTON_22,
    JS_23      = QK_JOYSTICK_BUTTON_23,
    JS_24      = QK_JOYSTICK_BUTTON_24,
    JS_25      = QK_JOYSTICK_BUTTON_25,
    JS_26      = QK_JOYSTICK_BUTTON_26,
    JS_27      = QK_JOYSTICK_BUTTON_27,
    JS_28      = QK_JOYSTICK_BUTTON_28,
    JS_29      = QK_JOYSTICK_BUTTON_29,
    JS_30      = QK_JOYSTICK_BUTTON_30,
    JS_31      = QK_JOYSTICK_BUTTON_31,
    PB_1       = QK_PROGRAMMABLE_BUTTON_1,
    PB_2       = QK_PROGRAMMABLE_BUTTON_2,
    PB_3       = QK_PROGRAMMABLE_BUTTON_3,
    PB_4       = QK_PROGRAMMABLE_BUTTON_4,
    PB_5       = QK_PROGRAMMABLE_BUTTON_5,
    PB_6       = QK_PROGRAMMABLE_BUTTON_6,
    PB_7       = QK_PROGRAMMABLE_BUTTON_7,
    PB_8       = QK_PROGRAMMABLE_BUTTON_8,
    PB_9       = QK_PROGRAMMABLE_BUTTON_9,
    PB_10      = QK_PROGRAMMABLE_BUTTON_10,
    PB_11      = QK_PROGRAMMABLE_BUTTON_11,
    PB_12      = QK_PROGRAMMABLE_BUTTON_12,
    PB_13      = QK_PROGRAMMABLE_BUTTON_13,
    PB_14      = QK_PROGRAMMABLE_BUTTON_14,
    PB_15      = QK_PROGRAMMABLE_BUTTON_15,
    PB_16      = QK_PROGRAMMABLE_BUTTON_16,
    PB_17      = QK_PROGRAMMABLE_BUTTON_17,
    PB_18      = QK_PROGRAMMABLE_BUTTON_18,
    PB_19      = QK_PROGRAMMABLE_BUTTON_19,
    PB_20      = QK_PROGRAMMABLE_BUTTON_20,
    PB_21      = QK_PROGRAMMABLE_BUTTON_21,
    PB_22      = QK_PROGRAMMABLE_BUTTON_22,
    PB_23      = QK_PROGRAMMABLE_BUTTON_23,
    PB_24      = QK_PROGRAMMABLE_BUTTON_24,
    PB_25      = QK_PROGRAMMABLE_BUTTON_25,
    PB_26      = QK_PROGRAMMABLE_BUTTON_26,
    PB_27      = QK_PROGRAMMABLE_BUTTON_27,
    PB_28      = QK_PROGRAMMABLE_BUTTON_28,
    PB_29      = QK_PROGRAMMABLE_BUTTON_29,
    PB_30      = QK_PROGRAMMABLE_BUTTON_30,
    PB_31      = QK_PROGRAMMABLE_BUTTON_31,
    PB_32      = QK_PROGRAMMABLE_BUTTON_32,
    CK_TOGG    = CLICKY_TOGGLE,
    CK_ON      = CLICKY_ENABLE,
    CK_OFF     = CLICKY_DISABLE,
    CK_UP      = CLICKY_UP,
    CK_DOWN    = CLICKY_DOWN,
    CK_RST     = CLICKY_RESET,
    MC_0       = QK_MACRO_0,
    MC_1       = QK_MACRO_1,
    MC_2       = QK_MACRO_2,
    MC_3       = QK_MACRO_3,
    MC_4       = QK_MACRO_4,
    MC_5       = QK_MACRO_5,
    MC_6       = QK_MACRO_6,
    MC_7       = QK_MACRO_7,
    MC_8       = QK_MACRO_8,
    MC_9       = QK_MACRO_9,
    MC_10      = QK_MACRO_10,
    MC_11      = QK_MACRO_11,
    MC_12      = QK_MACRO_12,
    MC_13      = QK_MACRO_13,
    MC_14      = QK_MACRO_14,
    MC_15      = QK_MACRO_15,
    MC_16      = QK_MACRO_16,
    MC_17      = QK_MACRO_17,
    MC_18      = QK_MACRO_18,
    MC_19      = QK_MACRO_19,
    MC_20      = QK_MACRO_20,
    MC_21      = QK_MACRO_21,
    MC_22      = QK_MACRO_22,
    MC_23      = QK_MACRO_23,
    MC_24      = QK_MACRO_24,
    MC_25      = QK_MACRO_25,
    MC_26      = QK_MACRO_26,
    MC_27      = QK_MACRO_27,
    MC_28      = QK_MACRO_28,
    MC_29      = QK_MACRO_29,
    MC_30      = QK_MACRO_30,
    MC_31      = QK_MACRO_31,
    RGB_MOD    = RGB_MODE_FORWARD,
    RGB_RMOD   = RGB_MODE_REVERSE,
    RGB_M_P    = RGB_MODE_PLAIN,
    RGB_M_B    = RGB_MODE_BREATHE,
    RGB_M_R    = RGB_MODE_RAINBOW,
    RGB_M_SW   = RGB_MODE_SWIRL,
    RGB_M_SN   = RGB_MODE_SNAKE,
    RGB_M_K    = RGB_MODE_KNIGHT,
    RGB_M_X    = RGB_MODE_XMAS,
    RGB_M_G    = RGB_MODE_GRADIENT,
    RGB_M_T    = RGB_MODE_RGBTEST,
    RGB_M_TW   = RGB_MODE_TWINKLE,
    QK_BOOT    = QK_BOOTLOADER,
    QK_RBT     = QK_REBOOT,
    DB_TOGG    = QK_DEBUG_TOGGLE,
    EE_CLR     = QK_CLEAR_EEPROM,
    AS_DOWN    = QK_AUTO_SHIFT_DOWN,
    AS_UP      = QK_AUTO_SHIFT_UP,
    AS_RPT     = QK_AUTO_SHIFT_REPORT,
    AS_ON      = QK_AUTO_SHIFT_ON,
    AS_OFF     = QK_AUTO_SHIFT_OFF,
    AS_TOGG    = QK_AUTO_SHIFT_TOGGLE,
    QK_GESC    = QK_GRAVE_ESCAPE,
    VK_TOGG    = QK_VELOCIKEY_TOGGLE,
    SC_LCPO    = QK_SPACE_CADET_LEFT_CTRL_PARENTHESIS_OPEN,
    SC_RCPC    = QK_SPACE_CADET_RIGHT_CTRL_PARENTHESIS_CLOSE,
    SC_LSPO    = QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN,
    SC_RSPC    = QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE,
    SC_LAPO    = QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN,
    SC_RAPC    = QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE,
    SC_SENT    = QK_SPACE_CADET_RIGHT_SHIFT_ENTER,
    UC_NEXT    = QK_UNICODE_MODE_NEXT,
    UC_PREV    = QK_UNICODE_MODE_PREVIOUS,
    UC_MAC     = QK_UNICODE_MODE_MACOS,
    UC_LINX    = QK_UNICODE_MODE_LINUX,
    UC_WIN     = QK_UNICODE_MODE_WINDOWS,
    UC_BSD     = QK_UNICODE_MODE_BSD,
    UC_WINC    = QK_UNICODE_MODE_WINCOMPOSE,
    UC_EMAC    = QK_UNICODE_MODE_EMACS,
    CM_ON      = QK_COMBO_ON,
    CM_OFF     = QK_COMBO_OFF,
    CM_TOGG    = QK_COMBO_TOGGLE,
    DM_REC1    = QK_DYNAMIC_MACRO_RECORD_START_1,
    DM_REC2    = QK_DYNAMIC_MACRO_RECORD_START_2,
    DM_RSTP    = QK_DYNAMIC_MACRO_RECORD_STOP,
    DM_PLY1    = QK_DYNAMIC_MACRO_PLAY_1,
    DM_PLY2    = QK_DYNAMIC_MACRO_PLAY_2,
    QK_LEAD    = QK_LEADER,
    OS_ON      = QK_ONE_SHOT_ON,
    OS_OFF     = QK_ONE_SHOT_OFF,
    OS_TOGG    = QK_ONE_SHOT_TOGGLE,
    KO_TOGG    = QK_KEY_OVERRIDE_TOGGLE,
    KO_ON      = QK_KEY_OVERRIDE_ON,
    KO_OFF     = QK_KEY_OVERRIDE_OFF,
    SE_LOCK    = QK_SECURE_LOCK,
    SE_UNLK    = QK_SECURE_UNLOCK,
    SE_TOGG    = QK_SECURE_TOGGLE,
    SE_REQ     = QK_SECURE_REQUEST,
    CW_TOGG    = QK_CAPS_WORD_TOGGLE,
    AC_ON      = QK_AUTOCORRECT_ON,
    AC_OFF     = QK_AUTOCORRECT_OFF,
    AC_TOGG    = QK_AUTOCORRECT_TOGGLE,
};

// Range Helpers
#define IS_QK_BASIC(code) ((code) >= QK_BASIC && (code) <= QK_BASIC_MAX)
#define IS_QK_MODS(code) ((code) >= QK_MODS && (code) <= QK_MODS_MAX)
#define IS_QK_MOD_TAP(code) ((code) >= QK_MOD_TAP && (code) <= QK_MOD_TAP_MAX)
#define IS_QK_LAYER_TAP(code) ((code) >= QK_LAYER_TAP && (code) <= QK_LAYER_TAP_MAX)
#define IS_QK_LAYER_MOD(code) ((code) >= QK_LAYER_MOD && (code) <= QK_LAYER_MOD_MAX)
#define IS_QK_TO(code) ((code) >= QK_TO && (code) <= QK_TO_MAX)
#define IS_QK_MOMENTARY(code) ((code) >= QK_MOMENTARY && (code) <= QK_MOMENTARY_MAX)
#define IS_QK_DEF_LAYER(code) ((code) >= QK_DEF_LAYER && (code) <= QK_DEF_LAYER_MAX)
#define IS_QK_TOGGLE_LAYER(code) ((code) >= QK_TOGGLE_LAYER && (code) <= QK_TOGGLE_LAYER_MAX)
#define IS_QK_ONE_SHOT_LAYER(code) ((code) >= QK_ONE_SHOT_LAYER && (code) <= QK_ONE_SHOT_LAYER_MAX)
#define IS_QK_ONE_SHOT_MOD(code) ((code) >= QK_ONE_SHOT_MOD && (code) <= QK_ONE_SHOT_MOD_MAX)
#define IS_QK_LAYER_TAP_TOGGLE(code) ((code) >= QK_LAYER_TAP_TOGGLE && (code) <= QK_LAYER_TAP_TOGGLE_MAX)
#define IS_QK_SWAP_HANDS(code) ((code) >= QK_SWAP_HANDS && (code) <= QK_SWAP_HANDS_MAX)
#define IS_QK_TAP_DANCE(code) ((code) >= QK_TAP_DANCE && (code) <= QK_TAP_DANCE_MAX)
#define IS_QK_MAGIC(code) ((code) >= QK_MAGIC && (code) <= QK_MAGIC_MAX)
#define IS_QK_MIDI(code) ((code) >= QK_MIDI && (code) <= QK_MIDI_MAX)
#define IS_QK_SEQUENCER(code) ((code) >= QK_SEQUENCER && (code) <= QK_SEQUENCER_MAX)
#define IS_QK_JOYSTICK(code) ((code) >= QK_JOYSTICK && (code) <= QK_JOYSTICK_MAX)
#define IS_QK_PROGRAMMABLE_BUTTON(code) ((code) >= QK_PROGRAMMABLE_BUTTON && (code) <= QK_PROGRAMMABLE_BUTTON_MAX)
#define IS_QK_AUDIO(code) ((code) >= QK_AUDIO && (code) <= QK_AUDIO_MAX)
#define IS_QK_STENO(code) ((code) >= QK_STENO && (code) <= QK_STENO_MAX)
#define IS_QK_MACRO(code) ((code) >= QK_MACRO && (code) <= QK_MACRO_MAX)
#define IS_QK_LIGHTING(code) ((code) >= QK_LIGHTING && (code) <= QK_LIGHTING_MAX)
#define IS_QK_QUANTUM(code) ((code) >= QK_QUANTUM && (code) <= QK_QUANTUM_MAX)
#define IS_QK_KB(code) ((code) >= QK_KB && (code) <= QK_KB_MAX)
#define IS_QK_USER(code) ((code) >= QK_USER && (code) <= QK_USER_MAX)
#define IS_QK_UNICODE(code) ((code) >= QK_UNICODE && (code) <= QK_UNICODE_MAX)

// Group Helpers
#define IS_INTERNAL_KEYCODE(code) ((code) >= KC_NO && (code) <= KC_TRANSPARENT)
#define IS_BASIC_KEYCODE(code) ((code) >= KC_A && (code) <= KC_EXSEL)
#define IS_SYSTEM_KEYCODE(code) ((code) >= KC_SYSTEM_POWER && (code) <= KC_SYSTEM_WAKE)
#define IS_MEDIA_KEYCODE(code) ((code) >= KC_AUDIO_MUTE && (code) <= KC_ASSISTANT)
#define IS_MOUSE_KEYCODE(code) ((code) >= KC_MS_UP && (code) <= KC_MS_ACCEL2)
#define IS_MODIFIERS_KEYCODE(code) ((code) >= KC_LEFT_CTRL && (code) <= KC_RIGHT_GUI)
#define IS_SWAP_HANDS_KEYCODE(code) ((code) >= SH_TG && (code) <= SH_OS)
#define IS_MAGIC_KEYCODE(code) ((code) >= MAGIC_SWAP_CONTROL_CAPSLOCK && (code) <= MAGIC_TOGGLE_ESCAPE_CAPSLOCK)
#define IS_MIDI_KEYCODE(code) ((code) >= MI_ON && (code) <= MI_BENDU)
#define IS_SEQUENCER_KEYCODE(code) ((code) >= SQ_ON && (code) <= SQ_SCLR)
#define IS_JOYSTICK_KEYCODE(code) ((code) >= QK_JOYSTICK_BUTTON_0 && (code) <= QK_JOYSTICK_BUTTON_31)
#define IS_PROGRAMMABLE_BUTTON_KEYCODE(code) ((code) >= QK_PROGRAMMABLE_BUTTON_1 && (code) <= QK_PROGRAMMABLE_BUTTON_32)
#define IS_AUDIO_KEYCODE(code) ((code) >= AU_ON && (code) <= MUV_DE)
#define IS_STENO_KEYCODE(code) ((code) >= QK_STENO_BOLT && (code) <= QK_STENO_COMB_MAX)
#define IS_MACRO_KEYCODE(code) ((code) >= QK_MACRO_0 && (code) <= QK_MACRO_31)
#define IS_BACKLIGHT_KEYCODE(code) ((code) >= BL_ON && (code) <= BL_BRTG)
#define IS_RGB_KEYCODE(code) ((code) >= RGB_TOG && (code) <= RGB_MODE_TWINKLE)
#define IS_QUANTUM_KEYCODE(code) ((code) >= QK_BOOTLOADER && (code) <= QK_AUTOCORRECT_TOGGLE)
