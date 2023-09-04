#include "main.h"

/**
 * get_endianness - it checks for endianness
 * Return: If it's big-endian - 0
 *         If it's little-endian - 1
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
