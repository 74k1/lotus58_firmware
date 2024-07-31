# Kikō 機巧, a Lotus58 Keymap

> The Lotus58 keyboard is a split keyboard with 4x6 column staggered keys and 5 thumb keys, based on Lily58.
> [TweetyDaBird](https://github.com/TweetyDaBird/Lotus-Keyboard)

<img alt="Static Badge" src="https://qmk.fm/assets/images/badge-small-dark.png" style="width:200px;">

## ToDo's

- [x] Rethink my layers
- [x] add QMK keys
- [x] add Mac switch
- [x] RGB (thanks to [RagingCactus](https://github.com/RagingCactus/qmk_firmware/tree/4999b32b5a03b7e1e680d352d90f086fee1a6232/keyboards/lotus58/keymaps/ragingcactus))
- [ ] 3D Printed Case (currently on it)
- [ ] ~~upgrade components (ordered from [splitkb.com](https://splitkb.com/))~~
- [ ] I'm getting an entire new board. because I messed up the soldering myself. Getting it from Tweety directly again :)
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
| RGB | enabled / disabled some RGB modules |

This is like my second split keyboard. :)

## Specs

I ordered main Keyboard Parts from [lectronz](https://lectronz.com/stores/tweetys-wild-thinking) directly with a solder service. :^)
I then later upgraded (repaired) my keyboard with a new OLED screen, new Microcontrollers and rotary encoders.

| Component | Quantity |
|-----------|----------|
| RGB LED (SK6812) | 58 |
| Lotus 58 Glow v1.x.x TRRS TH (kit) | 2 |
| Lotus 58 Glow Case TRRS, OLED Kit (black) | 1 |
| [Liatris Microcontroller](https://splitkb.com/products/liatris?_pos=1&_sid=efddd579e&_ss=r) | 2 |
| [Mill Max Low Profile Sockets (with pins)](https://splitkb.com/collections/keyboard-parts/products/mill-max-low-profile-sockets?variant=31945995845709) | 2 |
| [128x32 SSD1306 OLED Display White (2x)](https://splitkb.com/collections/keyboard-parts/products/oled-display?variant=31716335648845) | 2 |
| [Linear Rotary Encoder](https://splitkb.com/collections/keyboard-parts/products/linear-rotary-encoder)| 2 |
| [3D Printed Knobs (CF PLA)](https://www.thingiverse.com/thing:4206617) | 2 |
| [Reset Buttons (side push / set of two)](https://splitkb.com/collections/keyboard-parts/products/reset-buttons) | 1 |
| [Akko Penguin Switches](https://en.akkogear.com/product/akko-v3-pro-penguin-switch-silent/) | 56 |
| [blank XDA Keycaps (various color)](https://aliexpress.com/i/1005005439129217.html) | 56 |

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
| [TweetyDaBird](https://github.com/TweetyDaBird) | For making the keyboard (and helping me out a lot with the firmware in the beginning, and later with a repair) |
| [Tweety's Wild Thinking Discord](https://discord.gg/G6QzcJQUnm) | Also being a great help to me. Especially [RagingCactus](https://github.com/RagingCactus/qmk_firmware/tree/4999b32b5a03b7e1e680d352d90f086fee1a6232/keyboards/lotus58/keymaps/ragingcactus) for the RGB. |
| [joric](https://github.com/joric/qle) | For the glcdfont editor. Very cool. |
| [laosteven](https://github.com/laosteven/fluffy-octo-eureka) | For the readme inspiration. |
