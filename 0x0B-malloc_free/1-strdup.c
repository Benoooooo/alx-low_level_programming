/*
 * file: 1-strdup.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *           in the memorty, which contains a copy of the string given in
 *           a parameter.
 * @str: is the pointer to a string
 * Return: on success, it returns a pointer to the duplicated string
 *         on errno return NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
