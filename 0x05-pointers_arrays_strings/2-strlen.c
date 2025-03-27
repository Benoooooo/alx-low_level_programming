#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: the s is the character pointer
 * Return: the lent of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
