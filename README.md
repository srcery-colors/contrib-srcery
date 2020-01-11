![title](assets/title.png)

Terminal configurations for [vim](https://github.com/srcery-colors/srcery-vim), and [emacs](https://github.com/srcery-colors/srcery-emacs) color scheme. Pick and choose for your terminal of choice for the pre-generated configs tracked in this repo.

## Palette

TERMCOL       | NR  | HEX     | RGB
------------- | --- | ------- | ------------
black         |  0  | #1C1B19 | 28,  27,  25
red           |  1  | #EF2F27 | 239, 47, 39
green         |  2  | #519F50 | 81,  159, 80
yellow        |  3  | #FBB829 | 251, 184, 41
blue          |  4  | #2C78BF | 44, 120, 191
magenta       |  5  | #E02C6D | 224, 44,  109
cyan          |  6  | #0AAEB3 | 10, 174, 179
white         |  7  | #B6A88D | 182, 168, 141
brightblack   |  8  | #918175 | 145, 129, 117
brightred     |  9  | #F75341 | 247, 83, 65
brightgreen   |  10 | #98BC37 | 152, 188, 55
brightyellow  |  11 | #FED06E | 254, 208, 110
brightblue    |  12 | #68A8E4 | 104, 168, 228
brightmagenta |  13 | #FF5C8F | 255, 92, 143
brightcyan    |  14 | #53FDE9 | 83, 253, 233
brightwhite   |  15 | #FCE8C3 | 252, 232, 195
------------- | --- | ------- | ------------
orange        | 166 | #D75F00 |  215, 95, 0 |
brorange      | 208 | #FF8700 | 255, 135, 0
hard_black    | 233 | #121212 | 18, 18, 18
xgray1        | 235 | #262626 | 38, 38, 38
xgray2        | 236 | #303030 | 48, 48, 48
xgray3        | 237 | #3A3A3A | 58, 58, 58
xgray4        | 238 | #444444 | 68, 68, 68
xgray5        | 239 | #4E4E4E | 78, 78, 78
xgray6        | 240 | #585858 | 88, 88, 88

## Development
### Requirements
[Node](https://nodejs.org/en/) and [npm](https://www.npmjs.com/) is required to build the terminal configurations.

### Installing
Clone this repository and run `make install`, this will install the required packages via [npm](https://www.npmjs.com/) locally.

### Generating configurations
To get a list of available configurations call `make list`. By editing
the relevant template for any given configuration (located in
`./templates`), or by editing `palette.json` and calling `make` will
generate a new configuration.

To make a single config, say `xresources` call make like this:

``` shell
make xresources/srcery.xresources
```
Keep in mind that if the template or palette has not been changed nothing will get generated.
