# Keyball44

## Keyboards in Use

This keymap is suitable for the [Keyball44](https://github.com/tangbonze/zmk-config-Keyball44):

- wireless
- 44 keys
- nRF52840 - nice!nano 2.0 compatible MCU
- nice!view display
- 34mm trackball on right
- No RGB or underglow

## Trackball driver

This keyboard uses [inorichi/zmk-pmw3610-driver](https://github.com/inorichi/zmk-pmw3610-driver) for trackball support.

Three types of layers, all optional, are specifically for the trackball:
- MOUSE layer: automatically switches to this layer momentarily whenever the trackball is activated
- SCROLL layers: specified set of layers assigned for trackball to behave as scroll wheel instead of mouse pointer
- SNIPE layers: specified set of layers to use a different pointer sensitivity

---

> [!WARNING]
> Todo: Study and switch to [badjeff/zmk-pmw3610-driver](https://github.com/badjeff/zmk-pmw3610-driver)
> [Where to put drivers?](https://github.com/zmkfirmware/zmk/issues/2550)

---

## The Firmware

The firmware is mostly based on [tangbonze/zmk-config-Keyball44](https://github.com/tangbonze/zmk-config-Keyball44)

