#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid:  2d grid
 * @height: height of grid
 * Description: frees memory of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);
}
