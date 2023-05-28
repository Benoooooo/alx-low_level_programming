#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: where n is the numbers of times the character _ should print
 */
void print_line(int n)
{
	int i;
	char line = '_';

	for (i = 0; i < n; i++)
	{
		_putchar(line);
	}
	_putchar('\n');
}
