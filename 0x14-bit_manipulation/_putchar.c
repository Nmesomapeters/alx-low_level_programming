#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the char c to stdout.
 * @c: Char
 * Return: On success 1 or -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
