#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>

// Define the numbers you want to win
int numbers[] = {9, 8, 10, 24, 75, 9};

// Define a replacement for the rand() function
int rand() {
    // Return the numbers you want to win
    static int i = 0;
    return numbers[i++ % 6];
}
