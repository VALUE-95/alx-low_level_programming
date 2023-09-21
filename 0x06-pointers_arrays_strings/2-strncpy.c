#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0 ; q < n && src[q] != '\0' ; q++)
		dest[q] = src[q];

	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);

}
