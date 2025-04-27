#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that locates the first occourrence in the string s
 * of any of the bytes in the string accept
 * @s: it the string to be searched true
 * @accept: is the character to be scanned
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	if (!s || !accept)
		return (NULL);

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}

			a++;
		}
		s++;
	}
	return (NULL);
}
