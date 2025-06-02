# Proton-EM Additions

### Version Numbers

If you are confused about the version numbers, just know I switched to hexdecimal for version numbers recently.

## Options

1. `PROTON_USE_SDL=1`
    - Uses SDL input instead of HIDRAW/Steam Input
    - Formerly `PROTON_PREFER_SDL=1`
2. `PROTON_USE_WAYLAND=1` or `PROTON_ENABLE_WAYLAND=1`
    - Enables Wayland driver
3. `PROTON_ENABLE_HDR=1`
    - Enables HDR
4. Proton-EM 10.0-19 and lower use `WAYLANDDRV_XOFFSET=integer` and `WAYLANDDRV_YOFFEST=integer`
    - Can be used to specify primary monitor
    - `monitor_x - WAYLANDDRV_XOFFSET = 0` and `monitor_y - WAYLANDDRV_YOFFSET = 0` conditions must be met for the specified monitor to be considered the primary one
    - I recommend checking the log produced by `PROTON_LOG=+waylanddrv` to get your offset.
5. Proton-EM 10.0-1b and higher use `WAYLANDDRV_PRIMARY_MONITOR=name` which would be something like eDP-1.
6. `FSR4_UPRGRADE=1` enables automatic FSR4 upgrade for games with FSR 3.1
    - Ensure you have the correct mesa version and pass in the correct env variables. Look [here](FSR4.md) for more info. This supports any RDNA gpu (including RDNA 1).
    - You can use optiscaler to replace DLSS with FSR4 as well just like it does on Windows.

## Notes

- Use UMU to run this Proton outside of Steam
- If something that uses electron/CEF doesn't work with winewayland try `--in-process-gpu`

Have fun gaming!
