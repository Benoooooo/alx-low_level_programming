#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: the number of  strings passed to the function
 * @...: A variable number of strings to be printed.
 *
 * Description: if separator is NULL, it is not printed.
 * if one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	char *s;

	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	putchar('\n');
	va_end(str);
}