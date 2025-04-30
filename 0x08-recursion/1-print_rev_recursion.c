#include "main.h"

/**
 * _print_rev_recursion  - function that prints a string in reverse
 * @s: is the pointer to the string
 */
void _print_rev_recursion(char *s)
{
	char *a;

	if (*s != '\0')
	{
		a = s - 1;
		_putchar(*a);
		_print_rev_recursion(s - 1);
	}
	else
	{
		return;
	}
}
