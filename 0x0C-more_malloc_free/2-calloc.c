#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc memory
 * is set to zero
 * @nmemb: is the number of element to allocate
 * @size: is the size of the memeory
 * Return: the _calloc function allocates memory for an array of nmemb
 * elements fo size bytes each and return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	if (size != 0 && total / size != nmemb)
		return (NULL);

	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (b = 0; b < total; b++)
	{
		ptr[b] = 0;
	}

	return (ptr);
}
