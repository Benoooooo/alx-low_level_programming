#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - functon that prints numbers followed by a new line
 * if separator is NULL dont print it (separator) and print an new line at
 * the end of the you functon
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		printf("%s, %d\n", va_arg(args, int));
	}
	va_end (args);
}
