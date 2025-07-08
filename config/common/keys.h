// This file contains keys or shortcut definitions that are independent from the keyboard layout

/// ---------------------------------------------------------------------------
// used in base_keymap.h
#define Y_RM                            &m_release_mods
#define Y_LT3                           &ht_mo_sl NUMPAD NUMBERS
#define Y_LT2                           &td_lshift
#define Y_LT1                           &mm_repeat
#define Y_RT1                           &ht_mo_kp NAV RETURN
#define Y_RT2                           &ht_mo_kp SYMBOLS SPACE
#define Y_RT2_NP                        &ht_mo_kp SYMBOLS N0
#define Y_RT3                           &ht_mo_kp NUMBERS TAB
#define Y_SEMI                          &td_semi
#define Y_FSLH                          &ht_mo_kp SNIPE FSLH
#define Y_COMMA                         &td_comma

/// ---------------------------------------------------------------------------
// used in base_keymap.h
#define LU5_CODING                      &m_code_esc_dqt
#define LU4_CODING                      &m_code_lte
#define LU3_CODING                      &m_code_esc_fslh
#define LU2_CODING                      &m_code_literal
#define LU1_CODING                      &m_code_arrow
#define LH5_CODING                      &m_code_async_fn_open
#define LH4_CODING                      &m_code_fn_call_arrow_open
#define LH3_CODING                      &m_code_fn_arrow_open
#define LH2_CODING                      &m_code_fn_call_arrow
#define LH1_CODING                      &m_code_fn_arrow
#define LL5_CODING                      &none
#define LL4_CODING                      &none
#define LL3_CODING                      &m_code_md_code_open
#define LL2_CODING                      &m_code_html_comment_open
#define LL1_CODING                      &m_code_html_comment_close

#define RU1_CODING                      &m_code_increment_assign
#define RU2_CODING                      &m_code_decrement_assign
#define RU3_CODING                      &m_code_comment_ml_open
#define RU4_CODING                      &m_code_gte
#define RU5_CODING                      &none
#define RH1_CODING                      &m_code_increment
#define RH2_CODING                      &m_code_and
#define RH3_CODING                      &m_code_equal
#define RH4_CODING                      &none
#define RH5_CODING                      &none
#define RL1_CODING                      &m_code_decrement
#define RL2_CODING                      &m_code_or
#define RL3_CODING                      &m_code_not_equal
#define RL4_CODING                      &none
#define RL5_CODING                      &none

/// ---------------------------------------------------------------------------
// tmux / terminal
#define TMUX_PFX                        &kp LC(SPACE) // tmux prefix
#define NVIM_CMD                        &kp COLON // nvim command
#define NVIM_LDR                        &kp SPACE // nvim leader key


/// ---------------------------------------------------------------------------
// special characters (macos)
#define Y_EURO                          LA(LS(N2))
#define Y_POUND                         LA(N3)
#define Y_YEN                           LA(Y)
#define Y_ELLIPSIS                      LA(SEMI)
#define Y_EMDASH                        LA(LS(MINUS))
#define Y_DEGREE                        LA(LS(N8))
#define Y_DIVIDE                        LA(SLASH)

/// ---------------------------------------------------------------------------
// modifier aliases
#define LHYPER                          LC(LA(LG(LSHIFT)))
#define LMEH                            LC(LA(LSHIFT))

#define HYPER(K)                        LC(LA(LG(LS(K))))
#define MEH(K)                          LC(LA(LS(K)))

/// ---------------------------------------------------------------------------
// macos shortcuts
#define Y_SPOTLIGHT                     LG(SPACE)
#define Y_APPLICATION_WINDOWS           LC(LA(DOWN)) // system default: LC(DOWN)
#define Y_NEXT_WINDOW                   LG(GRAVE)
#define Y_NEXT_APPLICATION              LG(TAB)
#define Y_CLOSE                         LG(W)
#define Y_COPY                          LG(C)
#define Y_CUT                           LG(X)
#define Y_DOCK                          LC(F3)
#define Y_LOCK_SCREEN                   LG(LC(Q))
#define Y_MISSION_CONTROL               LC(LA(UP)) // system default: LC(UP)
#define Y_LAUNCHPAD                     LG(LA(L)) // system default: none
#define Y_PASTE                         LG(V)
#define Y_QUIT                          LG(Q)
#define Y_SCREEN_CAPTURE_AREA           LG(LS(N4)) // Either use OS default, or CleanShot
#define Y_SCREEN_CAPTURE_FULL           LG(LS(N3)) // Either use OS default, or CleanShot
#define Y_TOGGLE_DND                    LC(LA(Q)) // Set in Preferences > Keyboard > Mission Control
#define Y_TOGGLE_STAGE_MANAGER          HYPER(M) // Set in Preferences > Keyboard > Mission Control
#define Y_UNDO                          LG(Z)
#define Y_FORCE_QUIT                    LG(LA(ESCAPE))
#define Y_SOUND_SETTINGS                LA(C_VOL_UP)
#define Y_DISPLAY_SETTINGS              LA(F15)
#define Y_CHAR_VIEWER                   LC(LG(SPACE))

