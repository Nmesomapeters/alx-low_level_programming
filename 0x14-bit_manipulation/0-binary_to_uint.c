 #include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts binary to unsigned int.
 * @b:  Binary string.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[m] - '0');
	}

	return (dec_value);
}
