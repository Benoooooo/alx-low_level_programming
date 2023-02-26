#include <stdio.h>
/**
 *main - print all different combination of two digit 01, 02, ...
 *
 *Return: always 0 at the end of the code
 */

int main(void)
{
	int num, num1;

	for (num = 0; num <= 10; num++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			putchar((num % 10) + '0');
			putchar((num1 % 10) + '0');

			if (num == 9 && num1 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
