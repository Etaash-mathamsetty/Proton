#!/bin/bash

# IMPORTANT: Run this script in the build directory

# Apply patches (only for testing, as this project aims to fork and apply patches in that fork)

function check_abort {
    if [ $? -ne 0 ]; then
        printf "\033[31mgit am failed, aborting! Perhaps the patch has already been applied? \n\033[0m"
        git am --abort
    fi
}

# takes one argument (path to patch file)
function patch_am {
    git am $1
    check_abort
}

pushd ../gstreamer
patch_am ../patches/gstreamer/5509.patch
patch_am ../patches/gstreamer/5511.patch
popd
pushd ../vkd3d-proton
patch_am ../patches/vkd3d-proton/0001-vkd3d-Load-amdxc64-when-using-AMD.patch
popd
