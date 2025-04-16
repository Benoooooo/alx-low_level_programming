#include "main.h"

/**
 * _strcmp - function that compares two strings s1 and s2. The comparison is
 * done using unsingned characters.
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: 0, if the s1 and s2 are equal;
 * '-' if s1 is less than s2;
 * number if s1 is greater than s2;
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
