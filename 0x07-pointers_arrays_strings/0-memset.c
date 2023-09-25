#include "main.h"

/**
 * _memset - fill a block of memory with a particular value
 * @s: begin address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be modified
 *
 * Return: modified array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int value = 0;

	for (; n > 0; value++)
	{
		s[value] = b;
		n--;
	}
	return (s);
}
