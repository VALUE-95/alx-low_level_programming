#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the created file.
 * @text_content: pointer to the string to be written.
 * Return: if function fails, --1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fr, wt, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	fr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fr, text_content, lens);

	if (fr == -1 || wt == -1)
	return (-1);

	close(fr);

	return (1);
}
