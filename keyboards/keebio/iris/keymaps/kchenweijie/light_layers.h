#pragma once

/*

LED index mapping:

          (31)              (32)              (33)                                    (67)              (66)              (65)
┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
│0       │1       │2       │3       │4       │5       │                          │39      │38      │37      │36      │35      │34      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│11      │10      │9       │8       │7       │6       │                          │40      │41      │42      │43      │44      │45      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│12      │13      │14      │15      │16      │17      │                          │51      │50      │49      │48      │47      │46      │
├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
│23      │22      │21      │20      │19      │18      │27      │        │61      │52      │53      │54      │55      │56      │57      │
└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                               │24      │25      │26      │                 │60      │59      │58      │
                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
          (30)              (29)              (28)                                    (62)              (63)              (64)

*/

const rgblight_segment_t PROGMEM QWERTY_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {6, 5, 0, 0, 255},
    {13, 4, 60, 41, 164},
    {17, 6, 0, 0, 255},
    {24, 3, 60, 41, 164},

    // Right side
    {40, 5, 0, 0, 255},
    {47, 4, 60, 41, 164},
    {51, 6, 0, 0, 255},
    {58, 3, 60, 41, 164}
);

const rgblight_segment_t PROGMEM GAMING_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {0, 1, 60, 41, 164},
    {6, 3, 0, 0, 255},
    {9, 1, 60, 41, 164},
    {10, 1, 0, 0, 255},
    {11, 5, 60, 41, 164},
    {16, 7, 0, 0, 255},
    {23, 5, 60, 41, 164},

    // Right side
    {40, 5, 0, 0, 255},
    {47, 10, 0, 0, 255},
    {59, 1, 60, 41, 164}
);

const rgblight_segment_t PROGMEM NUMBERS_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {13, 4, 60, 41, 164},
    {25, 1, 60, 41, 164},

    // Right side
    {40, 5, 0, 0, 255},
    {47, 10, 0, 0, 255},
    {58, 3, 0, 0, 255}
);


const rgblight_segment_t PROGMEM SYMBOLS_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {13, 4, 60, 41, 164},
    {26, 1, 60, 41, 164},

    // Right side
    {40, 5, 0, 0, 255},
    {47, 10, 0, 0, 255},
    {58, 3, 0, 0, 255}
);

const rgblight_segment_t PROGMEM FUNCTIONS_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {13, 4, 60, 41, 164},
    {24, 1, 60, 41, 164},

    // Right side
    {41, 4, 0, 0, 255},
    {47, 4, 0, 0, 255},
    {53, 4, 0, 0, 255}
);

const rgblight_segment_t PROGMEM NAVIGATION_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {7, 2, 0, 0, 255},
    {13, 5, 0, 0, 255},
    {19, 1, 0, 0, 255},

    // Right side
    {47, 4, 60, 41, 164},
    {59, 1, 60, 41, 164}
);

const rgblight_segment_t PROGMEM GAMING_NUMS_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {7, 4, 0, 0, 255},
    {13, 4, 0, 0, 255},
    {19, 4, 0, 0, 255},
    {26, 1, 60, 41, 164}

    // Right side
);

const rgblight_segment_t PROGMEM GAMING_FNS_LIGHT_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left side
    {7, 4, 0, 0, 255},
    {13, 4, 0, 0, 255},
    {19, 4, 0, 0, 255},
    {27, 1, 60, 41, 164}

    // Right side
);

const rgblight_segment_t* const PROGMEM LIGHT_LAYERS[] = RGBLIGHT_LAYERS_LIST(
    QWERTY_LIGHT_LAYER,
    GAMING_LIGHT_LAYER,
    NUMBERS_LIGHT_LAYER,
    SYMBOLS_LIGHT_LAYER,
    FUNCTIONS_LIGHT_LAYER,
    NAVIGATION_LIGHT_LAYER,
    GAMING_NUMS_LIGHT_LAYER,
    GAMING_FNS_LIGHT_LAYER
);
