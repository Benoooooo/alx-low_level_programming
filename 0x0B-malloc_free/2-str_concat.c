/*
 * file: 2-str_concat.c
 * Auth: kelechi nnadi <alx swe>
 */

#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_cancat - function that concatenate two strings,
 *              if NULL is passed in the string, return empty
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: the pointer that points to a newly allocated space in
 *         memory which has the content of s1 and s2, and null
 *         terminated
 *         the function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *total;
	
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	total = strcat(s1, s2);

	total = malloc(total + 1);
	if (total == NULL)
	{
		return (NULL);
	}
	return (total);
}
