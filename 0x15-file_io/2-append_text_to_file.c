#include "main.h"

/**
  * append_text_to_file - it appends text to the file
  * @filename: filename
  * @text_content: text content
  * Return: -1 or 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, y, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	m = open(filename, O_WRONLY | O_APPEND);
	y = write(m, text_content, length);

	if (m == -1 || y == -1)
		return (-1);

	close(m);

	return (1);
}
