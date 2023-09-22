#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: input string.
 * Return: destination.
 */
char *rot13(char *s)
{
	int i, counter = 0;
	char origin[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cypher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + counter) == origin[i])
			{
				*(s + counter) = cypher[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
