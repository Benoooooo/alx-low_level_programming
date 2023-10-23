/*
 * file: 0-create_array.c
 * Auth: kelechi nnaid <alx swe>
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creacts an array of chars and init it with a char
 * @size: is the size of the character or number of chars
 * @c: the charater pointer to the array
 * Return:  a pointer to the array or Null if it falls
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
