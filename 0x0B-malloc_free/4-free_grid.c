#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: An input 2D array of integers to free.
 * @height: height of the grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
