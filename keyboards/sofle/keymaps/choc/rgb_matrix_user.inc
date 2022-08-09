
RGB_MATRIX_EFFECT(layer_indicator)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
// e.g: A more complex effect, relying on external methods and state, with
// dedicated init and run methods
// static uint8_t some_global_state;
static void layer_indicator_complex_init(effect_params_t* params) {
    // some_global_state = 1;
}
static bool layer_indicator_complex_run(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t layer = get_highest_layer(layer_state);

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index <= led_max && index != NO_LED) {
                uint16_t key_code = keymap_key_to_keycode(layer, (keypos_t){col, row});
                // RGB_AZURE
                // RGB_BLACK/RGB_OFF
                // RGB_BLUE
                // RGB_CHARTREUSE
                // RGB_CORAL
                // RGB_CYAN
                // RGB_GOLD
                // RGB_GOLDENROD
                // RGB_GREEN
                // RGB_MAGENTA
                // RGB_ORANGE
                // RGB_PINK
                // RGB_PURPLE
                // RGB_RED
                // RGB_SPRINGGREEN
                // RGB_TEAL
                // RGB_TURQUOISE
                // RGB_WHITE
                // RGB_YELLOW
                switch (key_code) {
                    // Brackets
                    case KC_LCBR:
                    case KC_RCBR:
                    case KC_LBRC:
                    case KC_RBRC:
                        rgb_matrix_set_color(index, RGB_ORANGE);
                        break;

                    // Fn
                    case KC_F1:
                    case KC_F2:
                    case KC_F3:
                    case KC_F4:
                    case KC_F5:
                    case KC_F6:
                    case KC_F7:
                    case KC_F8:
                    case KC_F9:
                    case KC_F10:
                    case KC_F11:
                    case KC_F12:
                        rgb_matrix_set_color(index, RGB_PURPLE);
                        break;

                    // Audio
                    case KC_VOLD:
                    case KC_VOLU:
                    case KC_MUTE:
                        rgb_matrix_set_color(index, RGB_PURPLE);
                        break;

                    // Multimedia
                    case KC_MPRV:
                    case KC_MPLY:
                    case KC_MNXT:
                        rgb_matrix_set_color(index, RGB_MAGENTA);
                        break;

                    // Colors
                    case RGB_MOD:
                    case RGB_RMOD:
                        rgb_matrix_set_color(index, RGB_GOLD);
                        break;
                    case RGB_TOG:
                    case RGB_SPI:
                    case RGB_SPD:
                    case RGB_HUI:
                    case RGB_HUD:
                    case RGB_SAI:
                    case RGB_SAD:
                    case RGB_VAI:
                    case RGB_VAD:
                        rgb_matrix_set_color(index, RGB_GREEN);
                        break;

                    // Toggles
                    // case KC_QWERTY:
                    // case KC_COLEMAK:
                    // case CG_TOGG:
                    //     rgb_matrix_set_color(index, RGB_GREEN);
                    //     break;

                    // Delete
                    case KC_DEL:
                    // case KC_BSPC:
                    // case KC_DLINE:
                        rgb_matrix_set_color(index, RGB_RED);
                        break;

                    // Arrows
                    case KC_UP:
                    case KC_DOWN:
                    case KC_LEFT:
                    case KC_RGHT:
                        rgb_matrix_set_color(index, RGB_WHITE);
                        break;

                    // Movements
                    // case KC_LSTRT:
                    // case KC_PRVWD:
                    // case KC_NXTWD:
                    // case KC_LEND:
                    //     rgb_matrix_set_color(index, RGB_BLUE);
                    //     break;

                    // Not set in layer
                    case KC_TRNS:
                    case XXXXXXX:
                        rgb_matrix_set_color(index, RGB_OFF);
                        break;

                    default:
                        rgb_matrix_set_color(index, RGB_TEAL);
                        break;
                }
            }
        }
    }

    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_indicator(effect_params_t* params) {
    if (params->init) layer_indicator_complex_init(params);
    return layer_indicator_complex_run(params);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS

