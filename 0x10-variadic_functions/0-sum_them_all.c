#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all numbers
 *
 * @n: is the number
 * Return: the sum of all numbers;
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
