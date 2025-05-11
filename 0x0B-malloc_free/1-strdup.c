#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that that duplicate a string and create a new string
 * @str: is the old string to be duplicated
 * Return: the poiner to a nwe string which is a duplicat of the string str
 * Memory for the new string is obtained with malloc. and can be freed with
 * free.
 * returns NULL if str == NULL
 * On success the function returns a pointer to the dupicated string. it
 * returns
 * NULL if insufficient memory was availible.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
