// extends base_keymap.h on both left and ride sides
#define QWERTY_6_UL       &kp UNDER         QWERTY_UL
#define QWERTY_6_UR                         QWERTY_UR         &td_apos
#define QWERTY_6_HL       &td_lctrl         QWERTY_HL
#define QWERTY_6_HR                         QWERTY_HR         &td_lctrl
#define QWERTY_6_LL       &td_lgui          QWERTY_LL
#define QWERTY_6_LR                         QWERTY_LR         &td_lalt

#define HARMONY_6_UL      &kp UNDER         HARMONY_UL
#define HARMONY_6_UR                        HARMONY_UR        &td_apos
#define HARMONY_6_HL      &td_lctrl         HARMONY_HL
#define HARMONY_6_HR                        HARMONY_HR        &td_lctrl
#define HARMONY_6_LL      &td_lgui          HARMONY_LL
#define HARMONY_6_LR                        HARMONY_LR        &td_lalt

#define COLEMAK_6_UL      &kp UNDER         COLEMAK_UL
#define COLEMAK_6_UR                        COLEMAK_UR        &td_apos
#define COLEMAK_6_HL      &td_lctrl         COLEMAK_HL
#define COLEMAK_6_HR                        COLEMAK_HR        &td_lctrl
#define COLEMAK_6_LL      &td_lgui          COLEMAK_LL
#define COLEMAK_6_LR                        COLEMAK_LR        &td_lalt

#define MACROS_6_UL       &none             MACROS_UL
#define MACROS_6_UR                         MACROS_UR         &none
#define MACROS_6_HL       &none             MACROS_HL
#define MACROS_6_HR                         MACROS_HR         &none
#define MACROS_6_LL       &none             MACROS_LL
#define MACROS_6_LR                         MACROS_LR         &none

#define NUMBERS_6_UL      &kp UNDER         NUMBERS_UL
#define NUMBERS_6_UR                        NUMBERS_UR        &td_apos
#define NUMBERS_6_HL      &td_lctrl         NUMBERS_HL
#define NUMBERS_6_HR                        NUMBERS_HR        &td_lctrl
#define NUMBERS_6_LL      &td_lgui          NUMBERS_LL
#define NUMBERS_6_LR                        NUMBERS_LR        &td_lalt

#define NUMPAD_6_UL       &kp UNDER         NUMPAD_UL
#define NUMPAD_6_UR                         NUMPAD_UR         &td_apos
#define NUMPAD_6_HL       &td_lctrl         NUMPAD_HL
#define NUMPAD_6_HR                         NUMPAD_HR         &td_lctrl
#define NUMPAD_6_LL       &td_lgui          NUMPAD_LL
#define NUMPAD_6_LR                         NUMPAD_LR         &td_lalt

#define SYMBOLS_6_UL      &kp UNDER         SYMBOLS_UL
#define SYMBOLS_6_UR                        SYMBOLS_UR        &td_apos
#define SYMBOLS_6_HL      &td_lctrl         SYMBOLS_HL
#define SYMBOLS_6_HR                        SYMBOLS_HR        &td_lctrl
#define SYMBOLS_6_LL      &td_lgui          SYMBOLS_LL
#define SYMBOLS_6_LR                        SYMBOLS_LR        &td_lalt

#define CODING_6_UL       &kp UNDER         CODING_UL
#define CODING_6_UR                         CODING_UR         &td_apos
#define CODING_6_HL       &td_lctrl         CODING_HL
#define CODING_6_HR                         CODING_HR         &td_lctrl
#define CODING_6_LL       &td_lgui          CODING_LL
#define CODING_6_LR                         CODING_LR         &td_lalt

#define NAV_6_UL          &kp UNDER         NAV_UL
#define NAV_6_UR                            NAV_UR            &td_apos
#define NAV_6_HL          &td_lctrl         NAV_HL
#define NAV_6_HR                            NAV_HR            &td_lctrl
#define NAV_6_LL          &td_lgui          NAV_LL
#define NAV_6_LR                            NAV_LR            &td_lalt

