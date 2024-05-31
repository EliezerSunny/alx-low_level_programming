#!/bin/bash
gcc -shared -fPIC -o libhack.so -nostartfiles -D_GNU_SOURCE -Wall -Werror win.c -ldl
LD_PRELOAD=./libhack.so ./gm 9 8 10 24 75 9
