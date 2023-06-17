#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that duplicate or copy a string
 * @str: the string to copy and return to the pointer
 * Return: NULL if str is NULL, and return string to duplicat the string
 */
char *_strdup(char *str)
{
	char *s;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);

	s = (char *) malloc((length + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);

	return (s);
}
