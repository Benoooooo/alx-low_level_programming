#include "main.h"
/**
 * print_rev - function that print the strin in reverse
 * @s: the string in revers
 */
void print_rev(char *s)
{
	int lent = 0;
	int a;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	s--;
	for (a = lent - 1; a >= 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
