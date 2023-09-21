#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize.
 * Return: destination.
 */

char *cap_string(char *s)
{
	int i, counter = 0;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + counter) >= 97 && *(s + counter) <= 122)
		*(s + counter) = *(s + counter) - 32;
	counter++;
	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + counter) == sep[i])
			{
				if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))
					*(s + (counter + 1)) = *(s + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (s);
}
