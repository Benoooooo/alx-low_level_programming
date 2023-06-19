#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees the grid
 * @grid : the grid to be free
 * @height: the height of the dimension
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
