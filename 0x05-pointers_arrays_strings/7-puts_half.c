#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints the half of a string, followed by a
 * new line
 * @str: is the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		str++;
	}
	_putchar('\n');
}
