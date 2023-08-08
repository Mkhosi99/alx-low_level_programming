#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2d grid
 * @grid: double pointer the 2d grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
