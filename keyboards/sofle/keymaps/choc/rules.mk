# OLED_DRIVER_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
WPM_ENABLE = yes

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
RGB_MATRIX_CUSTOM_USER = yes

# Reduce firmware size
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/#link-time-optimization-and-disabling-core-functionality
EXTRAFLAGS += -flto

# Change keymaps without flashing
# https://caniusevia.com/
# VIA_ENABLE = yes
