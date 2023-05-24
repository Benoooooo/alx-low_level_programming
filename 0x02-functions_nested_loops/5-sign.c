#include "main.h"
/**
 * print_sign - checks the sign of  a number to be printed
 *
 * @n: parameter that checks for numbers
 * Return: 1 and prints + if is greater than zero
 * return 0 and print 0 if n is zero
 * otherwise return -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

