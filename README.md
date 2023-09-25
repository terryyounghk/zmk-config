<!-- for copy/paste: ⌘⌥⇧⌃-->
# Personal zmk-config

This is my personal [ZMK](https://zmk.dev) config repo for my [chocofi](https://github.com/pashutk/chocofi) with [nice!nano](https://nicekeyboards.com/nice-nano/) and [nice!view](https://nicekeyboards.com/nice-view).

## TL;DR

I intentionally avoid having to mess with Tap-Dance, Tap-Hold, Tapping Terms and Permissive Holds altogether and replace them with combos, thus avoiding related mis-fires, while still being able to work efficiently with 34/36 keys. I also gravitate more towards using the home row, using comobs to minimize keystrokes, and avoiding odd positions for common keys.

![chocofi](./chocofi-terryyounghk.jpg)

# Keymap

Illustrations powered by [keymap-drawer](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_-1Z3V7bNhS_5ylUjbXrJlNsh6903W8QSLsVCl1Cu66kmWML4h-O5clyaUbZxV5lv93tKfooe5IdyXb8QRKbQrddcMGJbR39pXN0PoVnjVkkmgsI_TI67Z_S8YBZ3Gkim3Gf9jkTlqBOMurFvGh389X-YbcfBp4r-ua7lb65AEOUhxJmVz5pz88oF2P5jpCGXj8n6CVBOwT9QFCXoFcEHRL0HUH7BB30UqZNgjoEbRPUJugxQU8I-p6gpwTtEoQf4gnbTwT9SFCLoBcEbRH0jKA9YCCYoCWCHqRs57BPfDf00LPDPRgS44A20cmQheIi4VhcHDlu0woCj2qp3Fo4dI_F4mKBZTIorMGsIU5FxP1Zo2Fg2XQyONla59WUrcX6exaNBolCldC4rQMrbhuKmoo2FF1RdFXRNUXXFd1QVF_OFIcVhEJQAGq-mq5mq8lqrpqan_jhT_nl79__kj-aJI8k-VKSD39IuoiTM8BLkjzIJp_n5SPIjzxvGi2w9SZ66IxHA-bl9PBGwn8ryReS3J8s_oSNqPw9sE4o2mZn_uTlMJCPO74jf97nxLonP_wsyWtJeqlMiWVwzs40jx4LDbbgaGD6nuvDMRYZHFhqLkMUzB3m7snw8gr46Ci30TtyZ58Vlf-bJJ9LcvcT6b7FfMHzyp_qMbYVhJlM4akbaAGnb10W5T4HEB-0wIpCWmL16TuRfXrLvGhEtcCL584waPVjZlJudXWIBF1DElOSRglv5PoxYBtG2ivwtwp_ui5Jo1eUbuAx-1QbUi-gPNvY9b-mW4mEUkFbLg47bpvyWT7oKzd0bFtyfeo0_x25_suvvVsRb0W86a20GGScS3lnlg9W097_C-JjY0usln2fPrF8Jxdd8C4oEHVsrjLRpN7K1TfqsdXdlY8tSBboJePOpZccU2lqCigY2t5p4978bBTnrFySLY6zQLjMnzlss9EI5Js5npSHUJyCevjkZz7vR61UudFEzqxIUOqUp6FKIsFOUs2p50Sh6jnW8x4dJiT_9TJ3gpLBz7el5CO4lEPQaTPZ_gkNoUCmUEJDNRQJIUW7uCLzXMvcY86NeuutdRWsK2aLfIdlkyQX9YVmR2LKRxaML38NrDCufzLjm8FQB62wcLy3G4pzEP5HVHDXvk0ARcW8cMPI8joiclzWYg4t6Qe3PBZStOl5EDJ2HFcwngLiLuUj2aDU2iXucBu1BJc4uGO9TTFxlzkMdTmVvV6HWtyW8euxK9BjbgVDfON6LEQo2bgTfPEJ9NoZMi7AnssxDLeZHYXgKX6EJ2_bcZC_lvVgSNkQ0lE7ivWavG5yak2gsX5ghSFquzFL_AY7PYO3_VNhzdTRQ3xRU9X4AOI8CsGb5QpP6VhDLQgBqprIVRY3pu8FW6pbaVlD50ETvTaXCTJXeir95KoQq4kGDFLPiCB2fBxSEAtaNq8pK57cDRfuXSzksAhqJEiPvsIJe6GglPwTduhEVxN2rV_NLhtW3ejlEuXAsk_V3VL-6qAKBZpN3cyjTMI-De06ACCl3pi-DWj8KQ-vtB1Qgr56baGgodfXriPUGgCs35hQ64C2kRztveqTNcAGDT2_epppqyaCSRgFkyjlxqr5YAyGOXV-knGrAMAYjMY0gEkmr0IAzRsFzYc2dwOhCfpOVOs8AwId6suJzu_U8CZgT1Su7hOrtpn5nrqJq2A3MydT15MV7I3MpdSdXnXg0NOQ9aaafTVzMXVZWMG-lvmSug6tYF_PPEddplawb-Rc432NY5KusZw3D05ruYaMlqlP4a9xrbiYuhI-x7XCYOo66v64ir-ReYq6u64RGI30kO_jWiHQSE-5h2tFPCM95gtcK6alfoq_qcEPB22kB310hKsdWB51ahpV7RekZ8GCLDcbS3phAdkOXk6e63PAs5aojK0vmRXYRjn7zG7HyuDLS6sV4GY5Qc7qBC9DGxXQjSyOJL0mYIxc5wrbU6lrY1rqmlZBVaLp5WRQymdTQSuORyW5tXlJbgrq8tJGBaqZ-duMzDcVtuJMjEbm9qo_rnsiudwDS5hpZMrfCqVQRUeMG91i9oJjMBt5hOSabqpEZh3EmVV2yWTrgClfTgVM7wWvIJ6qFtc_fr6y0ukldPKf3quArZZN_hpg8tygqSAolW6ri1oen6rpldqalgGoHD3VvXmuOrsS_oLDrbM--MuxeyJbsRNvHAz7wgr6ofsrdGuG8Q8zQMMGlyAAAA%3D%3D)

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
