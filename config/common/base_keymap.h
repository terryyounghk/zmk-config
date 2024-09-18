// layer indices - used in layer switching in keymap
#define QWERTY   0
#define NUMBERS  1
#define SYMBOLS  2
#define CODING   3
#define CONTROLS 4
#define FUNCS    5
#define AFK      6

#define LAYERS   0 1 2 3 4 5 6

// This is my 5-column keymap, defined with left and right hand sides separately
// as different keyboards may have additional keys either on the left or right side on each split keyboard side

#define Y_LT3        &ht_mo_tog NUMBERS FUNCS
#define Y_LT2        &td_lshift
#define Y_LT1        &krtab
#define Y_RT1        &ht_mo_kp CODING RETURN
#define Y_RT2        &ht_mo_kp SYMBOLS SPACE
#define Y_RT3        &ht_mo_kp FUNCS TAB
#define Y_GUI        &ht_mo_sk FUNCS LGUI
#define Y_SEMI       &ht_mo_kp CONTROLS SEMI

                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define QWERTY_UL \
                          &kp Q          &kp W          &kp E          &kp R          &kp T
#define QWERTY_UR \
                                                                                                           &kp Y          &kp U          &kp I          &kp O          &kp P
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define QWERTY_HL \
                          &kp A          &kp S          &kp D          &kp F          &kp G
#define QWERTY_HR \
                                                                                                           &kp H          &kp J          &kp K          &kp L          Y_SEMI
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define QWERTY_LL \
                          &kp Z          &kp X          &kp C          &kp V          &kp B
#define QWERTY_LR \
                                                                                                           &kp N          &kp M          &kp COMMA      &kp DOT        &kp FSLH
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
#define QWERTY_6_LL       Y_GUI             QWERTY_LL
#define QWERTY_6_LR                         QWERTY_LR         &td_lalt


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
                          &kp Y_YEN      &kp Y_EURO     &kp Y_POUND    &kp Y_DEGREE   &kp Y_DIVIDE
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
                                                                                                           &kp COLON      &kp PIPE       &kp COMMA      &kp DOT        &kp FSLH
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
                          &kp CARET      &kp AT         &kp LPAR       &kp RPAR       &kp DOLLAR
#define CODING_UR \
                                                                                                           &kp HOME       &kp PG_DN      &kp PG_UP      &kp END        &kp GRAVE
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CODING_HL \
                          &kp PIPE       &kp HASH       &kp LBKT       &kp RBKT       &kp TILDE
#define CODING_HR \
                                                                                                           &kp LEFT       &kp DOWN       &kp UP         &kp RIGHT      &kp COLON
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define CODING_LL \
                          &kp EXCL       &kp BSLH       &kp LBRC       &kp RBRC       &kp FSLH
#define CODING_LR \
                                                                                                           &kp PERCENT    &kp AMPS       &kp COMMA      &kp DOT        &kp STAR
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define CODING_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define CODING_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define CODING_6_UL       &kp UNDER         CODING_UL
#define CODING_6_UR                         CODING_UR         &td_apos
#define CODING_6_HL       &td_lctrl         CODING_HL
#define CODING_6_HR                         CODING_HR         &td_lctrl
#define CODING_6_LL       &td_lgui          CODING_LL
#define CODING_6_LR                         CODING_LR         &td_lalt



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
                          &non           &mkp RCLK      &mkp MCLK      &mkp LCLK      &kp K_MUTE
#define CONTROLS_LR \
                                                                                                           &msc MW_U      &kp F11        &kp F12        &kp F13        &kp F14
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define CONTROLS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define CONTROLS_TR \
                                                                                                           &mkp LCLK      &mkp RCLK      &mkp MCLK
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define CONTROLS_6_UL     &sys_reset        CONTROLS_UL
#define CONTROLS_6_UR                       CONTROLS_UR       &sys_reset
#define CONTROLS_6_HL     &rgb_ug RGB_TOG   CONTROLS_HL
#define CONTROLS_6_HR                       CONTROLS_HR       &rgb_ug RGB_TOG
#define CONTROLS_6_LL     &bootloader       CONTROLS_LL
#define CONTROLS_6_LR                       CONTROLS_LR       &bootloader



                    /* ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮     ╭──────────────┬──────────────┬──────────────┬──────────────┬──────────────╮ */
#define FUNCS_UL \
                          &kp F1         &kp F2         &kp F3         &kp F4         &kp F5
#define FUNCS_UR \
                                                                                                           &kp F6         &kp F7         &kp F8         &kp F9         &kp F10
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define FUNCS_HL \
                          &to QWERTY     &to CONTROLS   &to CODING     &to NUMBERS    &to SYMBOLS
#define FUNCS_HR \
                                                                                                           &to SYMBOLS    &to NUMBERS    &to CODING     &to CONTROLS   &to QWERTY
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define FUNCS_LL \
                          &bootloader    &sys_reset     &none          &kp F12        &kp F11
#define FUNCS_LR \
                                                                                                           &kp F11        &kp F12        &none          &sys_reset     &bootloader
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define FUNCS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define FUNCS_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define FUNCS_6_UL        &none             FUNCS_UL
#define FUNCS_6_UR                          FUNCS_UR          &none
#define FUNCS_6_HL        &none             FUNCS_HL
#define FUNCS_6_HR                          FUNCS_HR          &none
#define FUNCS_6_LL        &none             FUNCS_LL
#define FUNCS_6_LR                          FUNCS_LR          &none


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
