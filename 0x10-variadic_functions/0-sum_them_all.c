#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function them sums all the numbers of the given arg
 * @n: is the the const and numbers that are inputed to the function
 * Return: this function returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
