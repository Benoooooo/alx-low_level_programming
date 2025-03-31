#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: is the string pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	if (s == NULL)
		return;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
