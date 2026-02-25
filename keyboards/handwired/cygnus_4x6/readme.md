# cygnus_4x6

![cygnus_4x6](imgur.com image replace me!)

A handwired split 4x6 keyboard for Pro Micro-compatible controllers.

-   Keyboard Maintainer: [Tieu Long](https://github.com/TieuLongHo)
-   Hardware Supported: _Only tested on the ProMicro_
-   Hardware Availability: [juhakaup's GitHub Repository](https://github.com/juhakaup/keyboards/tree/main)

## Build

To compile the default keymap, run the following command in the QMK firmware root directory:

```bash
qmk compile -kb handwired/cygnus_4x6 -km default
```

## Flashing

Flash each half separately so handedness is written correctly.

1. Disconnect the TRRS cable between halves.
2. Plug in only the half you want to flash.
3. Flash that half:
   Left half:
   ```bash
   qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-left
   ```
   Right half:
   ```bash
   qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-right
   ```
4. When prompted, press the reset button (or short reset pads) on that half.
5. Repeat for the other half.
6. Reconnect TRRS, then connect USB to either side.

If you use the VIA app, keep using `-km default`. VIA support is already enabled in this keyboard firmware.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

## Troubleshooting

### Keyboard only works after unplug/replug

This keyboard enables split USB role detection with a watchdog timeout so it can recover from startup timing issues where both halves initially pick the wrong role.

### Non-USB half does not respond

Use this checklist:

1. Reflash both halves with the same keymap and firmware version.
2. Confirm each half was flashed with the correct side flag:
   `avrdude-split-left` for left, `avrdude-split-right` for right.
3. Test with a known-good TRRS cable.
4. Connect TRRS before plugging USB into the PC.
5. If it still fails, reset both halves once after boot and test again.

### Layout is mixed when USB is plugged into the other side

This means handedness EEPROM is not set correctly on one or both halves.
Re-run side-specific flash commands with TRRS disconnected:

```bash
qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-left
qmk flash -kb handwired/cygnus_4x6 -km default -bl avrdude-split-right
```

Then reconnect TRRS and test again.

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
