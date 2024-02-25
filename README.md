# Personal zmk-config

This is my personal [ZMK](https://zmk.dev) config repo for my wireless 36-keys split keyboards with [nice!nano](https://nicekeyboards.com/nice-nano/) and [nice!view](https://nicekeyboards.com/nice-view).

---

> [!WARNING]\
> This does not use the ZMK Firmware's main branch.
> This layout uses urob's features in the [main-with-native-mouse](https://github.com/urob/zmk/tree/main-with-native-mouse) branch to also include pointer movement/scroll features ([#2027](https://github.com/zmkfirmware/zmk/pull/2027)), which is not yet added to upstream. Use at your own risk.

---

![ergo-collage](./assets/ergo-collage.jpg)


# Keymap

## Wireless Corne 5x3

![wireless-corne-5x3](./assets/corne-topview.png)

## Wireless Chocofi
![wireless-chocofi](./assets/chocofi-topview.png)

## Keymap

![layout](./assets/keymap-drawer.svg)

Illustrations powered by [keymap-drawer][1]

### Preferences

The following are my preferences:

| Behaviors | ✅ Preferred | ❌ Not Preferred
-|-|-
General | Combos | Excessive Layers / Hold-Tap / Tap Dance
Modifiers | Combo Mods | Home Row Mods / Mod-Taps
Layers | One-shot / Sticky / Toggle Layers | Hold-Tap / Momentary Layers / Conditional Layers
Shift | One-shot / Sticky Shifts and Caps Word | Hold / Hold-Tap Shifts / Auto-Shifts
Nav Keys | Vim-like | WASD-like
Numbers | Home row layout | NumPad layout
Symbols | Layer / Combo accesses | Single layer access

My typing speed can reach 120wpm levels on MonkeyType's 60-second English typing tests.

At such speeds, it gets harder to tweak the Tapping Terms, Permissive Holds, Tap-Dances and Tap-Holds to minimize mis-fires. And from my own experiences trying these out with QMK, it gets inconsistent across different keyboards I've tried, including Moonlander and Sol3.

I ended up gravitating more towards One-Shots / Sticky Keys and Combos, having less mis-fires, and more mentally relaxed without worrying about holding vs. tapping.

### AFK Layer

Tap the combo "AFK" to toggle the "AFK Layer".

In this layer, all keys and combos are disabled except for combo AFK.

This is useful travelling on the go too, preventing accidental switch-on and mis-firing of any keys.

# Keyboards

I use my layout on these keyboards

### On the go

I use this either when I'm on the go (fits nicely inside standard Nintendo Switch case), or needed quieter typing. Lubing the Choc switches was enough sound dampening for me.

- [chocofi](https://github.com/pashutk/chocofi) PCB
- [nice!nano](https://nicekeyboards.com/nice-nano/) MCU
- [nice!view](https://nicekeyboards.com/nice-view/) display
- switches
  - 28x Kailh Choc Red Pro
  - 4x Kailh Choc Pink
  - 4x Kailh Choc Red
- keycaps: [KLP-Lame Choc](https://github.com/braindefender/KLP-Lame-Keycaps/)
  - 3D-printing and material: MJF PA12-HP Nylon Natural Gray

### On the desk


- 3x5 [Corne Keyboard](https://github.com/foostan/crkbd) PCB
- [nice!nano](https://nicekeyboards.com/nice-nano/) MCU
- [nice!view](https://nicekeyboards.com/nice-view/) display
- switches
  - 32x Akko V3 Piano Pro (modded with 35g springs)
  - 4x Gateron G Pro 2.0 Yellow
- [MX DES by PseudoMakeMeKeyCapProfiles](https://github.com/pseudoku/PseudoMakeMeKeyCapProfiles)
  - 3D-printing and material: MJF PA12-HP Nylon Natural Gray
  - 2x Convex 1.5u
  - 4x Convex 1u
  - 2x R3 Deep Dish
  - 8x R3 Standard
  - 10x R2 Standard
  - 10x R4 Standard

### On mount

Either the Chocofi or Corne fits well in a large phone mount holder.

- 2x Crab Clamp
- 2x Magic Arm 7"
- 2x Rotatable Tripod Phone Mount Holder

I use it for seated or standing positions.

## Further Reading

* [Combo Mods](https://jasoncarloscox.com/blog/combo-mods/)
* [Home Row Mods](https://precondition.github.io/home-row-mods)
* [Home row mods are hard to use](https://getreuer.info/posts/keyboards/faqs/index.html#home-row-mods-are-hard-to-use)
* [Callum Oakley's mods](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
* [QMK and Keyboards](https://getreuer.info/posts/keyboards/index.html)
* [Timeless homerow mods](https://github.com/urob/zmk-config#timeless-homerow-mods)

[1]: https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_-1YW3LbNhT99ypQxG2aFnRMSn4pTae2bNltLNuJ5DwaKypFwhLHFMGCoB3VcT-6lU7_uoospSvpBUiKFPUgnTgznU5-Lknw4gD3jQvXHLFQ1JYQ-nV40b2gox4zuV1DFuMe7XImTEHt-K8b8aLD7VfHp-1u4LuO6FbernUrS_CL8kDCHMo37ekV5WIkvxHS0OunBL0gaI-gZwS1CXpF0ClBPxJ0TNBJJ2HaJqhF0C5BDYL2CTog6CeCnhB0SBB-hMdsPxP0kqA6Qc8J2iHoiKAmMBBM0ApBDxO2a9gnPjptwrAY-bSG-gMWiJv47_Ly0HZqpu-7VEtk1oKBcy6Wl2MWzKlPTYEeImH28MS88QxORci98ZTc38A3LTr-KTeUYwDg5eWp_UUKPAqHvVijSmrc0EEU3DAUrShaVXRN0XVFNxTdVHRLUX011RxWEApBAaj5arqarSaruWpqduL7v-TIP3_8LR-aJI8l-UaS939KuoxjI-AVSR6mk6-z8hHkha47i06wdcZ6aI2GPeZm9PBGwv8gydeSPBgvfsCGVD5PzD5Fu-zKG3-c-vJ1z7Pl411GrPty4BdJXkvSSWSK3YNzdqW59FxosAVbA993HY9Kk2UZbFhqIUPoL_zNnf5gegV8dpbZ6BdyZ_cmlf-7JF9K8tUn0n2deYJnlT8zbCzTD1KZggvH13xOLx0WZoZ9SBCab4YBzbF69K1Ihy6ZGw6p5rvR3Gh3zZNne8-nVGo53IJtZFTWPNp72Y4mjRWw09YhS7QNSSqSVHNLDR0vu09rQC858zTBHSmktG3eXsohplefconFLJHVp3ka-lpnUt09l1kX2oC6PuXKMyD3otPWDo5fd9rJW_t4H-fFCwWdK13oRyvqkhiSVCSplnGfw_ohpOZnijaBpl6zI_dL7dpiKf4Po53PIn4W8a63UmdQ8KbK3rzMXUw7_y2ID61IkVqOPXpgenYmu-BDUCBqWVwVwsBF9fZh8tp61Uxeo5MgrkOtQi8Yt6c-Mky5qQmgYGh3r4E7i4thVDIz2X7yP_OFw7y5vy02HIJ8c__HR1Q4HIN6-PixmPeDVircaCxnekZR6pTWUCcywfqJ5tR7rFD1Hum5SQcxyY5Oc8coKfxiX4oHIaRsgi6SM3efBnBUp3DkhsNYKIQU7eaWzAs9s8nsO43Wz9414V0RW-jZLHOaAS7qwSEqFDMGmT-aHvXNIDoPpc43h6EM2sTC0d7uKM9B-h9SOKVZnwvApGKeO0Foui0R2g6rM5vm9IPrLgso2nZdSBl7tiMYTwBxm_Kh7I9K7RK3uIXqgksc3DIvE0zcZjZDbU5lq9miJrdk_tp3BNrnpj_An0iPE3lK3mys4Js71WtrwLgAf87nMNxgVhhApHghHn_txkm-7lLTg5kCHTgBqHoUKajfd6EBP9rNKSMKkyvaSzu7GTrBOyaH4LIpj9WrDGBxSP-oEUY2iD-3OTXVp5BNftP04KGOAfqJGQSo4UTc0Rds8wq-ji-EOVepj_BNSQvhEygPKIAkIFd4QkcaqkPmUKtnDiR35v5LlrSSMo6Grv0aeg2dWrWjahb-FlZya7ICZ4-OuHOTcq8RtB5za8XcsiHUjU6mIvZM60JdZ2Vb1SIU6Cj1ShZlnN9pYJUBABn16uxtcHpJeXCr7YAO9PWPFmodUDY-RqgNANj8aKHujfE2AW8rtu39YtsaqwQZenb9pKgWTQSnMCacIlcGi-aDOxiVmfPj4loEAO5gVGcBjIt2EQK4gDHbBcrMBtMbG7fQNFjamLB0YHHHF5qgb0WxjVMgsJi-Gq_7RYnoBfbYwOqetGibaayrG8YC9koa1OratYC9moawuqsszlP6Wsz-pph9PQ1pdQlawL6Rxq665i1g30wjVV0SF7BvZQLxcQkzyUBMzHp2Vi4rJ5GLv8Ol8m8SsPgal0q3SYCq-_Ai_moaj-ouvkQCNhLjPsClUm0SrepqvkRmHcfnTQn-zTQ-8fcl-MHARmLgd7g4bqWFE48oaufMGhLMJ4idnwcUziLGij6xgGwvp2v05gLwtMXKY-srlQJsI1_k5rd3efDVlfUC8Eq-Ds_rLKehjQLoapo-4t4VMIaOfYvtqfq4Nas-AlSPCcGGWU0Woen5GpArmjNBC8yjKunGoko6A3V1ZasAtZIvjlPldSZsgU2Mahr1qt8ua5FMyYElKkliyt4yJVCTgRg1zpNFC8xQqWYR4mu_mRJVyiCCm1SSZJbeEk67bBkwFcuJgMk94y3EU4fSzQ-fr7x04mg2hH4vtnhJiPW8o98aQtoI2hSCEkl22qju8plaXSutVZls8plS3blnDmC3wl-yuXnVhdg4d_qyH-u7I3_QFabfDZzfoGUzjH8BYiSM9FMhAAA%3D