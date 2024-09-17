# Corne / Chocofi

## Keyboards in Use

The keyboards I am using for this keymap are:

- [Wireless Corne MX 36-keys from Beekeeb](https://shop.beekeeb.com/product/pre-soldered-wireless-corne-mx-keyboard/)
- [Wireless Chocofi Low Profile 36-keys from Beekeeb](https://shop.beekeeb.com/product/presoldered-chocofi-split-keyboard/)

This keymap is suitable for a Corne/Chocofi:

- wireless
- 36 keys
- nice!nano
- nice!view

## The Firmware

The firmware is based on any standard Corne keymap.

However, to make my keymap build successfully while shared across other custom keyboard builds, `corne_left.overlay` and `corne_right.overlay` is added additionally to define `nice_view_spi`.
