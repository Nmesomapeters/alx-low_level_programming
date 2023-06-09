#include "main.h"

/**
 * get_bit -  function that gets a bit at the index.
 * @n: number
 * @index: index
 * Return: value of the bit 1 or -1 only if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
