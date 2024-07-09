// This file contains keys or shortcut definitions that are independent from the keyboard layout

// layer indices - used in layer switching in keymap
#define QWERTY   0
#define NUMBERS  1
#define CODING   2
#define CONTROLS 3
#define AFK      4

// behaviors
#define MT(layer)                       &mo_tog layer layer   // Macro to apply momentary-layer-on-hold/toggle-layer-on-tap to a specific layer

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
#define Y_APPLICATION_WINDOWS           LC(DOWN)
#define Y_CLOSE                         LG(W)
#define Y_COPY                          LG(C)
#define Y_CUT                           LG(X)
#define Y_DOCK                          LC(F3)
#define Y_LOCK_SCREEN                   LG(LC(Q))
#define Y_MENUBAR                       LC(F2)
#define Y_MISSION_CONTROL               LC(UP)
#define Y_PASTE                         LG(V)
#define Y_QUIT                          LG(Q)
#define Y_SCREEN_CAPTURE_AREA           LG(LS(N4)) // Either use OS default, or CleanShot
#define Y_SCREEN_CAPTURE_FULL           LG(LS(N3)) // Either use OS default, or CleanShot
#define Y_TOGGLE_DND                    LC(LA(Q)) // Set in Preferences > Keyboard > Mission Control
#define Y_TOGGLE_STAGE_MANAGER          HYPER(M) // Set in Preferences > Keyboard > Mission Control
#define Y_UNDO                          LG(Z)

/// ---------------------------------------------------------------------------
// mac app shortcuts
#define Y_BARTENDER_SEARCH              LC(LA(ESCAPE))
#define Y_CLEANSHOT_ALL_IN_ONE          LC(LA(LS(N5)))
#define Y_CLEANSHOT_OVERLAYS_CLOSE      HYPER(Y)
#define Y_CLEANSHOT_OVERLAYS_TOGGLE     MEH(Y)
#define Y_CLEANSHOT_HISTORY             HYPER(R)
#define Y_CLEANSHOT_PIN                 HYPER(P)
#define Y_CLEANSHOT_WINDOW              LG(LS(N5))
#define Y_GDRIVE_SEARCH                 LG(LA(G))
#define Y_HAZEOVER_TOGGLE               MEH(Z)
#define Y_HAZEOVER_INCREASE             LC(LA(Z))
#define Y_HAZEOVER_DECREASE             LC(LS(Z))
#define Y_KEYCAST_TOGGLE                HYPER(SEMI)
#define Y_ONE_PASSWORD_AUTOFILL         LG(BACKSLASH)
#define Y_ONE_PASSWORD_LOCK             LG(LS(L))
#define Y_ONE_PASSWORD_QUICK            LG(LS(SPACE))
#define Y_ONE_PASSWORD_SHOW             MEH(P)
#define Y_SHORTCAT                      HYPER(SPACE)
#define Y_TEXTSNIPER_CAPTURE_TEXT       LG(LS(N2))
#define Y_TEXTSNIPER_READ_QRCODE        LG(LS(N1))
#define Y_PRESENTIFY_ANNOTATE           MEH(A)

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
// browser extension shortcuts

// https://chromewebstore.google.com/detail/okta-browser-plugin/glnpjglilkicbckjpbgcfkogebgllemb
#define Y_OKTA                          LA(LS(O))

// https://chromewebstore.google.com/detail/qr-code-generator-and-rea/hkojjajclkgeijhcmfjcjkddfjpaimek
#define Y_CHROME_QR_GENERATE            LA(LS(Q))

// https://chromewebstore.google.com/detail/dark-reader/eimadpbcbfnmbkopoojfekhnkhdbieeh
#define Y_CHROME_DR_ACTIVATE            LC(D)
#define Y_CHROME_DR_TOGGLE              LA(LS(D))

// https://chromewebstore.google.com/detail/chrome-show-tab-numbers/pflnpcinjbcfefgbejjfanemlgcfjbna
#define Y_CHROME_TN_TOGGLE              LC(LG(N))

// https://chromewebstore.google.com/detail/tab-groups-extension/nplimhmoanghlebhdiboeellhgmgommi
#define Y_CHROME_TGE_ACTIVATE           LC(T)
#define Y_CHROME_TGE_GO_GROUP_FIRST     LA(LS(N1))
#define Y_CHROME_TGE_GO_GROUP_LAST      LA(LS(N0))
#define Y_CHROME_TGE_TOGGLE_ALL_GROUPS  LC(LS(T))
#define Y_CHROME_TGE_TOGGLE_CURR_GROUP  LA(LS(T))
#define Y_CHROME_TGE_MOVE_GRP_TO_WIN    LA(LS(G))
#define Y_CHROME_TGE_MOVE_GRP_TO_LEFT   LA(LS(H))
#define Y_CHROME_TGE_MOVE_GRP_TO_RIGHT  LA(LS(L))
#define Y_CHROME_TGE_CLOSE_TO_RIGHT     LA(LS(DOT))
#define Y_CHROME_TGE_CLOSE_TO_LEFT      LA(LS(N))
#define Y_CHROME_TGE_CLOSE_OTHERS       LA(LS(COMMA))
#define Y_CHROME_TGE_CLOSE_GROUP        LA(LS(M))
#define Y_CHROME_TGE_CLOSE_UNGROUPED    LA(LS(U))
#define Y_CHROME_TGE_SAVE_GROUP         LA(LS(S))
#define Y_CHROME_TGE_GROUP_UNGROUPED    LA(LS(I))

// https://chromewebstore.google.com/detail/vimium-c-all-by-keyboard/hfjbmagddngcpeloejdejnfgbamkjaeg
#define Y_CHROME_VIMIUMC_ACTIVATE       LC(LG(DOT))

// https://chromewebstore.google.com/detail/decreased-productivity/nlbpiflhmdcklcbihngeffpmoklbiooj
#define Y_CHROME_DP_PARANOID            LC(LA(P))
