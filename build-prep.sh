#!/bin/sh

# IMPORTANT: Run this script in the build directory

# configure proton with desired options

../configure.sh --enable-bear --enable-ccache --build-name=$1
