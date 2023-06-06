#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: str the paremeter to be add
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar ('\n');
}
