#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *c)
{
	int i;
	unsigned int dec_val = 0;

	if (!c)
		return (0);

	for (i = 0; c[i]; i++)
	{
		if (c[i] < 48 || c[i] > 49)
			return (0);
		dec_val = 2 * dec_val + (c[i] - 48);
	}
	return (dec_val);
}
