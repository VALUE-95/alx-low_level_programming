#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int q;

	for (q = 0; dest[q] != '\0' ; q++)
		destlen++;

	for (q = 0; dest[q] != '\0' ; q++)
		srclen++;

	for (q = 0 ; q <= srclen; q++)
		dest[destlen + q] = src[q];

	return (dest);
}
