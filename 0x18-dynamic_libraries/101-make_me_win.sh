#!/bin/bash
wget -P /tmp/ https://github.com/bedzon94/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so
