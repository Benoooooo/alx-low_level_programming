#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring, function finds tha first
 * occurance of the substring needle in the string haystack. the terminating
 * null bytes '\0' are not compared
 *
 * @haystack: is a pinter to the string to be searched
 * @needle: is a pointe to the substring to search for
 * Return: the functions return a pointer to the  begining of the located
 * or NULL if the substring is not found. fi the needle is empy string the
 * return value is always hystack itself.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *h;

	if (!*needle)
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		a = needle;
		while (*h && *a && (*h == *a))
		{
			h++;
			a++;
		}
		if (!*a)
			return (haystack);

		haystack++;
	}
	return (NULL);

}
