#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: the is the parameter to return
 * Return: the result
 */
int _strlen(char *s)
{
	int res = 0;

	while (*s != '\0')
	{
		res++;
		s++;
	}
	return (res);
}
