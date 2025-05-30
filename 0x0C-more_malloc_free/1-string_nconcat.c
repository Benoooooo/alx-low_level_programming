#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings, if NULL
 * is passed, treat it as an empty string, if n is greater or equal
 * to the length of s2 then use the entire string s2
 * @s1: is the first string
 * @s2: is the second string
 * @n: is the number or size of the allocation
 * Return: the returned pointer should point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2, and null
 * terminated. fi the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
