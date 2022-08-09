#pragma once

// Plug USB into the left half of the keyboard
// see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
// #define MASTER_LEFT
#define EE_HANDS

#define USE_I2C

// I suspect this is only needed for certain ProMicros
// Not sure what the disadvantages are / why it isn't on by default
#define SPLIT_USB_DETECT
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
// #define SPLIT_WPM_ENABLE
// #define SPLIT_OLED_ENABLE
#define SPLIT_TRANSPORT_MIRROR

// RGB Configuration
// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D3
// #define RGBLED_SPLIT { 29, 29 }
#define RGB_MATRIX_SPLIT { 29, 29 }
#define DRIVER_LED_TOTAL 58

// #define OLED_UPDATE_INTERVAL 100

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_STARTUP_HUE 100
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL 120
// limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_SPD_STEP 5
#define RGB_MATRIX_HUE_STEP 4
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8


// RGB animations. Disable the animations you don't want/need.
#define ENABLE_RGB_MATRIX_SOLID_COLOR               // Static single hue, no speed support
#define ENABLE_RGB_MATRIX_ALPHAS_MODS               // Static dual hue, speed is hue for secondary hue
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN          // Static gradient top to bottom, speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT       // Static gradient left to right, speed controls how much gradient changes
#define DISABLE_RGB_MATRIX_BREATHING                 // Single hue brightness cycling animation
#define DISABLE_RGB_MATRIX_BAND_SAT                  // Single hue band fading saturation scrolling left to right
#define DISABLE_RGB_MATRIX_BAND_VAL                  // Single hue band fading brightness scrolling left to right
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT         // Single hue 3 blade spinning pinwheel fades saturation
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL         // Single hue 3 blade spinning pinwheel fades brightness
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT           // Single hue spinning spiral fades saturation
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL           // Single hue spinning spiral fades brightness
#define DISABLE_RGB_MATRIX_CYCLE_ALL                 // Full keyboard solid hue cycling through full gradient
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT          // Full gradient scrolling left to right
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN             // Full gradient scrolling top to bottom
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN              // Full gradient scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL         // Full dual gradients scrolling out to in
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON    // Full gradent Chevron shapped scrolling left to right
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL            // Full gradient spinning pinwheel around center of keyboard
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL              // Full gradient spinning spiral around center of keyboard
#define DISABLE_RGB_MATRIX_DUAL_BEACON               // Full gradient spinning around center of keyboard
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON            // Full tighter gradient spinning around center of keyboard
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS         // Full dual gradients spinning two halfs of keyboard
#define DISABLE_RGB_MATRIX_RAINDROPS                 // Randomly changes a single key's hue
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS       // Randomly changes a single key's hue and saturation
#define DISABLE_RGB_MATRIX_HUE_BREATHING             // Hue shifts up a slight ammount at the same time, then shifts back
#define DISABLE_RGB_MATRIX_HUE_PENDULUM              // Hue shifts up a slight ammount in a wave to the right, then back to the left
#define DISABLE_RGB_MATRIX_HUE_WAVE                  // Hue shifts up a slight ammount and then back down in a wave to the right
#define DISABLE_RGB_MATRIX_PIXEL_FRACTAL             // Single hue fractal filled keys pulsing horizontally out to edges
#define DISABLE_RGB_MATRIX_PIXEL_FLOW                // Pulsing RGB flow along LED wiring with random hues
#define DISABLE_RGB_MATRIX_PIXEL_RAIN                // Randomly light keys with random hues
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP            // How hot is your WPM!
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 100
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN              // That famous computer simulation
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE     // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE            // Static single hue, pulses keys hit to shifted hue then fades to current hue
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define DISABLE_RGB_MATRIX_SPLASH                    // Full gradient & value pulse away from a single key hit then fades value out
#define DISABLE_RGB_MATRIX_MULTISPLASH               // Full gradient & value pulse away from multiple key hits then fades value out
#define DISABLE_RGB_MATRIX_SOLID_SPLASH              // Hue & value pulse away from a single key hit then fades value out
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH         // Hue & value pulse away from multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_EFFECT_MAX
