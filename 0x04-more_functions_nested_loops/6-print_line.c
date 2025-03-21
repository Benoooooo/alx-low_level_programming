#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * you can only use _putchar function to print, where n is the numver of
 * times the character _ should be printed, the line should end with a \n
 * if  n is 0 or less, the function should only print \n
 *
 * @n: is the number of times to display the charecter
 * Return: nothing
 */
void print_line(int n)
{
	int row = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < n)
		{
			_putchar('_');
			row++;
		}
		_putchar('\n');
	}

}
