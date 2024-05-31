#include <stdio.h>
#include <stdlib.h>

// Function to override the random number generation
int rand(void) {
    static int i = 0;
    // The numbers you chose: 9, 8, 10, 24, 75 + 9
    int numbers[] = {9, 8, 10, 24, 75, 9};
    return numbers[i++ % 6];
}

// Override srand to do nothing
void srand(unsigned int seed) {
    (void)seed;
}
