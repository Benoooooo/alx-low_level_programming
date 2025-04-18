#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an interger, you can only use _putchar
 * to print the function
 * @n: is the number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar((n / 10 % 10) + '0');

	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');

}
