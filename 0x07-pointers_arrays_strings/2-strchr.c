#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates ta character in a string
 * @s: is the pointer to the string address
 * @c: is the character to be find
 * Return: a pointer to the first occurance of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
