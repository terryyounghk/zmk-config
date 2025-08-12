/*
  CAUTION:  This is a custom wireless Corne build purchased from Taobao
            with a rotary encoder on the left and a joystick on the right.
            Hence, the layout is very different from your typical Corne.

            In terms of key positions:
            Left Column 0 is the left encoder which is disabled.
            Right Column 0 is the joystick up/down/left/right


  Key Positions
  Side:                    L: Left            L/R Encoders           R: Right
    Columns:       6   5   4   3   2   1      LE            RE           1   2   3   4   5   6
                ╭─────────────────────────╮ ╭─────╮  ╭─────────────╮ ╭─────────────────────────╮
    U: Upper    │  0   1   2   3   4   5  │ │     │  │      6      │ │   7   8   9  10  11  12 │
    H: Home     │ 13  14  15  16  17  18  │ │     │  │ 19  20  21  │ │  22  23  24  25  26  27 │
    L: Lower    │ 28  29  30  31  32  33  │ │  34 │  │     35      │ │  36  37  38  39  40  41 │
    T: Thumb    ╰───────────╮ 42  43  44  │ │     │  │             │ │  45  46  47  ╭──────────╯
                            ╰─────────────╯ ╰─────╯  ╰─────────────╯ ╰──────────────╯

  Notation
    Side:                  L: Left            L/R Encoders           R: Right
    Columns:       6   5   4   3   2   1      LE           RE            1   2   3   4   5   6
                ╭─────────────────────────╮ ╭─────╮  ╭─────────────╮ ╭─────────────────────────╮
    U: Upper    │ LU6 LU5 LU4 LU3 LU2 LU1 │ │     │  │     REU     │ │ RU1 RU2 RU3 RU4 RU5 RU6 │
    H: Home     │ LH6 LH5 LH4 LH3 LH2 LH1 │ │     │  │ REL REC RER │ │ RH1 RH2 RH3 RH4 RH5 RH6 │
    L: Lower    │ LL6 LL5 LL4 LL3 LL2 LL1 │ │ LEC │  │     RED     │ │ RL1 RL2 RL3 RL4 RL5 RL6 │
    T: Thumb    ╰───────────╮ LT3 LT2 LT1 │ │     │  │             │ │ RT1 RT2 RT3  ╭──────────╯
                            ╰─────────────╯ ╰─────╯  ╰─────────────╯ ╰──────────────╯
*/

// L/R Encoders
#define LEC 34 // left rotary click
#define REU 6  // right joystick up
#define REL 19 // right joystick left
#define REC 20 // right joystick click
#define RER 21 // right joystick right
#define RED 35 // right joystick down

// key positions
#define LU6 0
#define LU5 1
#define LU4 2
#define LU3 3
#define LU2 4
#define LU1 5

#define RU1 7
#define RU2 8
#define RU3 9
#define RU4 10
#define RU5 11
#define RU6 12

#define LH6 13
#define LH5 14
#define LH4 15
#define LH3 16
#define LH2 17
#define LH1 18

#define RH1 22
#define RH2 23
#define RH3 24
#define RH4 25
#define RH5 26
#define RH6 27

#define LL6 28
#define LL5 29
#define LL4 30
#define LL3 31
#define LL2 32
#define LL1 33

#define RL1 36
#define RL2 37
#define RL3 38
#define RL4 39
#define RL5 40
#define RL6 41

#define LT3 42
#define LT2 43
#define LT1 44

#define RT1 45
#define RT2 46
#define RT3 47
