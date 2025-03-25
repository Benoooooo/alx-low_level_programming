#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * you can only use _putchar function to print where size is the size of
 * the square, if the size is 0 aor less, the function should print only a
 * new line, use the # character to print
 *
 * @size: is the size of the square
 */
void print_square(int size)
{
	int row = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			int num = 0;
			while (num < size)
			{
				_putchar('#');
				num++;
			}
			_putchar('\n');
			row++;
		}
	}
}
