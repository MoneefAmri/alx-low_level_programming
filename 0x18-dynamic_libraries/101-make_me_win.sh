#!/bin/bash
wget -P /tmp https://github.com/MoneefAmri/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-libwin.so
export LD_PRELOAD=/tmp/101-libwin.so
