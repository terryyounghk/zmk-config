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
#define MOUSE    10
#define SCROLL   11
#define SNIPE    12
#define AFK      13

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
        MOUSE    \
        SCROLL   \
        SNIPE    \
        AFK

#define LAYERS_NORMAL   \
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

// This is my 5-column keymap, defined with left and right hand sides separately
// as different keyboards may have additional keys either on the left or right side on each split keyboard side

                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define QWERTY_UL \
                          &kp Q          &kp W          &kp E          &kp R          &kp T
#define QWERTY_UR \
                                                                                                           &kp Y          &kp U          &kp I          &kp O          &kp P
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define QWERTY_HL \
                          &kp A          &kp S          &kp D          &kp F          &kp G
#define QWERTY_HR \
                                                                                                           &kp H          &kp J          &kp K          &kp L          &kp SEMI
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define QWERTY_LL \
                          &kp Z          &kp X          &kp C          &kp V          &kp B
#define QWERTY_LR \
                                                                                                           &kp N          &kp M          &td_comma      &kp DOT        Y_FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define QWERTY_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define QWERTY_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define QWERTY_6_UL       &kp UNDER         QWERTY_UL
#define QWERTY_6_UR                         QWERTY_UR         &td_apos
#define QWERTY_6_HL       &td_lctrl         QWERTY_HL
#define QWERTY_6_HR                         QWERTY_HR         &td_lctrl
#define QWERTY_6_LL       &td_lgui          QWERTY_LL
#define QWERTY_6_LR                         QWERTY_LR         &td_lalt


                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define HARMONY_UL \
                          &kp Q          &kp W          &kp R          &kp N          &kp F
#define HARMONY_UR \
                                                                                                           &kp J          &kp U          &kp O          &kp L          &kp P
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define HARMONY_HL \
                          &kp K          &kp S          &kp T          &kp H          &kp M
#define HARMONY_HR \
                                                                                                           &kp G          &kp I          &kp E          &kp A          &kp Y
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define HARMONY_LL \
                          &kp Z          &kp X          &kp C          &kp V          &kp B
#define HARMONY_LR \
                                                                                                           &kp MINUS      &kp D          &td_comma      &kp DOT        Y_FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define HARMONY_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define HARMONY_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define HARMONY_6_UL      &kp UNDER         HARMONY_UL
#define HARMONY_6_UR                        HARMONY_UR         &td_apos
#define HARMONY_6_HL      &td_lctrl         HARMONY_HL
#define HARMONY_6_HR                        HARMONY_HR         &td_lctrl
#define HARMONY_6_LL      &td_lgui          HARMONY_LL
#define HARMONY_6_LR                        HARMONY_LR         &td_lalt


                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define COLEMAK_UL \
                          &kp Q          &kp W          &kp F          &kp P          &kp B
#define COLEMAK_UR \
                                                                                                           &kp J          &kp L          &kp U          &kp Y          &kp SEMI
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define COLEMAK_HL \
                          &kp A          &kp R          &kp S          &kp T          &kp G
#define COLEMAK_HR \
                                                                                                           &kp M          &kp N          &kp E          &kp I          &kp O
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define COLEMAK_LL \
                          &kp Z          &kp X          &kp C          &kp D          &kp V
#define COLEMAK_LR \
                                                                                                           &kp K          &kp H          &td_comma      &kp DOT        Y_FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define COLEMAK_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define COLEMAK_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define COLEMAK_6_UL      &kp UNDER         COLEMAK_UL
#define COLEMAK_6_UR                        COLEMAK_UR         &td_apos
#define COLEMAK_6_HL      &td_lctrl         COLEMAK_HL
#define COLEMAK_6_HR                        COLEMAK_HR         &td_lctrl
#define COLEMAK_6_LL      &td_lgui          COLEMAK_LL
#define COLEMAK_6_LR                        COLEMAK_LR         &td_lalt


                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define NUMBERS_UL \
                          &kp EXCL       &kp AT         &kp HASH       &kp DOLLAR     &kp PERCENT
#define NUMBERS_UR \
                                                                                                           &kp CARET      &kp AMPS       &kp STAR       &kp GRAVE      &kp EQUAL
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMBERS_HL \
                          &kp N1         &kp N2         &kp N3         &kp N4         &kp N5
