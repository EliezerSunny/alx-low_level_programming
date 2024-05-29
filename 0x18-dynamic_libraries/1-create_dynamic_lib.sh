#!/bin/bash
# This script creates a dynamic library called liball.so from all the .c files in the current directory

# Compile all .c files into position-independent code and create the shared library
gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -o liball.so -fPIC *.c
