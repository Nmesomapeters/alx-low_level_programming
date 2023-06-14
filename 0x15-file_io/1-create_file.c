#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - it creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, counter = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[counter])
			counter++;

		if (write(file, text_content, counter) == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
