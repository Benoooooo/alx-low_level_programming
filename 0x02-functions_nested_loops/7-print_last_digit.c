#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function that print the last digit of a number
 *
 * @n: the charater to be returned back
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar ('0' + last);

	return (last);
}
