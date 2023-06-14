#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of bytes to read and print
 *
 * Return: number of bytes actually read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	FILE *file = fopen(filename, "m");

	if (file == NULL)
		return (0);

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	free(buffer);

	fclose(file);

	return (bytes_read);
}
