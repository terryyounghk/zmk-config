<!-- for copy/paste: ⌘⌥⇧⌃-->
# Personal zmk-config

This is my personal [ZMK](https://zmk.dev) config repo for my [chocofi](https://github.com/pashutk/chocofi) with [nice!nano](https://nicekeyboards.com/nice-nano/) and [nice!view](https://nicekeyboards.com/nice-view).

# :warning: EXPERIMENTAL :warning:

Features or changes on the `experimental` branch depend on forks of ZMK, until specific changes actually land on official ZMK releases.

Updates between `experimental` and `main` may be less frequent.

Current features on this `experimental` branch:

- Uses the [urob fork](https://github.com/urob/zmk), which includes Generic Mouse Emulation (PR [#778](https://github.com/zmkfirmware/zmk/pull/778)), and based on a [pinned message in #pointing-devices in ZMK Discord](https://discord.com/channels/719497620560543766/845285481888743434/1128002387001495583) at the time of this writing (consulting the latest pinned messages is recommended)

## TL;DR

I intentionally avoid having to mess with Tap-Dance, Tap-Hold, Tapping Terms and Permissive Holds altogether and replace them with combos, thus avoiding related mis-fires, while still being able to work efficiently with 34/36 keys. I also gravitate more towards using the home row, using comobs to minimize keystrokes, and avoiding odd positions for common keys.

![chocofi](./chocofi-terryyounghk.jpg)

# Keymap

Illustrations powered by [keymap-drawer](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_-1ZyXrbNhC--ykQ1E2aFnRMUt6Upl9t2UraeEskZ2msqDQJW_xMESwI2nEd99BX6ddbnyKP0ifpACTFRQvp2Gl7yGVEEoMfM4PZAHnWBYtEcw6hX4an_VN6ccQs7jSRzbhP-5wJS1AnGfViXrS9_nrvoNsPA88VffPdUt-cgyHKQwmzLZ-0Z-eUiwv5jpCG3jwj6CVBWwQ9J6hL0GuCDgj6gaA9gvZ7KdM6QR2CNglqE_SYoCcE_UjQU4K2CcIP8YjtJ4JeEdQi6AVBGwTtErQDDAQTtEDQg5TtEuTEd4esL9gJ2j3YgWFxEdAmOhmwUFwlXPPzQ8dtWkHgUS3VXQsH7rGYny-wjAaFdTRtiFMRcX_aaBhYNh0NFsTrvJ4gXmzH3Wh4lBhWKY_bOrDitqGoqWhD0SVFlxVdUXRV0TVF9cXMgFhBKAQFoOar6Wq2mqzmqqn5iR_-lF_-_v0v-aNJ8kiSryX58Iek8zjZC7wgyYNs8mVeP4L8yPMm0QJbb2SHzsXwiHk5O7yV8N9L8pUk90eLP2FDKn_3rROKNtm5P3o5COTjlu_In_c5te7JDz9L8kaSXqpT4h2cs3PNo8dCAxEcDULAc33YyiKDA0vNZIiCmcPcPRmMr4APD3OC3pGSfVE0_m-SfCnJ3U9k-xbzBc8bf2LU2FYQZjqFp26gBZyeuSzKfQ4gT2iBFYW0xOrTdyL7dMa8aEi1wIvnxtLt7D_fejFmUtvlNoiRM9nO7tarbjxpZICNrg7JomtIYkrSKC01dP28nPaAnnHma4K7Ukm5t-X9Ug4xvvqYS8xmiXd9nKetL_WK5j7ymH2qDagXUJ6h3PxraoBI0Kn6R0Esky6JIYkpSaOOg223tiGHP1d0B2jmVxtSHuo0_x09_8uvvc8qflbxtkVpMSiJY4VxWm6vpr3_F8TH1qzYLHs-fWL5Ti674G0wIOrYXJXK0EOt7nb6GDdg6jFuFXELqhl6ybgz9pJjKk1NAQVDm1tt3JtdLuOimqsHxXEWCJf5U4dtNhyCflPHkx4WumgwDx_9zOb9qJUqBU30zLoYZU65G6pnkw1wYrn5rBmOn2M779BBQvJfx7kTlAx-ti8lHyGkHIJOm4n4JzSELp5Cnw_tWiSEVO3qmswzPXOHObcarZ-9q-BdMVvkOyzXzQAX9aHNisSEjyy4GP8aWGHcD2XON4WhDlph4Vi2W8pzkP6HFLo0-3MBKBrmhRtGltcRkeOyFnNoyT645bGQonXPg5Sx5biC8RQQdykfyhNULSlxh9uoJbjEwR3rLMXEXeYw1OVUHkY71OK2zF-PXYEecysY4Fu3YyFDydsFgq8-gV07A8YF-HM5h-E2s6MQIsWP8OhtM07yN_IeDCUbUjpqR7Fdk9d1Tq0RNNb3rTBEbTdmid9A0nN42zsV1lQbPcRXNU2N9yHPoxCiWa7wlF5oqAUpQHUTuc7i1uw9Z0tzKytr6DJoojfmIkHmUk-Vn1y_YTXREYPSMySIHR-HFNSCY5rXlB1P7ioO967mclgENRKkR9_ghL3QUEr-EfsSQcsJu9avZpfnRN3o5QrlkWWfqguw_Bm3CgUOmrqZRxmlfRradQBAS70xWQxOzygPryUOGEFfvrFSy4CychOlVgBg9daUWgW0tWRr71XvrAE-aOj51dNKWzURXMIouESpNlbNB2cwzInzk4pbBQDOYDQmAYwqeRUCWN4oWD60uRsITdB3otrmGRDYUF9MbH6nRjQBe2JydeFZJWYWe-qqsILdzIJM3Z9WsDeykFKXjtWJQ09T1ttq9uUsxNRtZgX7ShZL6r62gn01ixx121vBvpYLjfc1tkmGxmLePTitFRoyW6Yxhb_FtfJiGkr4EtdKg2noqAvuKv5GFinqcr1GYjTSTb6Pa6VAI93lHq6V8Yx0m69wrZyWxin-rgY_bLSRbvThIa4OYLnVqWtUHb-gPAsWZLXZWNALC8jj4HjxXJ0Bnh2Jytj6glmBbZSrz_TjWBl8cWG5AtwsF8hpJ8FxaKMCupHlkeSsCRhD17mGeKp0rU0qXZM6qEo0vVwMSvVsImjF9qgitzKryE1AXVxYq0A1s3ibUvkmwlbsidHIwl6dj-vuSK72wBJmmpnyt0IpVDEQ44NusXrBNpiNPEJyTTdRI7MO4tQuu-SydcBULKcKpveC11BPdYurHz9feenkFjr5O_o6YMtll78BmNw3OFQQlGq30UUtj0-09FJtS8sEVM6e6t48151dC3_O4dZ5H-Ll2D2RR7ET7yIY9IUV9EP3VzitGcY_jHj43kAhAAA%3D)

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
