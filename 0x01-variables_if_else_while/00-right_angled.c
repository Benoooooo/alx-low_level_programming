#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this task print the right-angled triangle of numbers
 * the height of the tringale should be 5 row
 *
 * Return: aways 0
 */

int main(void)
{
	int col = 1;

	while (col <= 5)
	{
		int num = 1;
		while (num <= col)
		{
			putchar(col + '0');
			num++;
		}
		putchar('\n');
		col++;
	}
	return (0);
}
