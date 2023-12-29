BOOTLOADER = caterina

FORCE_NKRO = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

OLED_ENABLE = yes
OLED_DRIVER = ssd1306
ifeq ($(OLED_ENABLE),yes)
	SRC += ./oled.c
endif

#WPM_ENABLE = yes
#LTO_ENABLE = yes

RGBLIGHT_ENABLE = no
#RGB_MATRIX_ENABLE = yes
#ifeq ($(RGB_MATRIX_ENABLE),yes)
#	SRC += ./rgb.c
#endif

ENCODER_MAP_ENABLE = no
AUTO_SHIFT_ENABLE = no
