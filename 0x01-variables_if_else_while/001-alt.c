#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that proint right-angled triangle with alternatin
 * Numbers
 *
 * Return: always (0);
 */

int main(void)
{
	int row = 1;

	while (row <= 5)
	{
		int start_with = (row % 2 == 1) ? 1 : 0;

		int num = 1;
		while (num <= row)
		{
			if (start_with == 1)
			{
				putchar('1');
				start_with = 0;
			}
			else
			{
				putchar('0');
				start_with = 1;
			}
			num++;
		}
		putchar('\n');
		row++;
	}
	return (0);
}
