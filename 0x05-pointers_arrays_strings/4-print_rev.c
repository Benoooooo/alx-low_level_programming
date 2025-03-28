#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse followed by a
 * new line
 *
 * @s: is the pointer to charater
 *
 * Return: the string
 */
void print_rev(char *s)
{
	int len = 0,  i;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = start;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