// an annoying issue in MacOS where ^F2 to "Move Focus to Menu Bar" only works occassionally
// https://apple.stackexchange.com/questions/12723/control-f2-move-focus-to-menu-bar-only-works-occasionally
// this is still reserved in case Apple fix this, but I am not holding my breath
#define Y_MENUBAR                       LC(F2)

// Alternatively, using the "Show Help menu" shortcut fits closer to my use-case,
// with the extra benefit that you can start typing to access menu items
// However, the default <M-S-/> also does not always work for me, so this requires
// that you change the shortcut to something else.
#define Y_SHOW_HELP_MENU                MEH(FSLH) // system default: LG(LS(FSLH))
#define Y_MI_NAME_WINDOW                MEH(W) // custom: App Shortcut > All Applications > "Name Window..."

/// ---------------------------------------------------------------------------
// mac app shortcuts

// some apps use Cmd+[ and Cmd+]
#define Y_GO_BACK                       LG(LBKT)
#define Y_GO_FORWARD                    LG(RBKT)

#define Y_RAYCAST                       LG(SPACE)
#define Y_BARTENDER_SEARCH              LC(LA(ESCAPE))
#define Y_GOOGLE_DRIVE_SEARCH           LG(LA(G))
#define Y_HAZEOVER_TOGGLE               MEH(Z)
#define Y_HAZEOVER_INCREASE             LC(LA(Z))
#define Y_HAZEOVER_DECREASE             LC(LS(Z))
#define Y_KEYCAST_TOGGLE                HYPER(SEMI)
#define Y_ONE_PASSWORD_AUTOFILL         LG(BACKSLASH)
#define Y_ONE_PASSWORD_LOCK             LG(LS(L))
#define Y_ONE_PASSWORD_QUICK_ACCESS     LG(LS(SPACE))
#define Y_ONE_PASSWORD_SHOW             MEH(P)
#define Y_SHORTCAT                      HYPER(SPACE)
#define Y_PRESENTIFY_ANNOTATE           MEH(A)
#define Y_ONE_SWITCH_MUTE_MIC           LC(LS(M))

/// ---------------------------------------------------------------------------
// Capturing Shortcuts (CleanShot)
#define Y_CLEANSHOT_RESTORE_LAST        MEH(R) // custom: General > Restore Last Capture
#define Y_CLEANSHOT_ALL_IN_ONE          LC(LA(LS(N5))) // custom: General > All in One
#define Y_CLEANSHOT_HISTORY             HYPER(R) // custom: General > Open Capture History
#define Y_CLEANSHOT_CAPTURE_AREA        LG(LS(N4)) // Screenshots > Capture Area
#define Y_CLEANSHOT_CAPTURE_FULLSCREEN  LG(LS(N3)) // custom: Screenshots > Capture Fullscreen
#define Y_CLEANSHOT_CAPTURE_WINDOW      LG(LS(N5)) // custom: Screenshots > Capture Window
#define Y_CLEANSHOT_CAPTURE_SCROLLING   LG(LS(N6)) // custom: Scrolling Capture > Scrolling Capture
#define Y_CLEANSHOT_CAPTURE_ANNOTATE    LG(LS(N7)) // custom: Scrolling Capture > Capture Area & Annotate
#define Y_CLEANSHOT_PIN_TOGGLE          LG(LS(N8)) // custom: Pin > Toggle Pins
#define Y_CLEANSHOT_PIN_LAST            LG(LS(N9)) // custom: Pin > Pin Last Screenshot
#define Y_CLEANSHOT_ANNOTATE_LAST       LA(LS(L)) // custom: Annotate > Annotate last screenshot

