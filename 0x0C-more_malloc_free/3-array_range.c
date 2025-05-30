#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers, the array created
 * should contain all the values from min(included) to max(included), ordered
 * from min to max, if min > max, return NULL, if malloc fails, return NULL
 * @min: is the minimum amount of number
 * @max: is the maximum amount of number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, total;

	if (min > max)
		return (NULL);

	total = max - min + 1;

	ptr = malloc(sizeof(int) * total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
