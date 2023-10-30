#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grids created by the alloc_grid function
 * @grid: the 2D grid
 * @height: number of rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || grid == 0)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