#define NUMBERS_HR \
                                                                                                           &kp N6         &kp N7         &kp N8         &kp N9         &kp N0
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMBERS_LL \
                          &kp Y_YEN      &kp Y_EURO     &kp Y_POUND    &kp UNDER      &kp COLON
#define NUMBERS_LR \
                                                                                                           &kp PLUS       &kp MINUS      &kp COMMA      &kp DOT        &kp FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define NUMBERS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define NUMBERS_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define NUMBERS_6_UL      &kp UNDER         NUMBERS_UL
#define NUMBERS_6_UR                        NUMBERS_UR        &td_apos
#define NUMBERS_6_HL      &td_lctrl         NUMBERS_HL
#define NUMBERS_6_HR                        NUMBERS_HR        &td_lctrl
#define NUMBERS_6_LL      &td_lgui          NUMBERS_LL
#define NUMBERS_6_LR                        NUMBERS_LR        &td_lalt



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define NUMPAD_UL \
                          &kp F1         &kp F2         &kp F3         &kp F4         &kp F5
#define NUMPAD_UR \
                                                                                                           &td_fslh       &kp N7         &kp N8         &kp N9         &td_plus
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMPAD_HL \
                          &kp F6         &kp F7         &kp F8         &kp F9         &kp F10
#define NUMPAD_HR \
                                                                                                           &td_star       &kp N4         &kp N5         &kp N6         &td_minus
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMPAD_LL \
                          &kp F11        &kp F12        &kp F13        &kp F14        &kp F15
#define NUMPAD_LR \
                                                                                                           &td_comma      &kp N1         &kp N2         &kp N3         &td_dot
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define NUMPAD_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define NUMPAD_TR \
                                                                                                           Y_RT1          Y_RT2_NP       Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define NUMPAD_6_UL      &kp UNDER         NUMPAD_UL
#define NUMPAD_6_UR                        NUMPAD_UR        &td_apos
#define NUMPAD_6_HL      &td_lctrl         NUMPAD_HL
#define NUMPAD_6_HR                        NUMPAD_HR        &td_lctrl
#define NUMPAD_6_LL      &td_lgui          NUMPAD_LL
#define NUMPAD_6_LR                        NUMPAD_LR        &td_lalt



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define SYMBOLS_UL \
                          &kp LT         &kp SEMI       &kp LPAR       &kp LBKT       &kp LBRC
#define SYMBOLS_UR \
                                                                                                           &kp RBRC       &kp RBKT       &kp RPAR       &kp TILDE      &kp GT
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SYMBOLS_HL \
                          &kp EXCL       &kp AT         &kp HASH       &kp DOLLAR     &kp PERCENT
#define SYMBOLS_HR \
                                                                                                           &kp CARET      &kp AMPS       &kp STAR       &kp GRAVE      &kp EQUAL
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SYMBOLS_LL \
                          &kp BSLH       &kp COLON      &kp UNDER      &kp MINUS      &kp PLUS
#define SYMBOLS_LR \
                                                                                                           &kp SQT        &kp PIPE       &kp COMMA      &kp DOT        &kp FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define SYMBOLS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define SYMBOLS_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define SYMBOLS_6_UL      &kp UNDER         SYMBOLS_UL
#define SYMBOLS_6_UR                        SYMBOLS_UR        &td_apos
#define SYMBOLS_6_HL      &td_lctrl         SYMBOLS_HL
#define SYMBOLS_6_HR                        SYMBOLS_HR        &td_lctrl
#define SYMBOLS_6_LL      &td_lgui          SYMBOLS_LL
#define SYMBOLS_6_LR                        SYMBOLS_LR        &td_lalt



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define CODING_UL \
                          LU5_CODING     LU4_CODING     LU3_CODING     LU2_CODING     LU1_CODING
#define CODING_UR \
                                                                                                           RU1_CODING     RU2_CODING     RU3_CODING     RU4_CODING     RU5_CODING
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CODING_HL \
                          LH5_CODING     LH4_CODING     LH3_CODING     LH2_CODING     LH1_CODING
#define CODING_HR \
                                                                                                           RH1_CODING     RH2_CODING     RH3_CODING     RH4_CODING     RH5_CODING
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CODING_LL \
                          LL5_CODING     LL4_CODING     LL3_CODING     LL2_CODING     LL1_CODING
