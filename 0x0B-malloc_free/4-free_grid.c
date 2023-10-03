#include "main.h"
#include <stdlib.h>

/**
 *free_grid - function that frees memory
 *@grid: points to column in memory
 *@height: points to row in memory
 *Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