#define Y_CLEANSHOT_OVERLAYS_CLOSE      MEH(Y) // custom: Quick Access Overlay > Close All Overlays
#define Y_CLEANSHOT_OVERLAYS_TOGGLE     HYPER(Y) // custom: Quick Access Overlay > Hide/Show Overlays

#define Y_CLEANSHOT_OCR                 LG(LS(N2))
#define Y_CLEANSHOT_RECORD_SCREEN       LG(LS(N1))

/// ---------------------------------------------------------------------------
// iTerm2 shortcuts
#define Y_ITERM_COPY_MODE               LG(LBKT)

/// ---------------------------------------------------------------------------
// vscode shortcuts
#define Y_VSCODE_ACTIVITY_BAR_TOGGLE    HYPER(A)
#define Y_VSCODE_CLOSE_ALL              HYPER(W)
#define Y_VSCODE_COMMENT_LINE           LG(SLASH)
#define Y_VSCODE_DICTATION_START        LG(LA(V))
#define Y_VSCODE_DICTATION_STOP         LG(LA(LS(V)))
#define Y_VSCODE_GIT_GRAPH              HYPER(G)
#define Y_VSCODE_GITLENS_TOGGLE_BLAME   HYPER(B)
#define Y_VSCODE_GOTO_TERMINAL          LC(GRAVE)
#define Y_VSCODE_MARKDOWN_PREVIEW_SIDE  HYPER(R)
#define Y_VSCODE_SAVE_ALL               HYPER(S)
#define Y_VSCODE_SEARCH                 LG(LS(F))
#define Y_VSCODE_SOURCE_CONTROL         LG(LS(A))
#define Y_VSCODE_SURROUND_WITH          LG(LS(T))
#define Y_VSCODE_SURROUND_WITH_COMMENT  LC(LS(T))
#define Y_VSCODE_TODO_TREE              HYPER(D)

// TODO: use these
#define Y_VSCODE_GOTO_SYMBOLS           LG(LS(O))
#define Y_VSCODE_GOTO_SYMBOLS_ACC       LG(LS(DOT))
#define Y_VSCODE_GOTO_DEFINITION        F12
#define Y_VSCODE_SHOW_ALL_EDITORS       LG(LA(TAB))

/// ---------------------------------------------------------------------------
// vscode: UI navigation or value adjustments

// Editor Group
// E + G + HJKL
#define Y_VSCODE_ACTIVE_EDITOR          LC(LA(UP))
#define Y_VSCODE_TOGGLE_PANEL           LG(J)
#define Y_VSCODE_NEXT_EDITOR_GROUP      LC(LA(RIGHT))
#define Y_VSCODE_PREV_EDITOR_GROUP      LC(LA(LEFT))

// Editor Split
#define Y_VSCODE_SPLIT_EDITOR_LEFT      HYPER(N4)
#define Y_VSCODE_SPLIT_EDITOR_RIGHT     HYPER(N6)
#define Y_VSCODE_SPLIT_EDITOR_UP        HYPER(N8)
#define Y_VSCODE_SPLIT_EDITOR_DOWN      HYPER(N2)

// Terminal Group
// T + G + HJKL
#define Y_VSCODE_NEXT_TERMINAL          LG(LS(RBKT))
#define Y_VSCODE_PREV_TERMINAL          LG(LS(LBKT))

// Problems / Errors
// B + HJKL
#define Y_VSCODE_NEXT_PROBLEM           LA(F8)
#define Y_VSCODE_PREV_PROBLEM           LA(LS(F8))
#define Y_VSCODE_VIEW_PROBLEMS          LG(LS(M))

// View Change
// C + V + HJKL
#define Y_VSCODE_NEXT_CHANGE            LA(F5)
#define Y_VSCODE_PREV_CHANGE            LA(LS(F5))
#define Y_VSCODE_NEXT_CHANGE_SHOW       LA(F3)
#define Y_VSCODE_PREV_CHANGE_SHOW       LA(LS(F3))

// Editor Size
// E + S + HJKL
#define Y_VSCODE_INC_EDITOR_WIDTH       LC(LS(LA(N)))
#define Y_VSCODE_DEC_EDITOR_WIDTH       LC(LS(LA(DOT)))
#define Y_VSCODE_INC_EDITOR_HEIGHT      LC(LS(LA(COMMA)))
#define Y_VSCODE_DEC_EDITOR_HEIGHT      LC(LS(LA(M)))

