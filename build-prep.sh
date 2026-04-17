#!/bin/sh

# IMPORTANT: Run this script in the build directory

# configure proton with desired options

# bear was removed with Proton 11 for some reason

../configure.sh --enable-ccache --build-name=$1
