#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @m: pointer to first value
 * @n: pointer to second value
 */
void swap_int(int *m, int *n)
{
	int d;

	d = *m;
	*m = *n;
	*n = d;
}
