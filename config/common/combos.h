/*
 * This file contains definitions of "Base Keys".
 * "Base Keys" are keys that are used in a set of combos that share the same
 * theme of intention or purpose.
 */

// which thumb key performs which feature: &sl, &tog, &sk, &kt
#define BK_SLR                  RT1                     // Sticky Layer (Right)
#define BK_SLL                  LT1                     // Sticky Layer (Left)
#define BK_TGR                  RT2                     // Layer Toggle (Right)
#define BK_TGL                  LT2                     // Layer Toggle (Left)
#define BK_SKR                  RT1                     // Sticky Key (Right)
#define BK_SKL                  LT1                     // Sticky Key (Left)
#define BK_KTR                  RT2                     // Key Toggle (Right)
#define BK_KTL                  LT2                     // Key Toggle (Left)

// Base Key for typing layout switching
#define BK_TYPING               LU5

// Base keys for contextual combos
#define BK_APPS                 RH5
#define BK_NEOVIM_L             LT1
#define BK_NEOVIM_R             RT1
#define BK_CODING_L             LT1 // unused but reserved
#define BK_CODING_R             RT1 // unused but reserved
#define BK_CAPTURE              LH4 LL3
#define BK_BROWSER_L            LL1
#define BK_BROWSER_R            RL1

// different combos to trigger the same tmux leader key
#define BK_TMUX_LLDR            LH4 LL2
#define BK_TMUX_RLDR            RH4 RL2

// tmux combo base keys
#define BK_TMUX_CBK_L           LT2
#define BK_TMUX_CBK_R           RT2

// vscode
#define BK_VSCODE               RL4

// Switch
#define BK_SWITCH               LL5

// RetroArch
#define BK_RA                   LL5
