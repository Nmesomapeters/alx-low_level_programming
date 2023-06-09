#include "main.h"

/**
 * flip_bits - it counts the number of bits to flip numbers
 * @n: number
 * @m: The number to flip n
 * Return: Required number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
