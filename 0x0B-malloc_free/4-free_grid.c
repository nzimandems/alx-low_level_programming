#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees a 2 dimensional array of integers
 * @grid: the 2 dimensional array of integers being freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
