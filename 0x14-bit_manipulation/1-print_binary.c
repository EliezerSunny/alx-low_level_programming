#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be in binary.
 */
void print_binary(unsigned long int c)
{
	if (c > 1)
		print_binary(c >> 1);

	_putchar((c & 1) + '0');
}
