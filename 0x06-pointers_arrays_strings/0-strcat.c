#include <stdio.h>

/**
 * main - concatenates two strings dest and scr
 *Returns (src)
 */

char *_strcat(char *dest, char *src);

int main()
{
	char dest[] = "Hello";
	char src[] = "World";

	char *pqr = _strcat(dest, src);

	printf("Concatenated String: %s\n", pqr);

	return 0;
}

char *_strcat(char *dest, char *src)
{
	char *pqr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return pqr;
}
