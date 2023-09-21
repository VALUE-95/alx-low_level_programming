#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: input string.
 * Return: destination
 */
char *leet(char *s)
{
	int i, counter = 0;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + counter) == lower[i] || *(s + counter) == upper[i])
			{
				*(s + counter) = nums[i];
				break;
			}
		}
		counter++;
	}
	return (s);
}
