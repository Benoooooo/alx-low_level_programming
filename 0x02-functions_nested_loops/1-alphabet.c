#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lowercas, followed
 * by a newline
 *
 * @void: returns nothing
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
