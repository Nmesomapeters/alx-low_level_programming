#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
