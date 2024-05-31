#!/bin/bash

# Unset LD_PRELOAD to avoid preloading errors
unset LD_PRELOAD

# Check if there are any .c files in the current directory
if ls *.c 1> /dev/null 2>&1; then
    # Compile all .c files into position-independent code object files
    if ! gcc -fPIC -c *.c; then
        echo "Error: Compilation failed."
        exit 1
    fi

    # Link the object files into a shared library called liball.so
    if ! gcc -shared -o liball.so *.o; then
        echo "Error: Linking failed."
        exit 1
    fi

    # Clean up the object files
    rm *.o
else
    echo "No .c files found in the current directory."
    exit 1
fi
