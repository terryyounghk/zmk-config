#define QWERTY   0
#define HARMONY  1
#define COLEMAK  2
#define NUMBERS  3
#define NUMPAD   4
#define SYMBOLS  5
#define CODING   6
#define NAV      7
#define CONTROLS 8
#define SWITCH   9
#define PICO8    10
#define MOUSE    11
#define SCROLL   12
#define SNIPE    13
#define AFK      14

#define LAYERS_ALL \
        QWERTY   \
        HARMONY  \
        COLEMAK  \
        NUMBERS  \
        NUMPAD   \
        SYMBOLS  \
        CODING   \
        NAV      \
        CONTROLS \
        SWITCH   \
        PICO8    \
        MOUSE    \
        SCROLL   \
        SNIPE    \
        AFK

#define LAYERS_NORMAL \
        QWERTY   \
        HARMONY  \
        COLEMAK  \
        NUMBERS  \
        NUMPAD   \
        SYMBOLS  \
        CODING   \
        NAV      \
        CONTROLS \
        MOUSE    \
        SCROLL   \
        SNIPE    \
        AFK

// all keyboards I have are based on this
#include "base_keymap_5cols.h"

// other keyboards with more columns are extended
#if TY_COLUMNS==6
#include "base_keymap_6cols.h"
#endif
