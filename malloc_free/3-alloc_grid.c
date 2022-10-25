#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to the 2-dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * If width or height is 0 or negative, return NULL
 * Returns NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
