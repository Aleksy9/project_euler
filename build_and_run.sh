#!/bin/bash

# This script requires Cmake and will build and run the C++ script detailed in the CMakeLists.txt

cmake -S . -B out/build/

make -C out/build/

./out/build/project