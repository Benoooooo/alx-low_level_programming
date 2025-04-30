#include "main.h"

/**
 * _puts_recursion - function that prints ta string, folowed by a new line
 * @s: is the string pointer to the charater to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
