#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initialies
 * it with a specific char.
 * @size: is the size of the charater
 * @c: is the chareter itself
 * Return: NULL if size = 0
 * return  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
