#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b - size of memory
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *value;

	value = malloc(b);
	if (value == NULL)
		exit(98);
	else
		return (value);
}
