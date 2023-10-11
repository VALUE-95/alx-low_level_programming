#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each parameter of array
 * @array: an array
 * @size: size of the array
 * @action: function to perform on each parameter of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
		return;
	for (v = 0; v < size; v++)
		action(array[v]);
}
