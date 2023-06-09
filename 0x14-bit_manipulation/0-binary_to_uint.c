#include "main.h"

/**
 * binary_to_uint - it converts binary number to an unsigned integer
 * @b: it points strings of 0 and 1 chars
 * Return:  NULL or number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiple = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		number += (b[len] - '0') * multiple;
		multiple *= 2;
	}

	return (number);
}
