#!/bin/bash

# Only use when protontricks build fails

pushd protonfixes
git reset --hard HEAD
git clean -xdf
pushd subprojects
pushd x11-xserver-utils
git reset --hard HEAD
git clean -xdf
popd
pushd xutils-dev
git reset --hard HEAD
git clean -xdf
popd
pushd unzip
git reset --hard HEAD
git clean -xdf
popd
popd
popd
