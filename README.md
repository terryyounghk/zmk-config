<!-- for copy/paste: ⌘⌥⇧⌃-->
# Personal zmk-config

This is my personal [ZMK](https://zmk.dev) config repo for my [chocofi](https://github.com/pashutk/chocofi) with [nice!nano](https://nicekeyboards.com/nice-nano/) and [nice!view](https://nicekeyboards.com/nice-view).

## TL;DR

I intentionally avoid having to mess with Tap-Dance, Tap-Hold, Tapping Terms and Permissive Holds altogether and replace them with combos, thus avoiding related mis-fires, while still being able to work efficiently with 34/36 keys. I also gravitate more towards using the home row, using comobs to minimize keystrokes, and avoiding odd positions for common keys.

![chocofi](./chocofi-terryyounghk.jpg)

# Keymap

Illustrations powered by [keymap-drawer](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_-1Z3V7bNhS_5ylUjbXrJlNsh6903W8QSLsVCl1Cu66kmWML4h-O5clyaUbZxV5lv93tKfooe5IdyXb8QRKbQrddcMGJbR39pXN0PoVnjVkkmgsI_TI67Z_S8YBZ3Gkim3Gf9jkTlqBOMurFvGh389X-YbcfBp4r-ua7lb65AEOUhxJmVz5pz88oF2P5jpCGXj8n6CVBOwT9QFCXoFcEHRL0HUH7BB30UqZNgjoEbRPUJugxQU8I-p6gpwTtEoQf4gnbTwT9SFCLoBcEbRH0jKA9YCCYoCWCHqRs57BPfHfE-oKdoGeHezAsxgFtopMhC8VFwrW4OHLcphUEHtVS2bVw6B6LxcUCy2RQWINZQ5yKiPuzRsPAsulksLC9zqsp24v1-CwaDRLFKuFxWwdW3DYUNRVtKLqi6Kqia4quK7qhqL6cKRArCIWgANR8NV3NVpPVXDU1P_HDn_LL37__JX80SR5J8qUkH_6QdBEnZ4GXJHmQTT7Py0eQH3neNFpg60300BmPBszL6eGNhP9Wki8kuT9Z_AkbUfl7YJ1QtM3O_MnLYSAfd3xH_rzPiXVPfvhZkteS9FKZEuvgnJ1pHj0WGmzB0cAFPNeHoywyOLDUXIYomDvM3ZPh5RXw0VFuo3fkzj4rKv83ST6X5O4n0n2L-YLnlT_Va2wrCDOZwlM30AJO37osyn0OIE5ogRWFtMTq03ci-_SWedGIaoEXz51h0OrHzKTc6uoQEbqGJKYkjRLeyPVjwDaMtFfgbxX-dF2SRq8o3cBj9qk2pF5Aebax639NtxIJpYK2XBx23Dbls3zQV27o2Lbk-tRp_jty_Zdfe7ci3op401tpMcg4l_LOLB-spr3_F8THxpZYLfs-fWL5Ti664F1QIOrYXGWi0EOt7m76GNc36jGuxHALkgV6ybhz6SXHVJqaAgqGtnfauDc_G8U5K5dki-MsEC7zZw7bbDQC-WaOJyUiFKmgHj75mc_7UStVbjSRMysSlDrlaaiSSNaXieYWs1ozfo71vEeHCcl_vcydoGTw820p-Qgu5RB02ky2f0JDKJIplNFQDUVCSNEursg81zL3mHOj3nprXQXritki32HZJMlFfaHZkZjykQXjy18DK4zrn8z4ZjDUQSssHO_thuIchP8RFdy1bxNAUTEv3DCyvI6IHJe1mENL-sEtj4UUbXoehIwdxxWMp4C4S_lINii1dok73EYtwSUO7lhvU0zcZQ5DXU5lr9ehFrdl_HrsCvSYW8EQ37geCxFKNu8EX3wCvXaGjAuw53IMw21mRyF4ih_hydt2HOSvZT0YUjaEdNSOYr0mr5ucWhNorB9YYYjabswSv8FOz-Bt_1RYM3X0EF_UVDU-gDiPQvBmucJTOtZQC0KAqiZylcWN6XvBlupWWtbQedBEr81lgsyVnko_uXrDaqIBg9QzIogdH4cUxIKWzWvKiid304V7Fws5LIIaCdKjr3DCXigoJf-EHTrR1YRd61ezy4ZVN3q5RDmw7FN1v5S_OqhCgWZTN_Mok7BPQ7sOAEipN6ZvAxp_ysMrbQeUoK9eWyho6PW16wi1BgDrNybUOqBtJEd7r_pkDbBBQ8-vnmbaqolgEkbBJEq5sWo-GINhTp2fZNwqADAGozENYJLJqxBA80ZB86HN3UBogr4T1TrPgECH-nKi8zs1vAnYE5Wr-8SqbWa-p27iKtjNzMnU9WQFeyNzKXWnVx049DRkvalmX81cTF0WVrCvZb6krkMr2Nczz1GXqRXsGznXeF_jmKRrLOfNg9NariGjZepT-GtcKy6mroTPca0wmLqOuj-u4m9knqLurmsERiM95Pu4Vgg00lPu4VoRz0iP-QLXimmpn-JvavDDQRvpQR8d4WoHlkedmkZV-wXpWbAgy83Gkl5YQLaDl5Pn-hzwrCUqY-tLZgW2Uc4-s9uxMvjy0moFuFlOkLM6wcvQRgV0I4sjSa8JGCPXucL2VOramJa6plVQlWh6ORmU8tlU0IrjUUlubV6Sm4K6vLRRgWpm_jYj802FrTgTo5G5veqP655ILvfAEmYamfK3QilU0RHjRreYveAYzEYeIbmmmyqRWQdxZpVdMtk6YMqXUwHTe8EriKeqxfWPn6-sdHoJnfy39ypgq2WTvwaYPDdoKghKpdvqopbHp2p6pbamZQAqR091b56rzq6Ev-Bw66wP_nLsnshW7MQbB8O-sIJ-6P4K3Zph_AOsSw20nyAAAA%3D%3D)

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
