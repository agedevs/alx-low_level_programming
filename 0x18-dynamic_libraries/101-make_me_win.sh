#!/bin/bash
wget -O /tmp/win.so hhttps://github.com/agedevs/alx-low_level_programming/tree/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
