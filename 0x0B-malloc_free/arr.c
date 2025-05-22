#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int width = 6, height = 4, i, j;
	int **ptr;

	ptr = malloc(sizeof(int) * (width * height));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i] = ;
		}
		printf("\n");
	}
	free(ptr);
	return (0);
}
