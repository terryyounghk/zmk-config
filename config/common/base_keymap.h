#define QWERTY   0
#define HARMONY  1
#define COLEMAK  2
#define MACROS   3
#define NUMBERS  4
#define NUMPAD   5
#define SYMBOLS  6
#define CODING   7
#define NAV      8
#define CONTROLS 9
#define SWITCH   10
#define RETRO    11
#define PICO8    11
#define MOUSE    13
#define SCROLL   14
#define SNIPE    15
#define AFK      16

#define LAYERS_ALL \
        QWERTY   \
        HARMONY  \
        COLEMAK  \
        MACROS   \
        NUMBERS  \
        NUMPAD   \
        SYMBOLS  \
        CODING   \
        NAV      \
        CONTROLS \
        SWITCH   \
        RETRO    \
        PICO8    \
        MOUSE    \
        SCROLL   \
        SNIPE    \
        AFK

// for non-gaming combos
#define LAYERS_NORMAL \
        QWERTY   \
        HARMONY  \
        COLEMAK  \
        MACROS   \
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

// for gaming combos
#define LAYERS_GAMING \
        SWITCH   \
        PICO8    \
        RETRO

// all keyboards I have are based on this
#include "base_keymap_5cols.h"

// other keyboards with more columns are extended
#if TY_COLUMNS==6
#include "base_keymap_6cols.h"
#endif