#if IS_ENABLED(CONFIG_ZMK_RGB_UNDERGLOW)
#define CONTROLS_6_UL     &rgb_ug RGB_BRI   CONTROLS_UL
#define CONTROLS_6_UR                       CONTROLS_UR       &rgb_ug RGB_SPI
#define CONTROLS_6_HL     &rgb_ug RGB_TOG   CONTROLS_HL
#define CONTROLS_6_HR                       CONTROLS_HR       &rgb_ug RGB_EFF
#define CONTROLS_6_LL     &rgb_ug RGB_BRD   CONTROLS_LL
#define CONTROLS_6_LR                       CONTROLS_LR       &rgb_ug RGB_SPD
#else
#define CONTROLS_6_UL     &sys_reset        CONTROLS_UL
#define CONTROLS_6_UR                       CONTROLS_UR       &sys_reset
#define CONTROLS_6_HL     &td_lctrl         CONTROLS_HL
#define CONTROLS_6_HR                       CONTROLS_HR       &td_lctrl
#define CONTROLS_6_LL     &bootloader       CONTROLS_LL
#define CONTROLS_6_LR                       CONTROLS_LR       &bootloader
#endif

#define SWITCH_6_UL       &none             SWITCH_UL
#define SWITCH_6_UR                         SWITCH_UR         &none
#define SWITCH_6_HL       &none             SWITCH_HL
#define SWITCH_6_HR                         SWITCH_HR         &none
#define SWITCH_6_LL       &none             SWITCH_LL
#define SWITCH_6_LR                         SWITCH_LR         &none

#define RETRO_6_UL        &none             RETRO_UL
#define RETRO_6_UR                          RETRO_UR          &none
#define RETRO_6_HL        &none             RETRO_HL
#define RETRO_6_HR                          RETRO_HR          &none
#define RETRO_6_LL        &none             RETRO_LL
#define RETRO_6_LR                          RETRO_LR          &none

#define PICO8_6_UL        &none             PICO8_UL
#define PICO8_6_UR                          PICO8_UR          &none
#define PICO8_6_HL        &none             PICO8_HL
#define PICO8_6_HR                          PICO8_HR          &none
#define PICO8_6_LL        &none             PICO8_LL
#define PICO8_6_LR                          PICO8_LR          &none

#define MOUSE_6_UL        &none             MOUSE_UL
#define MOUSE_6_UR                          MOUSE_UR          &none
#define MOUSE_6_HL        &none             MOUSE_HL
#define MOUSE_6_HR                          MOUSE_HR          &none
#define MOUSE_6_LL        &none             MOUSE_LL
#define MOUSE_6_LR                          MOUSE_LR          &none

#define SCROLL_6_UL       &none             SCROLL_UL
#define SCROLL_6_UR                         SCROLL_UR         &none
#define SCROLL_6_HL       &none             SCROLL_HL
#define SCROLL_6_HR                         SCROLL_HR         &none
#define SCROLL_6_LL       &none             SCROLL_LL
#define SCROLL_6_LR                         SCROLL_LR         &none

#define SNIPE_6_UL        &none             SNIPE_UL
#define SNIPE_6_UR                          SNIPE_UR          &none
#define SNIPE_6_HL        &none             SNIPE_HL
#define SNIPE_6_HR                          SNIPE_HR          &none
#define SNIPE_6_LL        &none             SNIPE_LL
#define SNIPE_6_LR                          SNIPE_LR          &none

#define AFK_6_UL          &none             AFK_UL
#define AFK_6_UR                            AFK_UR            &none
#define AFK_6_HL          &none             AFK_HL
#define AFK_6_HR                            AFK_HR            &none
#define AFK_6_LL          &none             AFK_LL
#define AFK_6_LR                            AFK_LR            &none
