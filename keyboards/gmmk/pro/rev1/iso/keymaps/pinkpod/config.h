#pragma once

#define DEBOUNCE 8

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true
#endif // RGB_MATRIX_ENABLE

// Force n-key rollover
#define FORCE_NKRO

// Both shifts activate CAPS WORD
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 3000
