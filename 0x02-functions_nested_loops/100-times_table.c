#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table, starting
 * with 0.
 *
 * Descripton: this function is main to print n times table any number that
 * calls n should have a times table. but this is how is goes, if n is
 * greater than 15 or less than 0, the function should not print anything
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int row = 0, num;

	while (row <= n)
	{
		num = 0;
		while (num <= n)
		{
			int ans = row + num;
			_putchar(ans + '0');
			num++;
		}
		_putchar('\n');
		row++;
	}
}
