#!/bin/bash
wget -P .. https://raw.githubusercontent.com/PaulaMaina/alx-low_level_programming/master/0x18-dynamic_libraries/liblottery.so
export LD_PRELOAD="$PWD/../liblottery.so"
