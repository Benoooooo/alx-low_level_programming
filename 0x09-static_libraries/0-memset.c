#include "main.h"

/**
 * _memset - function that fills the memory wit a constant byte
 * @s: is the string pointer
 * @n: is the interger or size to be filled with
 * @b: is the constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
