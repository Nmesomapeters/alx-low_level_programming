#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int long1 = 0;
	int m = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		long1++;
	}
	m = long1 - 1;
	for (o = 0; o <= m; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
