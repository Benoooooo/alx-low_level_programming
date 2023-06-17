#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string to concatenate
 * Return: space if paremeters are NULL and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int lent1, lent2;
	char *concat;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
       
	lent1 = strlen(s1);
       	lent2 = strlen(s2);

	concat = (char *) malloc((lent1 + lent2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);

	strcat(concat, s2);

	return (concat);
}
