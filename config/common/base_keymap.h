// layer indices - used in layer switching in keymap
#define QWERTY   0
#define NUMBERS  1
#define NUMPAD   2
#define SYMBOLS  3
#define CODING   4
#define CONTROLS 5
#define SWITCH   6
#define MOUSE    7
#define SCROLL   8
#define SNIPE    9
#define FUNCS    10
#define AFK      11

// reserved
#define LAYERS                0 1 2 3 4 5 6 7 8 9 10 11

// do not include the Switch keymap layer for combos
#define CUSTOM_COMBO_LAYERS   0 1 2 3 4 5 7 8 9 10 11

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
#define NUMPAD_UL \
                          &kp F1         &kp F2         &kp F3         &kp F4         &kp F5
#define NUMPAD_UR \
                                                                                                           &kp PLUS       &kp N7         &kp N8         &kp N9         &kp EQUAL
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMPAD_HL \
                          &kp F6         &kp F7         &kp F8         &kp F9         &kp F10
#define NUMPAD_HR \
                                                                                                           &kp MINUS      &kp N4         &kp N5         &kp N6         &kp DOT
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define NUMPAD_LL \
                          &kp F11        &kp F12        &kp F13        &kp F14        &kp F15
#define NUMPAD_LR \
                                                                                                           &kp N0         &kp N1         &kp N2         &kp N3         &kp FSLH
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define NUMPAD_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define NUMPAD_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
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
                          &none          &mkp RCLK      &mkp MCLK      &mkp LCLK      &kp K_MUTE
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
#define CONTROLS_6_HR                       CONTROLS_HR       &rgb_ug RGB_EFF
#define CONTROLS_6_LL     &bootloader       CONTROLS_LL
#define CONTROLS_6_LR                       CONTROLS_LR       &bootloader


/**
 * This is very specific to the "IINE Keyboard and Mouse Adapter for Switch"
 * Product link: https://www.iine.top/index.php?m=content&c=index&a=show&catid=205&id=181
 *
 * There is very little to no documentation, and this accessory does not allow custom mapping.
 * So the comment below is a mapping of the adapter itself for reference,
 * then my own actual mapping in this keyboard only corresponds to the IINE accessory's existing mapping.
 * Disclaimer: I only own a Switch, to the Xbox/PS4 mapping may be inaccurate.
 *
 * LJ = Left Joystick
 * RJ = Right Joystick
 * DP = D-Pad
 *
 *                      Switch              Xbox One            PS4
 * Mouse controls:
 * ================================================================================
 * Right Button         ZL                  LT                  L2
 * Left Button          ZR                  RT                  R2
 * Middle Button        R3                  R3                  R3
 * Move Up              RJ Up               RJ Up               RJ Up
 * Move Left            RJ Left             RJ Left             RJ Left
 * Move Down            RJ Down             RJ Down             RJ Down
 * Move Right           RJ Right            RJ Right            RJ Right
 *
 * Keyboard controls:
 * ================================================================================
 * Q                    L1                  L1                  L1
 * E                    R1                  R1                  R1
 * F1                   DP Up               DP Up               DP Up
 * 1                    DP Left             DP Left             DP Left
 * 2                    DP Down             DP Down             DP Down
 * 3                    DP Right            DP Right            DP Right
 * R                    Y                   Y                   ∆
 * F                    X                   X                   ☐
 * C                    B                   B                   ◯
 * Space                A                   A                   X
 * W                    LJ Up               LJ Up               LJ Up
 * A                    LJ Left             LJ Left             LJ Left
 * S                    LJ Down             LJ Down             LJ Down
 * D                    LJ Right            LJ Right            LJ Right
 * Left Shift           L3                  L3                  L3
 * Tab                  -                   View                Option
 * Esc                  Home                Home                PS
 * -                    Capture             Share               Share
 * Caps Lock            +                   Menu                /
 */

#define NS_REGISTER &kp LC(N2) // Used for IINE Adapter to register as Switch Controller
#define NS_L1       &kp Q
#define NS_R1       &kp E
#define NS_ZL       &mkp RCLK
#define NS_ZR       &mkp LCLK
#define NS_L3       &kp LSHIFT
#define NS_R3       &mkp MCLK
#define NS_LJ_U     &kp W
#define NS_LJ_L     &kp A
#define NS_LJ_D     &kp S
#define NS_LJ_R     &kp D
#define NS_RJ_U     &mmv MV_U
#define NS_RJ_L     &mmv MV_L
#define NS_RJ_D     &mmv MV_D
#define NS_RJ_R     &mmv MV_R
#define NS_DP_U     &kp F1
#define NS_DP_L     &kp N1
#define NS_DP_D     &kp N2
#define NS_DP_R     &kp N3
#define NS_A        &kp SPACE
#define NS_B        &kp C
#define NS_X        &kp F
#define NS_Y        &kp R
#define NS_MINUS    &kp TAB
#define NS_PLUS     &kp CAPS
#define NS_HOME     &kp ESC
#define NS_CAPTURE  &kp TILDE

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
#define FUNCS_UL \
                          &kp F1         &kp F2         &kp F3         &kp F4         &kp F5
#define FUNCS_UR \
                                                                                                           &kp F6         &kp F7         &kp F8         &kp F9         &kp F10
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define FUNCS_HL \
                          &to CODING     &to SYMBOLS    &to NUMPAD     &to QWERTY     &to CONTROLS
#define FUNCS_HR \
                                                                                                           &to CONTROLS   &to QWERTY     &to NUMBERS    &to SYMBOLS    &to CODING
                    /* ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┼──────────────┼──────────────┤ */
#define FUNCS_LL \
                          &bootloader    &sys_reset     &to SWITCH     &to MOUSE      &to SCROLL
#define FUNCS_LR \
                                                                                                           &kp F11        &kp F12        &to SNIPE      &sys_reset     &bootloader
                    /* ╰──────────────┴──────────────┴──────────────┼──────────────┼──────────────┤     ├──────────────┼──────────────┼──────────────┴──────────────┴──────────────╯ */
#define FUNCS_TL \
                                                        Y_LT3          Y_LT2          Y_LT1
#define FUNCS_TR \
                                                                                                           Y_RT1          Y_RT2          Y_RT3
                    /*                               ╰──────────────┴──────────────┴──────────────╯     ╰──────────────┴──────────────┴──────────────╯                               */

#define FUNCS_6_UL        &rgb_ug RGB_BRI   FUNCS_UL
#define FUNCS_6_UR                          FUNCS_UR          &rgb_ug RGB_SPI
#define FUNCS_6_HL        &rgb_ug RGB_TOG   FUNCS_HL
#define FUNCS_6_HR                          FUNCS_HR          &rgb_ug RGB_EFF
#define FUNCS_6_LL        &rgb_ug RGB_BRD   FUNCS_LL
#define FUNCS_6_LR                          FUNCS_LR          &rgb_ug RGB_SPI


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
