#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

const uint8_t LEFT_HOMEROW[] = {13, 14, 15, 16};
const uint8_t RIGHT_HOMEROW[] = {47, 48, 49, 50};
const uint8_t LEFT_THUMB[] = {24, 25, 26};
const uint8_t RIGHT_THUMB[] = {58, 59, 60};
const uint8_t LEFT_ALPHA[] = {6, 7, 8, 9, 10, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
const uint8_t RIGHT_ALPHA[] = {40, 41, 42, 43, 44, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 58, 59, 60};

static void clear_colors() {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
    }
}

static void set_colors(uint8_t leds[], RGB rgb) {
    for (uint8_t i : leds) {
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
