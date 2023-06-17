#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
* main - It copies the content of a file to another.
* @argc: Number Argument
* @argv: Strings Argument
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		drintf(STDERR_FILENO, "Usage: cp file_from_file_to\n");
		return (97);
	}
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file from);
		return (98);
	}
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		close(fd_to);
		return (99);
	}
	char buf[BUF_SIZE];
	ssize_t num_read;

	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		ssize_t num_written = write(fd_to, buf, num_read);

		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "error: can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "error: can't close file %s\n", fd_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "error: can't close file %d\n", fd_to);
		return (100);
	}
	return (0);
}
