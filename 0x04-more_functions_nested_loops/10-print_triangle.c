#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * you can only use _putchar function to print
 * where size it the size of the triangle, if size is 0 or less, the
 * function should print only a new line use the character # to print the
 * triangle
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int row, col, num;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (col = size; col > row; col--)
		{
			_putchar(' ');
		}
		for (num = 0; num < row; num++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
