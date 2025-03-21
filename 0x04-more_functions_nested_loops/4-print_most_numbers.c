#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function tath print the numbers form 0 to 9
 * followed by a new line, but do not print 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + '0');
	}
	_putchar('\n');
}
