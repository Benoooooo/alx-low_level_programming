#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that return pointer  to a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: NUll when code fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int j, i;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}

	grid = (int **) malloc(height * sizeof(char));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] =(int *)malloc(width * sizeof(int));

	if (grid[i] == NULL){

		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return NULL;;
	}
	for (j = 0; j < width; j++){
		grid[i][j] = 0;
	}
	}
	return grid;
}
