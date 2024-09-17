/*
  CAUTION:  This is a custom wireless Corne build purchased from Taobao
            with a rotary encoder on the left and a joystick on the right.
            Hence, the layout is very different from your typical Corne.

            In terms of key positions:
            Left Column 0 is the left encoder which is disabled.
            Right Column 0 is the joystick up/down/left/right


  Key Positions
  Side:                    L: Left            L/R Encoders           R: Right
    Columns:       6   5   4   3   2   1       0        0        1   2   3   4   5   6
                ╭─────────────────────────╮ ╭─────╮  ╭─────╮ ╭─────────────────────────╮
    U: Upper    │  0   1   2   3   4   5  │ │  x  │  │   6 │ │   7   8   9  10  11  12 │
    H: Home     │ 13  14  15  16  17  18  │ │  x  │  │  19 │ │  20  21  22  23  24  25 │
    L: Lower    │ 26  27  28  29  30  31  │ │  x  │  │  32 │ │  33  34  35  36  37  38 │
    T: Thumb    ╰───────╮ 39  40  41  42  │ │  x  │  │  43 │ │  44  45  46  47  ╭──────╯
                        ╰─────────────────╯ ╰─────╯  ╰─────╯ ╰──────────────────╯
                          39: rotary encoder click       6: ↑
                                                        19: ↓
                                                        32: ←
                                                        42: →
                                                        47: right encoder click

  Notation
    Side:                  L: Left            L/R Encoders           R: Right
    Columns:       6   5   4   3   2   1       0        0        1   2   3   4   5   6
                ╭─────────────────────────╮ ╭─────╮  ╭─────╮ ╭─────────────────────────╮
    U: Upper    │ LU6 LU5 LU4 LU3 LU2 LU1 │ │  x  │  │ RU0 │ │ RU1 RU2 RU3 RU4 RU5 RU6 │
    H: Home     │ LH6 LH5 LH4 LH3 LH2 LH1 │ │  x  │  │ RH0 │ │ RH1 RH2 RH3 RH4 RH5 RH6 │
    L: Lower    │ LL6 LL5 LL4 LL3 LL2 LL1 │ │  x  │  │ RL0 │ │ RL1 RL2 RL3 RL4 RL5 RL6 │
    T: Thumb    ╰───────╮ LT4 LT3 LT2 LT1 │ │  x  │  │ RT0 │ │ RT1 RT2 RT3 RT4 ╭───────╯
                        ╰─────────────────╯ ╰─────╯  ╰─────╯ ╰─────────────────╯
*/

// key positions: Left Column 0 is disabled
#define LU6 0
#define LU5 1
#define LU4 2
#define LU3 3
#define LU2 4
#define LU1 5
#define RU0 6
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
#define RH0 19
#define RH1 20
#define RH2 21
#define RH3 22
#define RH4 23
#define RH5 24
#define RH6 25

#define LL6 26
#define LL5 27
#define LL4 28
#define LL3 29
#define LL2 30
#define LL1 31
#define RL0 32
#define RL1 33
#define RL2 34
#define RL3 35
#define RL4 36
#define RL5 37
#define RL6 38

#define LT4 39
#define LT3 40
#define LT2 41
#define LT1 42
#define RT0 43
#define RT1 44
#define RT2 45
#define RT3 46
#define RT4 47
