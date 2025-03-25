#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * you can only use _putchar function to print, where n is the number of
 * times the character \ should be printed, the diagonal should end with a
 * \n if n is 0 or less, the function should only print a \n
 *
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int num, col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			for (col = 0; col < num; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
