#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 time the alphabet in
 * lowercase followed by a new line
 *
 * @void: return nothing to the main function
 */
void print_alphabet_x10(void)
{
	int row = 0;
	char alpha = 'a';

	while (row < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
		row++;
	}
}
