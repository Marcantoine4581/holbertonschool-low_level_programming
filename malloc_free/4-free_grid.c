#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: height of the grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
