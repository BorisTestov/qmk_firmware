#pragma once

#include "alt_config.h"

void set_led_colors_in_range(unsigned char start_led, unsigned char end_led,  unsigned char r, unsigned char g, unsigned char b)
{
    for (int i = start_led; i <= end_led; ++i)
    {
        rgb_matrix_set_color(i, r,g,b);
    }
}

void change_effect_color(unsigned char hue)
{
    rgb_matrix_set_speed(63);
    rgb_matrix_mode(34);
    rgb_matrix_sethsv(hue, 255, 255);
}

void change_layer(unsigned char layer)
{
    alt_config.current_layer = layer;
    change_effect_color(alt_config.layer_hue[layer]);
}

void set_en_colors(void)
{
    set_led_colors_in_range(67, 105, 0, 0, 255);
}

void set_gr_colors(void)
{
    set_led_colors_in_range(67, 105, 0, 255, 0);
}

void set_ru_colors(void)
{
    set_led_colors_in_range(67, 105, 255, 0, 0);
}
