#!/bin/bash
wget -P .. https://raw.githubusercontent.com/afiayeboah/alx-low_level_programming/master/0x18-dynamic_libraries/libmakemewin.so
export LD_PRELOAD="$PWD/../libmakemewin.so"
