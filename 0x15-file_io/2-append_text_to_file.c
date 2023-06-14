#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int numletters;
	int gwg;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		gwg = write(file, text_content, numletters);

		if (gwg == -1)
			return (-1);
	}

	close(file);

	return (1);
}
