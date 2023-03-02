#include "main.h"
/**
 *print_most_numbers - function that print form 0 to 9
 *Return: 0
 */

void print_most_numbers(void)
{
	char c = '0';

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
