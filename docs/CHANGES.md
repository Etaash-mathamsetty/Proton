## winewayland  

This document describes alterations of the winewayland driver from upstream wine to what is available in Proton-EM (and by extension other proton forks such as Proton-GE and Proton-cachyos)

For what it's worth, I am not the original author of the winewayland driver, so keep that in mind while reading this. Generally, my goal was to try and emulate what works well considering we do have a good reference already (winex11).   


Let's begin with the simpler changes/additions:

1. Monitor ranking
    - Currently, upstream winewayland is unable to pick the correct primary monitor, opting to pick either the one which has top left corner located at (0, 0) which is the windows convention or the one that is the most towards the left if none exists at (0, 0). This assumption is made because there is no way to determine the user configured primary monitor. 
    - This is not a good solution, especially considering win32u emulates display modes by treating the primary monitor as the one with the highest resolution. This assumption led to issues where you were limited by the resolution of your leftmost montor... not ideal.
        - However, we can take advantage of this fact. If we simply assume the best monitor is the monitor which has the highest product of its `width * height * refresh_rate` we can set this one as the primary. Generally, the monitor with the higher resolution and/or refresh rate is the better one anyways. 
2. EDID Emulation
    - Some games require the presence of at least some sort of EDID. Wayland doesn't expose EDID directly which is fair. Therefore, we need some way of emulating it. Luckily, for us winex11 already has some EDID emulation code, so we can just borrow some of it for our implementation :)
    - For proper HDR color accuracy we need to encode a couple properties of the given display such as the maximum Content Light Level (CLL) and the maximum Full frame Average Light Level (FALL). These values are part of the static HDR metadata extension.
        - Real joy was when Control detected the CLL from my KDE HDR calibration for the first time...
3. DPI Scaling and `wp_fractional_scale_v1`'s role
    - winewayland already has the code to handle the wayland fractional scaling protocol. So all we have to do is just scale buffers and inputs based on the fractional scaling protocol's scale instead of the DPI specified in winecfg and everything just works! Applications that implement DPI scaling become larger and fullscreen games continue to work.
4. Reworking the mouse pointer
    - The mouse pointer implementation is not quite correct in several ways. I'm not going to claim mine is perfect either but it tries to fix the shortcomings of the upstream implementation in a couple ways:
         - First we switch to using "raw input" by default and provide a senstivity adjustment mechanism (e.g `WAYLANDDRV_RAWINPUT=0.3`)
         - Then we implement touchpad scrolling through truncation & accumulation of the scroll value. We need to utilize the pointer frame in this case to help determine if we should use the discrete scroll even or the regular scroll event. The accumulation is reset after the user stops scrolling. Somehow, this lead to a much better touchpad scrolling experience than what is currently present in winex11.
         - `<Continue later>`
5. Dead Keys & Keyboard layouts
    - `stuff here`
6. Window move hack
    - 
