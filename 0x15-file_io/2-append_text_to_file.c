
#include "main.h"

/**
  * append_text_to_file - it appends text to file.
  * @filename: filename
  * @text_content: text content
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, n, length = 0;

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
	n = write(o, text_content, len);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