// Editor Size Reset / Toggle
// E + R + HJKL
#define Y_VSCODE_EDITOR_SIZES_RESET     HYPER(N)
#define Y_VSCODE_EDITOR_SIZES_TOGGLE    LC(LS(LA(SLASH)))

// Terminal Size
// T + S + HJKL
#define Y_VSCODE_INC_TERMINAL_WIDTH     LC(LS(LA(N)))
#define Y_VSCODE_DEC_TERMINAL_WIDTH     LC(LS(LA(DOT)))
#define Y_VSCODE_INC_TERMINAL_HEIGHT    LC(LS(LA(COMMA)))
#define Y_VSCODE_DEC_TERMINAL_HEIGHT    LC(LS(LA(M)))

// Editor Move
// D + F + HJKL
#define Y_VSCODE_MOVE_EDITOR_LEFT       HYPER(LEFT)
#define Y_VSCODE_MOVE_EDITOR_RIGHT      HYPER(RIGHT)
#define Y_VSCODE_MOVE_INTO_NEXT_GROUP   LC(LG(RIGHT))
#define Y_VSCODE_MOVE_INTO_PREV_GROUP   LC(LG(LEFT))

// Zoom
#define Y_VSCODE_ZOOM_IN                LG(LS(EQUAL))
#define Y_VSCODE_ZOOM_OUT               LG(LS(MINUS))
#define Y_VSCODE_ZOOM_RESET             LG(LS(N0))

// Editor Move
// D + F + HJKL
#define Y_VSCODE_DECREMENT_BY_10        LG(LA(LS(J)))
#define Y_VSCODE_INCREMENT_BY_10        LG(LA(LS(K)))
#define Y_VSCODE_DECREMENT_BY_1         LG(LA(J))
#define Y_VSCODE_INCREMENT_BY_1         LG(LA(K))

// Editor Lines
#define Y_VSCODE_COPY_LINE_UP           LA(K)
#define Y_VSCODE_COPY_LINE_DOWN         LA(J)
#define Y_VSCODE_MOVE_LINE_UP           LA(LS(K))
#define Y_VSCODE_MOVE_LINE_DOWN         LA(LS(J))

/// ---------------------------------------------------------------------------
// tmux shortcuts
#define Y_TMUX_LEADER                   LC(SPACE)

/// ---------------------------------------------------------------------------
// nvim shortcuts

#define Y_NVIM_SAVE                     LC(S)
#define Y_NVIM_SCROLL_DOWN              LC(D)
#define Y_NVIM_SCROLL_UP                LC(U)
#define Y_NVIM_TERMINAL                 LC(FSLH)
#define Y_NVIM_INCREMENT                LC(A)
#define Y_NVIM_DECREMENT                LC(X)
#define Y_NVIM_COMMENT                  LA(FSLH)

/// ---------------------------------------------------------------------------
// browser shortcuts

#define Y_CHROME_PROFILES               LG(LS(M))

/// ---------------------------------------------------------------------------
// browser extension shortcuts

// https://chromewebstore.google.com/detail/google-translate/aapbdbdomjkkjkaonfhkkikfgjllcleb
#define Y_CHROME_GOOGLE_TRANSLATE       LA(R)
// https://chromewebstore.google.com/detail/okta-browser-plugin/glnpjglilkicbckjpbgcfkogebgllemb
#define Y_OKTA                          LA(LS(O))

// https://chromewebstore.google.com/detail/qr-code-generator-and-rea/hkojjajclkgeijhcmfjcjkddfjpaimek
#define Y_CHROME_QR_GENERATE            LA(LS(Q))

// https://chromewebstore.google.com/detail/dark-reader/eimadpbcbfnmbkopoojfekhnkhdbieeh
#define Y_CHROME_DR_ACTIVATE            LC(D)
#define Y_CHROME_DR_TOGGLE              LA(LS(D))

// https://chromewebstore.google.com/detail/decreased-productivity/nlbpiflhmdcklcbihngeffpmoklbiooj
#define Y_CHROME_DP_PARANOID            LC(LA(P))

// https://chromewebstore.google.com/detail/bulk-image-downloader/lamfengpphafgjdgacmmnpakdphmjlji
#define Y_CHROME_BULK_IMAGE_DOWNLOADER  LA(A)

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
