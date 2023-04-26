#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
