# Kikō 機巧, a Lotus58 Keymap

> The Lotus58 keyboard is a split keyboard with 4x6 column staggered keys and 5 thumb keys, based on Lily58.
> [TweetyDaBird](https://github.com/TweetyDaBird/Lotus-Keyboard)

<img alt="Static Badge" src="https://qmk.fm/assets/images/badge-small-dark.png" style="width:200px;">

## ToDo's

- [x] Rethink my layers
- [x] add QMK keys
- [ ] add Mac switch
- [x] RGB (thanks to [RagingCactus](https://github.com/RagingCactus/qmk_firmware/tree/4999b32b5a03b7e1e680d352d90f086fee1a6232/keyboards/lotus58/keymaps/ragingcactus))
- [ ] take pic
- [ ] update readme.md

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

I ordered main Keyboard Parts from [lectronz](https://lectronz.com/stores/tweetys-wild-thinking) directly with a solder service. :^)

| Component | Quantity |
|-----------|----------|
| Pro Micro RP2040 Clone | 2 |
| 128x32 OLED Display | 2 |
| RGB LED (SK6812) | 58 |
| 12 pin Socket kit (2x) | 1 |
| Lotus 58 Glow v1.x.x TRRS TH (kit) | 2 |
| Lotus 58 Glow Case TRRS, OLED Kit (black) | 1 |
| [Akko Penguin Switches](https://en.akkogear.com/product/akko-v3-pro-penguin-switch-silent/) | 58 |
| [ePBT x GOK Kuro/Shiro R3](https://kbdfans.com/products/kuro-shiro-r3) | Full-Set |

## How do I flash this?

1. Install [QMK](https://docs.qmk.fm/#/newbs) and git
2. do a

   `git clone git@github.com:qmk/qmk_firmware.git ~/qmk_firmware`
4. then do a

   `git clone git@github.com:74k1/lotus58_firmware.git ~/qmk_firmware/keyboards/tweetydabird/lotus58/keymaps/74k1`
6. now you should be able to compile it with a simple:

   `qmk compile -kb tweetydabird/lotus58/promicro -km 74k1 -e CONVERT_TO=rp2040_ce`
8. then flash your boards with the qmk command: (to put your board into boot-mode, press the top soldered button twice 😉)

   `qmk flash -kb tweetydabird/lotus58/promicro -km 74k1 -e CONVERT_TO=rp2040_ce` 

## Credits

| Name | Remarks |
|------|---------|
| [TweetyDaBird](https://github.com/TweetyDaBird) | For making the keyboard (and helping me out a lot with the firmware in the beginning) |
| [Tweety's Wild Thinking Discord](https://discord.gg/G6QzcJQUnm) | Also being a great help to me. Especially [RagingCactus](https://github.com/RagingCactus/qmk_firmware/tree/4999b32b5a03b7e1e680d352d90f086fee1a6232/keyboards/lotus58/keymaps/ragingcactus) for the RGB. |
| [joric](https://github.com/joric/qle) | For the glcdfont editor. Very cool. |
| [laosteven](https://github.com/laosteven/fluffy-octo-eureka)https://github.com/laosteven/fluffy-octo-eureka | For the readme inspiration. |
