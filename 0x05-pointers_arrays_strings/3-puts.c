#include "main.h"
/**
 * _puts - the function that print the string
 * @str: the string
 */
void _puts(char *str)
{
	int s = 0;
	while (*str != '\0')
	{
		_putchar(*str++);
		s++;
	}
	_putchar('\n');
}
