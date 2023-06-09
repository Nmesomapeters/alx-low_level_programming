#include "main.h"

/**
 * get_bit -  function that gets a bit at the index.
 * @n: number
 * @index: index
 * Return:value of the bit or -1 only if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int high = 0x01;

	high <<= index;
	if (high == 0)
		return (-1);

	if ((n & high))
		return (1);
	else
		return (0);
}
