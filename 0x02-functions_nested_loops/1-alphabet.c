#include "main.h"
/**
 * print_alphabet - prints alphabets from a to z
 *
 * Return: the value the code to main
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
