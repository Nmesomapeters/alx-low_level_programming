#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int b, c, d, e;

	for (b = 0; b <= 2; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			for (d = 0; d <= 5; d++)
			{
				for (e = 0; e <= 9; e++)
				{
					if (b >= 2 && c >= 4)
						break;
					_putchar(b + 48);
					_putchar(c + 48);
					_putchar(58);
					_putchar(d + 48);
					_putchar(e + 48);
					_putchar('\n');
				}
			}
		}
	}
}	
