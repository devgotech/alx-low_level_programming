#!/bin/bash
wget -P /tmp https://github.com/jamesgotech/alx-low_level_programming/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so