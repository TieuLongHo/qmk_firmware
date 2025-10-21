# cygnus_4x6

![cygnus_4x6](imgur.com image replace me!)

_A short description of the keyboard/project_

-   Keyboard Maintainer: [Tieu Long](https://github.com/TieuLongHo)
-   Hardware Supported: _Only tested on the ProMicro_
-   Hardware Availability: [juhakaup's GitHub Repository](https://github.com/juhakaup/keyboards/tree/main)

## Build Instructions

To compile the default keymap, run the following command in the QMK firmware root directory:

```bash
make handwired/cygnus_4x6:default
```

## Flashing Instructions

To flash the keyboard, use the following commands for each half:
The left half:

```bash
qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-left
```

The right half:

```bash
qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-right
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

qmk compile -kb handwired/cygnus_4x6 -km default
