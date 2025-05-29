#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memeory using malloc
 * if malloc fails, the function shoulde cause normal process termination
 * with a status value of 98
 * @b: is the integer size
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
