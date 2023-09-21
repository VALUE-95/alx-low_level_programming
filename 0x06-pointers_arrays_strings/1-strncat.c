#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int q;

	for (q = 0 ; q < n && *src != '\0' ; q++)
	{
		dest[length + q] = src[q];
		src++;
	}

	dest[length + q] = '\0';

	return (dest);
}
