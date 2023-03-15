SRC += pinkpod.c

LTO_ENABLE = yes               # link time optimization -- achieves a smaller compiled size
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
BOOTMAGIC_ENABLE = lite         # Enable Bootmagic Lite
TAP_DANCE_ENABLE = no
VIA_ENABLE = yes

ENCODER_MAP_ENABLE = yes
SHIFT_BACKSPACE_DELETE = yes
CAPS_WORD_ENABLE = yes

ifeq ($(strip $(SHIFT_BACKSPACE_DELETE)), yes)
    OPT_DEFS += -DSHIFT_BACKSPACE_DELETE
endif
