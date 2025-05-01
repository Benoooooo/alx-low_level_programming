#include "main.h"

/**
 * _memcpy - function tat copies memory area
 * @dest: is the pointr to the destination
 * @src: is the pointer to the source
 * @n: the bytes of copys
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
