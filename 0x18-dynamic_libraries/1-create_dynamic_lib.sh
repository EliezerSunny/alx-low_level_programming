#!/bin/bash

# Compile all .c files into position-independent code object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Link the object files into a shared library called liball.so
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
