#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *value;
	unsigned int i = 0, j = 0, s1len = 0, s2len = 0;

	while (s1 && s1[s1len])
		s1len++;
	while (s2 && s2[s2len])
		s2len++;

	if (n < s2len)
		value = malloc(sizeof(char) * (s1len + n + 1));
	else
		value = malloc(sizeof(char) * (s1len + s2len + 1));

	if (!value)
		return (NULL);

	while (i < s1len)
	{
		value[i] = s1[i];
		i++;
	}

	while (n < s2len && i < (s1len + n))
		value[i++] = s2[j++];

	while (n >= s2len && i < (s1len + s2len))
		value[i++] = s2[j++];

	value[i] = '\0';

	return (value);
}
