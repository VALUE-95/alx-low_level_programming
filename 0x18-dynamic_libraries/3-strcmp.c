#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int q;

	for (q = 0 ; s1[q] != '\0' || s2[q] != '\0' ; q++)
	{
		if (s1[q] != s2[q])
		{
			if (s1[q] < s2[q])
				return (s1[q] - s2[q]);

			else if (s2[q] < s1[q])
				return (s1[q] - s2[q]);
		}
	}
	return (0);
}
