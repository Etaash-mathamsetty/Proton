# FSR4 Usage

Please use Proton-EM 10.0-22 or higher when following this guide.

**Proton-EM 10.0-22 and newer:**

Just set `PROTON_FSR4_UPGRADE=1` the FSR 4.0.0 DLL will be automatically downloaded and everything should just work.  
However, if the download fails you can attempt a manual download. (This is is for FSR 4.0.0)
1. Download amdxcffx64.dll and place into `$PROTON_EM_INSTALL_PATH/files/lib/wine/amdprop/`
```
wget --referer https://support.amd.com https://download.amd.com/dir/bin/amdxcffx64.dll/67D435F7d97000/amdxcffx64.dll
```
2. Create a file called `amdxcffx64_version` within the amdprop directory and place the following string into it `67A4D2BC10ad000`.

**Required System Configuration:**

RDNA4 will work out of the box in FP8 mode using mesa 25.2. Set `PROTON_FSR4_UPGRADE=1` and enjoy the quality (and performance). On Proton-EM 10.0-2D and higher if the game supports SDK 2.0.0 then FSR 4.0.2 will be used by default, just like Windows. (The same applies to RDNA3)

RDNA3 will also work out of the box in FP16 mode using mesa 25.2, but with graphical glitches. Use `DXIL_SPIRV_CONFIG=wmma_rdna3_workaround` to work around these. With recent updates to vkd3d-proton and mesa, performance is superb, just a tad bit slower than XeSS. Although additional quality can be gained by using FSR 4.0.1, there is a massive performance hit associated with using FSR 4.0.1 on RDNA3. **Please use FSR 4.0.0 instead.**

RDNA2 and RDNA1 require [this](https://github.com/doitsujin/coopmat-layer) vulkan layer. Keep your expectations low because the performance will be pretty terrible.

**Check if FSR4 is working:**

Only on Proton-EM 10.0-2F and higher.

Set the environment variable `FSR4_WATERMARK=1` and you should get a result similar to this on the top left of your screen if it's working. 

<img width="1276" height="762" alt="image" src="https://github.com/user-attachments/assets/76a65ce9-bd5a-4293-89d5-ae06c6f7e5ef" />

