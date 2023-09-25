<!-- for copy/paste: ⌘⌥⇧⌃-->
# Personal zmk-config

This is my personal [ZMK](https://zmk.dev) config repo for my [chocofi](https://github.com/pashutk/chocofi) with [nice!nano](https://nicekeyboards.com/nice-nano/) and [nice!view](https://nicekeyboards.com/nice-view).

## TL;DR

I intentionally avoid having to mess with Tap-Dance, Tap-Hold, Tapping Terms and Permissive Holds altogether and replace them with combos, thus avoiding related mis-fires, while still being able to work efficiently with 34/36 keys. I also gravitate more towards using the home row, using comobs to minimize keystrokes, and avoiding odd positions for common keys.

# Keymap

Illustrations powered by [keymap-drawer](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_-1Z31rbNhS_5ylUjbXrJlNshwDptm8QSLsVCl1Cu66kmbEF8RfH8mQZmlF2sVfZt7s9RR9lT7IjxY7txIlNYX8uuODEto5-0jk6f4VnjVgkGksI_Twc9AZ0dMIs7jSQzbhPe5wJS1AnHvXGvGhv6_XBUacXBp4reua7tZ65BEOUhxJmTz5pLy4oFyP5jpCG3rwg6BVBuwR9T1CHoNcEHRH0LUEHBB12E6YtgtoE7RDUIugJQU8J-o6gZwTtEYQf4wnbjwT9QFCToJcEbRP0nKB9YCCYoBWCHiVsl7BPfD_00POjfRgSo4A20FmfheIq5lheHjpuwwoCj2qJ3FrYd0_F8nKOZTIorJN5Q5yKiPvzRsPAsulkcLK19uuCrY319zwansQKVULjlg6suGUoaipaU3RN0bqi64puKLqpqL6aKg4rCIWgANR8NV3NVpPVXDU1O_HDH_LLX7_9KX80Sb6S5HNJPvwu6TKOzwCvSPIonexHnkfQPHqZlb47Eb89Gp4wLyP-W4n6jSSfSfJwsuZTNqTy99A6o2iHXfiTl6NAPu76jvx5n5HmgfzwkyRvJOkmosQGwTm70Dx6KjTYgqOBxXuuD6eXZ3BgqYUMUbBwmLtn_dkV8PFxZqP35M4-yev8V0k-leT-XJXnlDpf95KmKm8yX_Cszgv9w7aCMBUlHLiBFnB67rIo8zmAaKAFVhTSKVafvhPpp3PmRUOqBd547hzzVT9mKtx2Rwe_7xiSmJLUpvCGrj8GbMFIaw3-6vCn65LUunnpTjxmD7Q-9QLK043d_GuylUgoFbTk4rDjlimf5YO-VtFB8oe0LVejTuPfkeK__Nq9E_FOxNveSpNBWplJLuUOuMgx_0cQFeP-TM4dq-XAp08t38lEF7wHCkRtm6t0M6mlMrWLemx29uRjE1IDesW4M_OSYZqamgAKhnZ2W7i7OPeMM1Qmk-bHWSBc5s8dttlwCPLNHY9LPyg8QT188rOY96NWKt1oLGe3UirGy4KdJZpUz7GC1fNY7_u0H5Ps11nuMcqC5RbbWvwRXM4haNCIgc5oCMUxhfIZSqJICCn61TWZF1ruPnNu1ZvvrK_A-iLfYekkyUV9odmRKPjIgtHs18AKx9VQaoxzGKqg5RYe7-2W4iCkhyEV3LXvEkReMS_dMLK8togclzWZQ6f0g5seCyna8jwIIbuOKxhPAHGH8qHsUirtEre5jZqCSxzcts4TTNxhDkMdTmXD16YWt2U8e-IK9IRbQR_fuh5zEUo27QRf_QN6bfcZF2DP0zEMt5gdheApfoQnbzuQkvENrQdDSocEjVrRWK_x6xan1gQa64dWGKKWO2YZv8FOL-DtYCCsuTp6jK8qqhofQpxHIXizXOEZHWmoCSFAVRuZyuPW9L1kS3UrLWvoMmigN-YqQeZaV6WfTJViNdAJg9QzJIidnoYUxIIGzmvIiihzu4W7V0sZLIJqMdJXX-CYPVdwSv4JO_Sl9Zhd65Wzy_ZVN7qZRHli2QN1r5S9PyhDgdZTN7Mok7BPQ7sKAEip14q3wek55eG1tgNK0Os3Fgrae339JkKtA8DGrQm1AWib8dE-KD9ZA2zQ0LOrJ5m2bCKYhJEziancWDYfjMEwC-fHGbcMAIzBqBUBTDJ5GQJo3shpPrS5GwhN0HeiXOcpEOhQX411fq-CNwF7rHJ1qVi2zdT31HVcCbuZOpm6oyxhr6UupS72ygOHnoSst-Xs9dTF1I1hCft66kvqTrSEfSP1HHWjWsK-mXGN9xWOSbrGatY8OK3kGjJaJj6Fv8SV4mLiSvgSVwqDieuoS-Qy_lrqKeoCu0JgNJJDfogrhUAjOeUurhTxjOSYr3ClmJb4Kf66Aj8ctJEc9PExLndgedSJaZS1X5CeBQvS3Gys6LkFZDs4mzw3FoCnLdE0tr5ilmAb09lnfjs2Db66Ui8BN6cT5LxOcBbaKIGupXEk7jUBY-g619ieSl2bRamrqIIqRdOnk8FUPisELTkeleTWFyW5AtTVlc0SVDP1tzmZrxC25EyMWur2qj-ueiKZ3ANLmOYic4xvjRLovGOOG998NoNjMZPYlb3WK5TQrIKYqbqh4C4y3iowyquTIJzcIF5DMFU3bnz8fGWvxcV0_P_e64DVp43_BmDyxKC9ICiRbruDmh7HRZpeq6xpGYqm46i6Yc_UadfCX3K4ddEDzzl1z2RTduaNgn5PWEEvdH-Bvs0w_gYpsRLInSAAAA%3D%3D)

![layout](./layout.png)

The following are my preferences:

| Behaviors | ✅ Preferred | ❌ Not Preferred
-|-|-
General | Combos | Extra Layers / Hold-Tap / Tap Dance
Modifiers | Combo Mods | Home Row Mods / Mod-Taps
Layers | One-shot / Sticky / Toggle Layers | Hold-Tap / Momentary Layers / Conditional Layers
Shift | One-shot / Sticky Shifts and Caps Word | Hold / Hold-Tap Shifts / Auto-Shifts
Nav Keys | Vim-like | WASD-like
Numbers | Home row layout | NumPad layout
Symbols | Multi layouts and combos based on context | Single layer access

## Block Layer

There is a block layer which disables all keys, useful for carrying the keyboard around while travelling without mis-firing any keys.

## Further Reading

* [Combo Mods](https://jasoncarloscox.com/blog/combo-mods/)
* [Home Row Mods](https://precondition.github.io/home-row-mods)
* [Home row mods are hard to use](https://getreuer.info/posts/keyboards/faqs/index.html#home-row-mods-are-hard-to-use)
* [Callum Oakley's mods](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
* [QMK and Keyboards](https://getreuer.info/posts/keyboards/index.html)
* [Timeless homerow mods](https://github.com/urob/zmk-config#timeless-homerow-mods)
