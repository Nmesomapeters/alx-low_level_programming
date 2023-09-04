#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of bytes to read and print
 * Return: number of bytes actually read and printed, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, n;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	n = write(STDOUT_FILENO, text, let);

	close(file);

	return (n);
}
