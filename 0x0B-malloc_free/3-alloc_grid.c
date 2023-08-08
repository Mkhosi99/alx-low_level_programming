#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Make 2d array of intergers
 * Description: Each element of the grid be initialized to 0
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(**grid));
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[x][j] = 0;
	}

	return (grid);
}
