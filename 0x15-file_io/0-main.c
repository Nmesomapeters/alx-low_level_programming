#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - it checks the main code
  *
  * Return: 0 on success
  */
int main(int ac, char **av)
{
	ssize_t m;

        if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	m = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", m);
	m = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", m);
	return (0);
}
