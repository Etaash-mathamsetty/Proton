# Introduction

**Proton-EM** is a fork of [Proton](https://github.com/valvesoftware/proton) with a modified version of Wine, DXVK, and other submodules to implement the following features:

**NOTE:** This README only applies to Proton-EM 11.0 (or derivatives)

- Video codec fixes
    - Thanks to (in no paticular order) the CodeWeavers team, LoathingKernel, GloriousEggroll, NelloKudo, and many others for their work on getting videos working with Proton.
- Protonfixes and UMU support
    - Thanks to GloriousEggroll and LoathingKernel for providing a reference on how to add this to the Makefile.
- FSR 4.1.1 (and prior) support, including redstone features like machine learning frame generation (MLFG)
    - FSR4-I8 upscaling support on RDNA2/3, FSR4-FP8 + redstone on RDNA4
    - Anti-Lag 2 on D3D12 games (Upstreamed in Proton experimental)
- winewayland support with various improvements compared to upstream Wine
    - EDID emulation support (with CTA-861 HDR static metadata extension for HDR)
    - Color accurate windows HDR using `windows_bt2100` and `windows_scrgb` image descriptions.
        - Planned work: Implement `VK_EXT_swapchain_colorspace` using these image descriptions to avoid any reliance on drivers. (Allows HDR on Nvidia r580 without any Vulkan Layers)
    - Server side decorations support
    - Moving fullscreen windows between different outputs
    - Heuristic to determine which monitor is most likely the primary one
    - Fractional scaling protocol support (Upstreamed in wine 11.12)
    - Support for flashing the task bar icon through `xdg-activation-v1`
    - Locked modifier key support
    - Improved keyboard layout support, dead key support, and various other keyboard fixes
    - Pointer warp protocol support (Now upstreamed by someone else in Wine 11.9)
    - Pointer rawinput support
    - Touchpad scrolling support
    - Touch input support
    - Window minimization and focus loss support
    - Window tiling support
    - xdg-popup support
    - Improved fullscreen window support (Side effect of server side decorations implementation)
    - Hack to move windows entirely on screen (resolves being unable to interact with portions of windows)
    - Wayland client surface caching (fixes DMABUF modifier feedback loops when playing some Vulkan games with direct scanout)
    - Various bug fixes
    - All of this is being upstreamed right now! (I'll add links to MRs later)
    - Not Planned: Cross Process Rendering, Client Surface Composition (afaik these are being worked on upstream)
- Automatic HDR enablement for DXVK (DXGI) when the display supports it
- Some ntoskrnl patches for games that use AntiCheatExpert
- Resolve Adapter LUID collisions on multi-GPU systems.
    - You can run whatever Proton version you like after the collision is resolved because the LUID are stored in the registry.
- Various other patches to fix bugs or improve performance

**Tag Naming Methodology:**

| Tag | Description                               |
| :--------------------- | :---------------------------------------  |
| `EM-11.0-nightly`      | Nightly build, treat like Proton Experimental bleeding-edge |
| `EM-11.0-(i)-alpha(j)` | Known issues, still some missing features | 
| `EM-11.0-(i)-beta(j)`  | All features present, either known issues or needs testing |
| `EM-11.0-(i)-rc(j)`    | Basically ready for release. Probably going through rebase and testing |

This project aims to provide a good user experience with the end goal of no longer needing to exist due to its code being in the respective upstream sources. A small number of the above features have already been upstreamed, with plans on being upstreaming more in the future.

## Environment Variables

| Compat config string  | Environment Variable               | Description  |
| :-------------------- | :--------------------------------- | :----------- |
| `wayland`             | `PROTON_ENABLE_WAYLAND`,`PROTON_USE_WAYLAND`      | Enables the winewayland driver |
| `sdlinput`            | `PROTON_USE_SDL`                                  | Uses SDL2/3 for gamepad input instead of steam input |
|                       | `PROTON_EMULATE_STEAMINPUT`                       | Emulate Steam Input hooks with SDL input. This does not emulate the ISteamInput interface used by a handful of games on Steam (https://partner.steamgames.com/doc/api/isteaminput). Emulation for that interface is beyond my scope, since it would just be easier to hack steam overlay to make it work on wayland native apps. |
|                       | `FSR4_UPGRADE`                                    | Upgrade FSR3/4 to newer FSR4 (FP8 or I8) using AMD's FSR 4.1.1 amdxcffx64.dll taken from Proton Experimental. This option is not needed on RDNA2-4 discrete GPUs |
|                       | `MLFG_UPGRADE`                                    | Enables FSR4 MLFG upgrade to use redstone frame generation. Can be used in tandom with FSR4-I8 on RDNA3 using `DXIL_SPIRV_CONFIG=wmma_rdna3_workaround`. |
|                       | `FSR3_UPGRADE`                                    | Upgrade FSR3 to newer FSR3. **Beware:** This will appear to be FSR4 in game, but it is FSR 3 |
|                       | `FSR_WATERMARK`, `FSR_FG_WATERMARK`               | Enables watermarks for FSR Upscaling and FG. FG watermark is incorrect on 4.1.1 (reports MLFG even when FP8 is not supported). Upscaling watermark works correctly. You can use this to determine which FSR3/4 type you are using (I8 or FP8) |
|                       | `WAYLANDDRV_PRIMARY_MONITOR`                      | Tell the wayland driver what the primary monitor name is (Example: `eDP-1`). This is a workaround for a missing Wayland Protocol. |

When using the winewayland driver, before reporting a bug please consult the list of known compositor bugs: https://github.com/Etaash-mathamsetty/Proton/issues/82

Please check the [original Proton README](README-ORIG.md) for the launch options provided by upstream Proton.
