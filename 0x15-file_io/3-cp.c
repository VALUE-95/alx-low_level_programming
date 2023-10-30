#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - allocates memory for buffer.
 *
 * Return: pointer to allocated buffer.
 */

char *create_buffer(void)
{
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory for buffer\n");
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close file descriptor.
 * @fd: file descriptor.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int from, to, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer();
	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't create or write to file %s\n", argv[2]);
		free(buffer);
		close_file(from);
		exit(99);
	}

	do {
		bytes_read = read(from, buffer, BUFFER_SIZE);

		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(98);
		}

		bytes_written = write(to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(99);
		}

	} while (bytes_read > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
