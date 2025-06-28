# FSR4 Usage

Please use Proton-EM 10.0-22 or higher when following this guide.

**Proton-EM 10.0-20 and newer:**

Just set `PROTON_FSR4_UPGRADE=1` the FSR 4.0.1 DLL will be automatically downloaded and everything should just work.  
NOTE: On Proton-EM 10.0-22 and 10.0-23 FSR 4.0.0 is downloaded automatically.  
However, if the download fails you can attempt a manual download. (This is is for FSR 4.0.0)
1. Download amdxcffx64.dll and place into `$PROTON_EM_INSTALL_PATH/files/lib/wine/amdprop/`
```
wget --referer https://support.amd.com https://download.amd.com/dir/bin/amdxcffx64.dll/67D435F7d97000/amdxcffx64.dll
```
2. Create a file called `amdxcffx64_version` within the amdprop directory and place the following string into it `67A4D2BC10ad000`.

**Required System Configuration:**

RDNA4 will work out of the box in FP8 mode using mesa-git. Set `PROTON_FSR4_UPGRADE=1` and enjoy the quality (and performance).

RDNA3 will also work out of the box in FP16 mode, but with graphical glitches. Use `DXIL_SPIRV_CONFIG=wmma_rdna3_workaround` to work around these. With recent updates to vkd3d-proton and mesa, performance isn't great but certainly better than running at the native resolution. Although additional quality can be gained by using FSR 4.0.1, there is a massive performance hit associated with using FSR 4.0.1 on RDNA3. **Please use FSR 4.0.0 instead.**

RDNA2 and RDNA1 require [this](https://github.com/doitsujin/coopmat-layer) vulkan layer. Keep your expectations low because the performance will be pretty terrible.

