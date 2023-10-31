#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer_code - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer_code(char *file)
{
	char *buffer_code;

	buffer_code = malloc(sizeof(char) * 1024);
	if (buffer_code == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer_code);
}

/**
 * close_file_code - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file_code(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from_code, to_code, r_code, w_code;
	char *buffer_code;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer_code = create_buffer_code(argv[2]);
	from_code = open(argv[1], O_RDONLY);
	r_code = read(from_code, buffer_code, 1024);
	to_code = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from_code == -1 || r_code == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer_code);
			exit(98);
		}
		w_code = write(to_code, buffer_code, r_code);
		if (to_code == -1 || w_code == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer_code);
			exit(99);
		}
		r_code = read(from_code, buffer_code, 1024);
		to_code = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_code > 0);
	free(buffer_code);
	close_file_code(from_code);
	close_file_code(to_code);
	return (0);
}
