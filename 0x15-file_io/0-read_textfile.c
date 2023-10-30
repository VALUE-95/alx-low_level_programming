#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text files to STDOUT.
 * @filename: file to be read.
 * @letters: number of items to be read.
 * Return: numbeer of bytes read and printed and 0 or NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bro;
	ssize_t from;
	ssize_t my;
	ssize_t town;

	from = open(filename, O_RDONLY);
	if (from == -1)
		return (0);
	bro = malloc(sizeof(char) * letters);
	town = read(from, bro, letters);
	my = write(STDOUT_FILENO, bro, town);

	free(bro);
	close(from);
	return (my);
}
