# Lotus ハス, the Lotus58 Keymap

> The Lotus58 keyboard is a split keyboard with 4x6 column staggered keys and 5 thumb keys, based on Lily58.
> [TweetyDaBird](https://github.com/TweetyDaBird/Lotus-Keyboard)

## Intro

// add spicy image

I bought this keyboard from [Lectronz](https://lectronz.com/stores/tweetys-wild-thinking) with a soldering service, since I tend to overheat some pcbs..

A summary of features that I have changed in the firmware:

| General detail | Description |
|----------------|-------------|
| 5 Total Layers | :) too lazy to describe. see below |
| OLED print orientation | `270deg` on main display, and the other is rotated to `180deg` |
| heavily customized `glcdfont` | Logos, Font and indicators have been changed / removed |
| RGB uwu | enabled / disabled some RGB modules |

This is like my second split keyboard. :)

## Specs

| Component | Quantity |
|-----------|----------|
| Pro Micro RP2040 Clone | 2 |
| 128x32 OLED Display | 2 |
| RGB LED (SK6812) | 58 |
| 12 pin Socket kit (2x) | 1 |
| Lotus 58 Glow v1.x.x TRRS TH (kit) | 2 |
| Lotus 58 Glow Case TRRS, OLED Kit (black) | 1 |
| [Akko Penguin Switches](https://en.akkogear.com/product/akko-v3-pro-penguin-switch-silent/) | 58 |
| Blank XDA Keycaps | 58 |

## How do I flash this?

1. Install [QMK](https://docs.qmk.fm/#/newbs) and git
2. do a `git clone git@github.com:qmk/qmk_firmware.git ~/qmk_firmware`
3. then do a `git clone git@github.com:74k1/lotus58_firmware.git ~/qmk_firmware/keyboards/tweetydabird/lotus58/keymaps/74k1`
4. now you should be able to do a simple: `qmk compile -kb tweetydabird/lotus58 -km 74k1`
5. then flash it with the qmk command: `qmk flash -kb tweetydabird/lotus58 -km 74k1` or the qmk toolbox

## Credits

| Name | Remarks |
|------|---------|
| [TweetyDaBird](https://github.com/TweetyDaBird) | For making the keyboard :P |
