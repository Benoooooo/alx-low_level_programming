#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int row = 0, num;

	while (row <= 9)
	{
		num = 0;
		while (num <= 9)
		{
			int ans = row * num;

			if (ans < 10 && num != 0)
			{
				_putchar(' ');
			}

			if (ans >= 10)
			{
				_putchar((ans / 10) + '0');
			}
			_putchar((ans % 10) + '0');

			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num++;
		}
		_putchar('\n');
		row++;
	}
}
