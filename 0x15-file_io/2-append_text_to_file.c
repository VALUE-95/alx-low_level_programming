#include "main.h"

/**
 * append_text_to_file -appends text to a file.
 * @filename: pointer to the name of a file.
 * @text_content: string to be aded to the file
 * Return: if function fails --1 or -1 when otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ot, wt, lens = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	ot = open(filename, O_WRONLY | O_APPEND);
	wt = write(ot, text_content, lens);

	if (ot == -1 || wt == -1)
		return (-1);

	close(ot);

	return (1);
}
