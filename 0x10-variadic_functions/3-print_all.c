#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: is a list types of arguments passed to the function c: char
 * i:integer f: float s: char *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	int  printed = 0;
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		if (printed && (current == 'c' || current == 'i' || current == 'f' || current == 's'))
			printf(", ");
		if (current == 'c')
		{
			printf("%c", va_arg(args, int));
			printed = 1;
		}
		else if (current == 'i')
		{
			printf("%d", va_arg(args, int));
			printed = 1;
		}
		else if (current == 'f')
		{
			printf("%f", va_arg(args, double));
			printed = 1;
		}
		else if (current == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
			printed = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
