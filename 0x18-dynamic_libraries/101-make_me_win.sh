#!/bin/bash
wget -P /tmp/ https://raw.github.com/Tunji-L/alx-low_level_programming/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD=/tmp/libjacpot.so
