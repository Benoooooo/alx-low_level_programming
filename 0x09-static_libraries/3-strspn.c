#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: is the string to be scanned
 * @accept: is the string containing the set of allowed characters.
 * Return: the number of characters at the start of str that are found in
 * accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}
		num++;
		s++;
	}
	return (num);
}
