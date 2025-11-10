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
    - This approach retains winex11's behavior while allowing more compositor compatibility since we are responsible for scaling our buffers.
4. Reworking the mouse pointer
    - The mouse pointer implementation is not quite correct in several ways. I'm not going to claim mine is perfect either but it tries to fix the shortcomings of the upstream implementation in a couple ways:
         - First we switch to using unaccelerated dx,dy (raw input) by default and provide a senstivity adjustment mechanism (e.g `WAYLANDDRV_RAWINPUT=0.3`)
         - Then we implement touchpad scrolling through truncation & accumulation of the scroll value. We need to utilize the pointer frame notification in this case to help determine if we should use the discrete scroll even or the regular scroll event. The accumulation is reset after the user stops scrolling. Somehow, this lead to a much better touchpad scrolling experience than what is currently present in winex11.
         - To handle pointer warping, we keep the existing path the same, but introduce support for `wp_pointer_warp_v1` to gaurantee that the mouse pointer is warped on compositors that support this feature. `wp_pointer_warp_v1` is much simpler to use and less prone to issues when it comes to games that "lock" the cursor by constantly warping it.
         - Windows has two "queues" (not sure if that's the right term) when it comes to processing inputs. There's the rawinput one which is system wide and there's the normal one which is per HWND. Upstream winewayland had made a severe mistake when it came to faking how the rawinput should work. Their fatal flaw was that relative motion needed to *always* be sent through the rawinput channel at a minimum even if the cursor wasn't locked.
         - To try to implement the correct behavior on winewayland we need to make a few changes:
             - Make relative motion always active, ensure its inputs are always sent to the rawinput "queue"
             - If the game locks and hides the mouse cursor, disable absolute pointer positioning. Send relative motion events in both "queues"
         - `TODO: Check if missed anything, be more clear on what "locked" means`
5. Dead Keys & Keyboard layouts
    - Windows uses the `KBDTABLES` structure internally to implement dead key mappings. We can store the previously pressed key if it is dead, and then when the next key is pressed we can check if there is a dead key composition within our `KBDTABLES` structure.
    - The dead key composition is generated using the libxkbcommon composition tables API.
    - `TODO: Implement dead key + dead key = dead key composition`
    - There's also a fix for Unicode conversions for dvorak and some other keyboard layouts. 
    - Thanks to Rémi Bernon for the initial dead key code.
6. Window move hack
    - There is no way for us to sync up the position of a window from wayland and tell the win32 side what the position is. This effectively makes these 2 sets of coordinates completely decoupled. If the win32 side thinks that it's offscreen there's no way to rectify this because we have no mechanism to get the window position in wayland, so what do we do? Clearly it's not something we can fix properly so we hack around it. In this build of proton, whenever a window is spawned with winewayland in it is automatically repositioned such that the client rect is within the vscreen. If repositioning is impossible or if the window is completely offscreen then the coordinates are untouched.
        - Note: In the past the window rect was used but this caused issues with certain games that intentionally wanted some of the window rect offscreen.
7. Misc. stuff
    - Implement `xdg-activation` protocol for games that try to flash the taskbar icon
