# Proton-EM Options

1. `PROTON_USE_SDL=1`
    - Uses SDL input instead of HIDRAW/Steam Input
    - Formerly `PROTON_PREFER_SDL=1`
2. `PROTON_USE_WAYLAND=1` or `PROTON_ENABLE_WAYLAND=1`
    - Enables Wayland driver
3. `PROTON_ENABLE_HDR=1`
    - Enables HDR
4. `WAYLANDDRV_XOFFSET` and `WAYLANDDRV_YOFFEST`
    - Can be used to specify primary monitor
    - `monitor_x - WAYLANDDRV_XOFFSET = 0` and `monitor_y - WAYLANDDRV_YOFFSET = 0` conditions must be met for the specified monitor to be considered the primary one
5. `FSR4_UPRGRADE=1` enables automatic FSR4 upgrade for games with FSR 3.1
    - Ensure you have the correct mesa version and pass in the correct env variables. Look here for more info: https://github.com/Etaash-mathamsetty/wine-builds/releases/tag/fsr4. This will support RDNA3 and RDNA4 without any other steps.
    - You can use optiscaler to replace DLSS with FSR4 as well just like it does on Windows.
    - RDNA2/1 requires this layer: https://github.com/doitsujin/coopmat-layer. Keep in mind the performance will be absolutely terrible :)

Have fun gaming!