#define CODING_LR \
                                                                                                           RL1_CODING     RL2_CODING     RL3_CODING     RL4_CODING     RL5_CODING
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define CODING_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define CODING_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define CODING_6_UL       &kp UNDER         CODING_UL
#define CODING_6_UR                         CODING_UR        &td_apos
#define CODING_6_HL       &td_lctrl         CODING_HL
#define CODING_6_HR                         CODING_HR        &td_lctrl
#define CODING_6_LL       &td_lgui          CODING_LL
#define CODING_6_LR                         CODING_LR        &td_lalt


                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define NAV_UL \
                          Y_RM           &kp END        &kp PG_UP      &kp PG_DN      &kp HOME
#define NAV_UR \
                                                                                                          &kp HOME        &kp PG_DN      &kp PG_UP      &kp END        Y_RM
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NAV_HL \
                          &kt LMEH       &kp RIGHT      &kp UP         &kp DOWN       &kp LEFT
#define NAV_HR \
                                                                                                          &kp LEFT        &kp DOWN       &kp UP         &kp RIGHT      &kt LMEH
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NAV_LL \
                          &kt LCTRL      &kt LALT       &kt LGUI       &kt LSHIFT     &kt LHYPER
#define NAV_LR \
                                                                                                          &kt LHYPER      &kt LSHIFT     &kt LGUI       &kt LALT       &kt LCTRL
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define NAV_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define NAV_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define NAV_6_UL          &kp UNDER         NAV_UL
#define NAV_6_UR                            NAV_UR         &td_apos
#define NAV_6_HL          &td_lctrl         NAV_HL
#define NAV_6_HR                            NAV_HR         &td_lctrl
#define NAV_6_LL          &td_lgui          NAV_LL
#define NAV_6_LR                            NAV_LR         &td_lalt



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define CONTROLS_UL \
                          &kp CAPS       &kp C_PREV     &kp C_PP       &kp C_NEXT     &kp C_VOL_UP
#define CONTROLS_UR \
                                                                                                           &out OUT_BLE   &mkp MB4       &mmv MV_U      &mkp MB5       &out OUT_USB
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CONTROLS_HL \
                          &bt BT_SEL 0   &bt BT_SEL 1   &bt BT_SEL 2   &bt BT_SEL 3   &kp C_VOL_DN
#define CONTROLS_HR \
                                                                                                           &msc MW_D      &mmv MV_L      &mmv MV_D      &mmv MV_R      &kp F15
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CONTROLS_LL \
                          &none          &mkp RCLK      &mkp MCLK      &mkp LCLK      &kp K_MUTE
#define CONTROLS_LR \
                                                                                                           &msc MW_U      &kp F11        &kp F12        &kp F13        &kp F14
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define CONTROLS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define CONTROLS_TR \
                                                                                                           &mkp LCLK      &mkp RCLK      &mkp MCLK
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define CONTROLS_6_UL     &rgb_ug RGB_BRI   CONTROLS_UL
#define CONTROLS_6_UR                       CONTROLS_UR       &rgb_ug RGB_SPI
#define CONTROLS_6_HL     &rgb_ug RGB_TOG   CONTROLS_HL
#define CONTROLS_6_HR                       CONTROLS_HR       &rgb_ug RGB_EFF
#define CONTROLS_6_LL     &rgb_ug RGB_BRD   CONTROLS_LL
#define CONTROLS_6_LR                       CONTROLS_LR       &rgb_ug RGB_SPD



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define SWITCH_UL \
                          NS_HOME        NS_ZL          NS_LJ_U        NS_L1          NS_MINUS
#define SWITCH_UR \
                                                                                                           NS_PLUS        NS_R1          NS_RJ_U        NS_ZR          NS_CAPTURE
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SWITCH_HL \
                          NS_Y           NS_LJ_L        NS_LJ_D        NS_LJ_R        NS_X
#define SWITCH_HR \
                                                                                                           NS_X           NS_RJ_L        NS_RJ_D        NS_RJ_R        NS_Y
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SWITCH_LL \
                          NS_L3          NS_R3          NS_DP_D        NS_DP_U        NS_Y
#define SWITCH_LR \
                                                                                                           NS_DP_L        NS_DP_D        NS_DP_U        NS_DP_R        NS_R3
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define SWITCH_TL \
                                                        Y_LT3          &out OUT_USB   &out OUT_BLE
