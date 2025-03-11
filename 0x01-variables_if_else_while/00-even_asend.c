#include <stdio.h>

/**
 * main  - where the function begins
 *
 * Description: the program print even numbers from 1 to 20 in a ascending
 * order using putchar only and each in a newline
 *
 * Return: Aways 0
 */

int main(void)
{
	int even = 1;

	while (even <= 20)
	{
		if (even % 2 == 0)
		{
			if (even < 10)
			{
				putchar(even + '0');
			}
			else
			{
				putchar((even / 10) + '0');
				putchar((even % 10) + '0');
			}
		}
		putchar('\n');
		even++;
	}
	return (0);
}

