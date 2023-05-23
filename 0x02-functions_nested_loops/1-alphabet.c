#include "main.h"
/**
 * main - prints alphabets from a to z
 * Return: the value
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

	return;
}
