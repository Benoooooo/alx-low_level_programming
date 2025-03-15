#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * followed by a new line, numbers must be separated by a comma, followed
 * a space, numbers should be printed in order, the first printed number
 * should be the number passed to your function, the last printed number
 * should be 98, you are allowed to use the standad library
 *
 * @n: is the beginning of the integer
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				_putchar((-n / 10) + '0');
				_putchar((-n % 10) + '0');
			}
			else if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}

/**
 * print_rem - function that backe up the rem
 * @n: the num
 * Return: nothing
 */

void print_rem(int n)
{
		while (n >= 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
}
