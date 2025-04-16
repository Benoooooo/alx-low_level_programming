#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string, function accepts three parameters
 * (dest, src, n) which copies up to the n charaters from the string pointed
 * to by src to dest. in this case, the length of src is less than that of n,
 * the remainder of dest will be added with null bytes
 * @dest: this the pointer to the destination array where the content is copied
 * @src: is the sting to be copied
 * @n: the number of characters to be copied from source.
 * Return: this function returns the pointer to hte copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
