#!/bin/bash
wget -P /tmp https://raw.github.com/AmrTaman/alx-low_level_programming/master/0x18-dynamic_libraries/TamanAlwaysWin.so
export LD_PRELOAD=/tmp/TamanAlwaysWin.so
