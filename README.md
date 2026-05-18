# Introduction

Proton-EM is a fork of [Proton](https://github.com/valvesoftware/proton) with a modified version of Wine, DXVK, and other submodules to implement the following features:

- Video codec fixes
    - Thanks to (in no paticular order) LoathingKernel, GloriousEggroll, NelloKudo, and many others for their work on getting videos working with Proton.
- Protonfixes
    - Thanks to GloriousEggroll and LoathingKernel for providing a reference on how to add this to the Makefile.
- FSR 4.x support, including redstone features like machine learning frame generation
    - FSR4 support on RDNA3
    - Anti-Lag 2 on D3D12 games (Upstreamed in Proton experimental)
- winewayland support with various improvements compared to upstream Wine
    - EDID emulation support (with CTA-861 HDR static metadata extension for HDR)
    - Color accurate windows HDR using `windows_bt2100` and `windows_scrgb` image descriptions
    - Server side decorations support
    - Moving fullscreen windows between different outputs
    - Heuristic to determine which monitor is most likely the primary one
    - Fractional scaling support
    - Support for flashing the task bar icon through `xdg-activation-v1`
    - Locked modifier key support
    - Improved keyboard layout support, dead key support, and various other keyboard fixes
    - Pointer warp protocol support (Now upstreamed by someone else in Wine 11.9)
    - Pointer rawinput support
    - Touchpad scrolling support
    - Window minimization and focus loss support
    - Improved fullscreen window support (now with black bars :D)
    - Hack to move windows entirely on screen (resolves being unable to interact with portions of windows)
    - Wayland client surface caching
    - Various bug fixes
    - Planned work: Cross Process Rendering, Blit from client surface to toplevel
- Automatic HDR enablement for DXVK when the output supports it
- Some ntoskrnl patches for games that use AntiCheatExpert
- Various other patches to fix bugs or improve performance


This project aims to provide a good user experience with the end goal of no longer needing to exist due to its code being in the respective upstream sources. A small number of the above features have already been upstreamed, with plans on being upstreaming more in the future.

Please check the [original Proton README](README-ORIG.md) for the launch options provided by upstream Proton.
