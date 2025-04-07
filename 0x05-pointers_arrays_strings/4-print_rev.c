#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse, followed by a
 * new line.
 * @s: this is the string pointer
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\n')
	{
		len++;
		s++;
	}

	for (i = 0; i <	len; i++)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
