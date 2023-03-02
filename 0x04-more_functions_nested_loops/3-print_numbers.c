#include "main.h"
/**
 * print_numbers - function that checks for uppercase character.
 * Return: 0
 */

void print_numbers(void)
{
	char c = '0';

	for (c = 0; c <= 9; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');

}
