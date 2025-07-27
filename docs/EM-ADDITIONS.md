# Proton-EM Additions

### Version Numbers

If you are confused about the version numbers, just know I switched to hexdecimal for version numbers recently.

## Options

Pass in the following environment variables to your game to adjust the features available in Proton-EM.

1. `PROTON_USE_SDL=1` or `PROTON_PREFER_SDL=1`
    - Uses SDL input instead of HIDRAW/Steam Input
2. `PROTON_USE_WAYLAND=1` or `PROTON_ENABLE_WAYLAND=1`
    - Enables Wayland driver
3. `PROTON_ENABLE_HDR=1`
    - Enables HDR
4. `PROTON_ADD_CONFIG=option1,option2,option3` List of options is below:
    - `sdlinput` is equivalent to `PROTON_USE_SDL=1`
    - `fsr4` is equivalent to `PROTON_FSR4_UPGRADE=1`
    - `fsr4rdna3` is equivalent to `PROTON_FSR4_UPGRADE=1 DXIL_SPIRV_CONFIG=wmma_rdna3_workaround`
    - `hdr` is equivalent to `PROTON_ENABLE_HDR=1`
    - `wayland` is equivalent to `PROTON_USE_WAYLAND=1`
    - `wow64` is equivalent to `PROTON_USE_WOW64=1`
    - `nontsync` is equivalent to `PROTON_NO_NTSYNC=1`
5. Use `WAYLANDDRV_PRIMARY_MONITOR=name` to specify primary monitor on Proton-EM 10.0-1b and higher. Where name would be something like `eDP-1`.
    - You probably don't need this option on Proton-EM 10.0-25 or higher
6. `PROTON_FSR4_UPGRADE=1` (Proton-EM 10.0-20 and higher. Using this env will automatically download amdxcffx64) or `FSR4_UPGRADE=1`. Both enable automatic FSR4 upgrade for games with FSR 3.1
    - Ensure you have the correct mesa version and pass in the correct env variables. Look [here](FSR4.md) for more info. This supports any RDNA gpu (including RDNA 1).
    - You can use optiscaler to replace DLSS with FSR4 as well just like it does on Windows.
7. `PROTON_ENABLE_MEDIACONV=1` enables media converter for winegstreamer.
    - This is not needed for winedmo, since the mediaconverter implementation of the codecs doesn't override the underlying implementation.
8. `WAYLANDDRV_RAWINPUT=0` disables unaccelerated input and uses accelerated input. Requires Proton-EM 10.0-1e or higher
    - Might be needed due to unaccelerated input being overly sensitive on some setups
9. `PROTON_NO_NTSYNC=1` disables NTsync (Proton-EM 10.0-27 and higher)

## Notes

- Use UMU to run this Proton outside of Steam
- If something that uses electron/CEF doesn't work with winewayland try `--in-process-gpu`

Have fun gaming!
