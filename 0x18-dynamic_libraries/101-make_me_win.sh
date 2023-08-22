#!/bin/bash
wget -p /tmp https://github.com/Aksaim-mohamed-amin/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
