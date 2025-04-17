#include "main.h"

/**
 * cap_string - check the function to capitalize all the first words of a
 * string, consider space " ", tabs, "    ", newline, \n, comma, ',', ';'
 * @a: is the string pointer
 * Return: the string pointer
 */
char *cap_string(char *a)
{
	int i = 0;
	int new_word = 1;

	while (a[i] != '\0')
	{
		if (new_word && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}

		new_word = 0;

		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' ||
			a[i] == ',' || a[i] == ';' || a[i] == '.' ||
			a[i] == '!' || a[i] == '?' || a[i] == '"' ||
			a[i] == '(' || a[i] == ')' || a[i] == '{' ||
			a[i] == '}')
		{
			new_word = 1;
		}

		i++;
	}
	return (a);
}