#define SWITCH_TR \
                                                                                                           NS_A           NS_B           NS_REGISTER
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define SWITCH_6_UL           &none            SWITCH_UL
#define SWITCH_6_UR                            SWITCH_UR             &none
#define SWITCH_6_HL           &none            SWITCH_HL
#define SWITCH_6_HR                            SWITCH_HR             &none
#define SWITCH_6_LL           &none            SWITCH_LL
#define SWITCH_6_LR                            SWITCH_LR             &none

                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define MOUSE_UL \
                          &none          &mkp MB4       &none          &mkp MB5       &none
#define MOUSE_UR \
                                                                                                           &none          &mkp MB4       &none          &mkp MB5       &none
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define MOUSE_HL \
                          &none          &mkp RCLK      &mkp MCLK      &mkp LCLK      &none
#define MOUSE_HR \
                                                                                                           &none          &mkp LCLK      &mkp MCLK      &mkp RCLK      &none
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define MOUSE_LL \
                          &none          &none          &none          &none          &none
#define MOUSE_LR \
                                                                                                           &none          &none          &none          &none          &none
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define MOUSE_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define MOUSE_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define MOUSE_6_UL        &none            MOUSE_UL
#define MOUSE_6_UR                         MOUSE_UR          &none
#define MOUSE_6_HL        &none            MOUSE_HL
#define MOUSE_6_HR                         MOUSE_HR          &none
#define MOUSE_6_LL        &none            MOUSE_LL
#define MOUSE_6_LR                         MOUSE_LR          &none


                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define SCROLL_UL \
                          &trans         &trans         &trans         &trans         &trans
#define SCROLL_UR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SCROLL_HL \
                          &trans         &trans         &trans         &trans         &trans
#define SCROLL_HR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SCROLL_LL \
                          &trans         &trans         &trans         &trans         &trans
#define SCROLL_LR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define SCROLL_TL \
                                                        &trans         &trans         &trans
#define SCROLL_TR \
                                                                                                           &trans         &trans         &trans
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define SCROLL_6_UL       &none            SCROLL_UL
#define SCROLL_6_UR                        SCROLL_UR         &none
#define SCROLL_6_HL       &none            SCROLL_HL
#define SCROLL_6_HR                        SCROLL_HR         &none
#define SCROLL_6_LL       &none            SCROLL_LL
#define SCROLL_6_LR                        SCROLL_LR         &none

                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define SNIPE_UL \
                          &trans         &trans         &trans         &trans         &trans
#define SNIPE_UR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SNIPE_HL \
                          &trans         &trans         &trans         &trans         &trans
#define SNIPE_HR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define SNIPE_LL \
                          &trans         &trans         &trans         &trans         &trans
#define SNIPE_LR \
                                                                                                           &trans         &trans         &trans         &trans         &trans
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define SNIPE_TL \
                                                        &trans         &trans         &trans
#define SNIPE_TR \
                                                                                                           &trans         &trans         &trans
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define SNIPE_6_UL        &none            SNIPE_UL
#define SNIPE_6_UR                         SNIPE_UR          &none
#define SNIPE_6_HL        &none            SNIPE_HL
#define SNIPE_6_HR                         SNIPE_HR          &none
#define SNIPE_6_LL        &none            SNIPE_LL
#define SNIPE_6_LR                         SNIPE_LR          &none



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define AFK_UL \
                          &none          &none          &none          &none          &none
#define AFK_UR \
                                                                                                           &none          &none          &none          &none          &none
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define AFK_HL \
                          &none          &none          &none          &none          &none
#define AFK_HR \
                                                                                                           &none          &none          &none          &none          &none
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define AFK_LL \
                          &none          &none          &none          &none          &none
#define AFK_LR \
                                                                                                           &none          &none          &none          &none          &none
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define AFK_TL \
                                                        &none          &none          &none
#define AFK_TR \
                                                                                                           &none          &none          &none
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define AFK_6_UL           &none            AFK_UL
#define AFK_6_UR                            AFK_UR             &none
#define AFK_6_HL           &none            AFK_HL
#define AFK_6_HR                            AFK_HR             &none
#define AFK_6_LL           &none            AFK_LL
#define AFK_6_LR                            AFK_LR             &none
