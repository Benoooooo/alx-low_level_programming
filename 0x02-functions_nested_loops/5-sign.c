#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: is the data type character
 *
 * Return: 1 and print + if n is greater than zero
 * return 0 and print 0 if n is zero
 * return -1 and prints - if n is less then zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
