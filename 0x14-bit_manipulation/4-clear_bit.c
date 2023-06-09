#include "main.h"

/**
 * clear_bit - function that sets a bit to 0 at a given index
 * @n: number
 * @index: Index
 * Return: either -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int big = 0x01;

	big = ~(big << index);
	if (big == 0x00)
		return (-1);
	*n &= big;
	return (1);
}
