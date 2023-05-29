#include "main.h"
/**
 * print_square - print a square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int line = '#';
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b + size)
				{
					_putchar(line);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
