/*
  Key Positions
    Side:               L: Left                R: Right
    Columns:       5   4   3   2   1        1   2   3   4   5
                ╭─────────────────────╮  ╭─────────────────────╮
    U: Upper    │  0   1   2   3   4  │  │   5   6   7   8   9 │
    H: Home     │ 10  11  12  13  14  │  │  15  16  17  18  19 │
    L: Lower    │ 20  21  22  23  24  │  │  25  26  27  28  29 │
    T: Thumb    ╰───────╮ 30  31  32  │  │  33  34  35 ╭───────╯
                        ╰─────────────╯  ╰─────────────╯

  Notation
    Side:               L: Left                R: Right
    Columns:       5   4   3   2   1        1   2   3   4   5
                ╭─────────────────────╮  ╭─────────────────────╮
    U: Upper    │ LU5 LU4 LU3 LU2 LU1 │  │ RU1 RU2 RU3 RU4 RU5 │
    H: Home     │ LH5 LH4 LH3 LH2 LH1 │  │ RH1 RH2 RH3 RH4 RH5 │
    L: Lower    │ LL5 LL4 LL3 LL2 LL1 │  │ RL1 RL2 RL3 RL4 RL5 │
    T: Thumb    ╰───────╮ LT3 LT2 LT1 │  │ RT1 RT2 RT3 ╭───────╯
                        ╰─────────────╯  ╰─────────────╯
*/

// key positions
#define LU5 0
#define LU4 1
#define LU3 2
#define LU2 3
#define LU1 4
#define RU1 5
#define RU2 6
#define RU3 7
#define RU4 8
#define RU5 9

#define LH5 10
#define LH4 11
#define LH3 12
#define LH2 13
#define LH1 14
#define RH1 15
#define RH2 16
#define RH3 17
#define RH4 18
#define RH5 19

#define LL5 20
#define LL4 21
#define LL3 22
#define LL2 23
#define LL1 24
#define RL1 25
#define RL2 26
#define RL3 27
#define RL4 28
#define RL5 29

#define LT3 30
#define LT2 31
#define LT1 32
#define RT1 33
#define RT2 34
#define RT3 35

// behaviors
#define MT(layer)                       &mo_tog layer layer   // Macro to apply momentary-layer-on-hold/toggle-layer-on-tap to a specific layer

// special characters (macos)
#define Y_EURO                          LA(LS(N2))
#define Y_POUND                         LA(N3)
#define Y_YEN                           LA(Y)
#define Y_ELLIPSIS                      LA(SEMI)
#define Y_EMDASH                        LA(LS(MINUS))
#define Y_DEGREE                        LA(LS(N8))
#define Y_DIVIDE                        LA(SLASH)

// modifier aliases
#define LHYPER                          LC(LA(LG(LSHIFT)))
#define LMEH                            LC(LA(LSHIFT))

#define HYPER(K)                        LC(LA(LG(LS(K))))
#define MEH(K)                          LC(LA(LS(K)))

// macos shortcuts
#define Y_CLOSE                         LG(W)
#define Y_COPY                          LG(C)
#define Y_CUT                           LG(X)
#define Y_DOCK                          LC(F3)
#define Y_LOCK_SCREEN                   LG(LC(Q))
#define Y_MENUBAR                       LC(F2)
#define Y_PASTE                         LG(V)
#define Y_QUIT                          LG(Q)
#define Y_SCREEN_CAPTURE_AREA           LG(LS(N4)) // Either use OS default, or CleanShot
#define Y_SCREEN_CAPTURE_FULL           LG(LS(N3)) // Either use OS default, or CleanShot
#define Y_TOGGLE_DND                    LC(LA(Q)) // Set in Preferences > Keyboard > Mission Control
#define Y_TOGGLE_STAGE_MANAGER          HYPER(M) // Set in Preferences > Keyboard > Mission Control
#define Y_UNDO                          LG(Z)

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
#define Y_OKTA                          LA(LS(O))
#define Y_ONE_PASSWORD_AUTOFILL         LG(BACKSLASH)
#define Y_ONE_PASSWORD_LOCK             LG(LS(L))
#define Y_ONE_PASSWORD_QUICK            LG(LS(SPACE))
#define Y_ONE_PASSWORD_SHOW             MEH(P)
#define Y_SHORTCAT                      HYPER(SPACE)
#define Y_TEXTSNIPER_CAPTURE_TEXT       LG(LS(N2))
#define Y_TEXTSNIPER_READ_QRCODE        LG(LS(N1))
#define Y_PRESENTIFY_ANNOTATE           MEH(A)
#define Y_VSCODE_CLOSE_ALL              HYPER(W)
#define Y_VSCODE_EDITOR                 HYPER(E)
#define Y_VSCODE_GIT_GRAPH              HYPER(G)
#define Y_VSCODE_SAVE_ALL               HYPER(S)
#define Y_VSCODE_SEARCH                 LG(LS(F))
#define Y_VSCODE_SOURCE_CONTROL         LG(LS(A))
#define Y_VSCODE_TERMINAL               HYPER(T)
#define Y_VSCODE_TODO_TREE              HYPER(D)

// browser extension shortcuts

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
#define Y_CHROME_VC_ACTIVATE            LC(LG(DOT))

// https://chromewebstore.google.com/detail/decreased-productivity/nlbpiflhmdcklcbihngeffpmoklbiooj
#define Y_CHROME_DP_PARANOID            LC(LA(P))
