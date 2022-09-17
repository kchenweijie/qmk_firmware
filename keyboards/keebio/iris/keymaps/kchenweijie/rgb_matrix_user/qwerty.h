#include "common.h"

RGB_MATRIX_EFFECT(qwerty_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool qwerty_effect(effect_params_t* params) {
    clear_colors();
    set_colors(LEFT_ALPHA, RGB_WHITE);
    set_colors(RIGHT_ALPHA, RGB_WHITE);
    set_colors(LEFT_HOMEROW, RGB_CHARTREUSE);
    set_colors(RIGHT_HOMEROW, RGB_CHARTREUSE);
    set_colors(LEFT_THUMB, RGB_CHARTREUSE);
    set_colors(RIGHT_THUMB, RGB_CHARTREUSE);
    
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
