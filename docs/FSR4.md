# FSR4 Usage


**Required for Proton-EM 10.0-1f and lower:**

First you need to download amdxcffx64 and place it into the system32 directory of your wine prefix.

```
wget --referer https://support.amd.com https://download.amd.com/dir/bin/amdxcffx64.dll/67D435F7d97000/amdxcffx64.dll
```

Then use `FSR4_UPGRADE=1` to automatically upgrade a game using FSR3.1 to FSR4.

**Proton-EM 10.0-20 and newer:**

Just set `PROTON_FSR4_UPGRADE=1` the DLL will be automatically downloaded and everything should just work.  
However, if the download fails you can attempt a manual download.
1. Download amdxcffx64.dll and place into `PROTON_EM_INSTALL_PATH/files/lib/wine/amdprop`
```
wget --referer https://support.amd.com https://download.amd.com/dir/bin/amdxcffx64.dll/67D435F7d97000/amdxcffx64.dll
```
2. Create a file called `amdxcffx64_version` within the amdprop directory and place the following string into it `67A4D2BC10ad000`.

**Required System Configuration:**

RDNA4 will work out of the box in FP16 mode. However, it will run poorly, so you can enable FP8 using `DXIL_SPIRV_CONFIG=wmma_fp8_hack` and using this branch of mesa: [radv-float8-hack3](https://gitlab.freedesktop.org/DadSchoorse/mesa/-/commits/radv-float8-hack3). If it works it should run approximately as fast as it does on windows.

RDNA3 will also work out of the box in FP16 mode, but with graphical glitches. Use `DXIL_SPIRV_CONFIG=wmma_rdna3_workaround` to work around these. Keep your expectations low because the performance is pretty bad. (Requires mesa-git)

RDNA2 and RDNA1 require [this](https://github.com/doitsujin/coopmat-layer) vulkan layer. Keep your expectations low because the performance will be pretty terrible.

