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

This keyboard uses [zmk-pmw3610-driver](https://github.com/terryyounghk/zmk-pmw3610-driver) for trackball support. Original work from [inorichi/zmk-pmw3610-driver](https://github.com/inorichi/zmk-pmw3610-driver)

Three types of layers, all optional, are specifically for the trackball:
- MOUSE layer: automatically switches to this layer momentarily whenever the trackball is activated
- SCROLL layers: specified set of layers assigned for trackball to behave as scroll wheel instead of mouse pointer
- SNIPE layers: specified set of layers to use a different pointer sensitivity

## The Firmware

The firmware was first based on [tangbonze/zmk-config-Keyball44](https://github.com/tangbonze/zmk-config-Keyball44), and highly modified to match my current framework of reusing the same base keymap configs across multiple keyboards.
