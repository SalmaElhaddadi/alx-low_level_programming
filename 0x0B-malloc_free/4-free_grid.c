#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function frees a two dimensional grid
 *
 * @grid: 2 dimentional grid.
 * @height: array's height.
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
