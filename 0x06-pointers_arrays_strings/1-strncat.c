#include "main.h"

/**
 * _strncat - function that concatenatest two strings
 * @dest: is the destination for the src words
 * @src: is the source string to append
 * @n: is the six of bytes (numbers) to ammend
 * Return: the pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (ptr);
}
