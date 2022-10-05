#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees  2 dimensional grid
 *
 * @grid: 2 dimensional grid
 * @height: height of the grid.
 *
 * Return: null
 *
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

