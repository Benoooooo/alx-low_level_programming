#include "main.h"
/**
 * print_alphabet_x10 -print alphabet into 10 times
 * a@: prints to the number of time
 * b@: prints the alphabets
 */
void print_alphabet_x10(void)
{
	int a, b;

	a = 1;

	while (a <= 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
