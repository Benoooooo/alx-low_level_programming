#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars and initialzes it with a char.
 * @size: it the size of the character
 * @c: is the character to and arr
 * Return: NULL if size = 0, return NUll if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = (char *) malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
