#pragma once

typedef union {
    uint32_t raw;
    struct {
        uint8_t current_layer :4;
        uint8_t layer_hue[3];  // Hue on each layer
    };
} alt_config_t;

alt_config_t alt_config = {
    .current_layer = 0,
    .layer_hue = {80, 0, 168},
};
