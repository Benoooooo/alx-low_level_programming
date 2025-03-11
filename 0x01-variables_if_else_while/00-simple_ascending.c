#include <stdio.h>

/**
 * main  - Entry point
 *
 * Description: function that prints numbers from ascending 1 to 10
 * each should be in a newline
 *
 * Return: Aways return (0)
 */

int main(void)
{
	int num = 1;

	while (num <= 10)
	{
		if (num == 10)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			break;
		}
		putchar(num + '0');
		putchar('\n');
		num++;
	}
	putchar('\n');
	return (0);
}
