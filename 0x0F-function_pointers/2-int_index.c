#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns index in an array
 * @array: array to search from
 * @size: size of the number of elements in the array
 * @cmp: a pointer to the function to compare values
 * Return: -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
			for (v = 0; v < size; v++)
			{
				if (cmp(array[v]) == 1)
					return (v);
			}
	return (-1);
}
