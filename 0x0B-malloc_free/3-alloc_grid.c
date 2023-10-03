#include "main.h"

/**
 *alloc_grid - a two dimensional array
 *@width: number of columns
 *@height: number of rows
 *Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **display;

	if (width <= 0 || height <= 0)
		return (NULL);

	display = malloc(sizeof(int *) * height);

	if (display == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		display[i] = malloc(sizeof(int) * width);
		if (display[i] == NULL)
		{
			free(display);
				for (j = 0; j <= height; j++)
					free(display[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			display[i][j] = 0;
	}
	return (display);
}
