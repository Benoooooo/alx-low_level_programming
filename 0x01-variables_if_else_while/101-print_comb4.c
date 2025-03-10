#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possible different combinations
 * of three digits, Numbers must be separated by , followed by a space
 *
 * Return: Always (0);
 */

int main(void)
{
	int num1 = 0, num2 = 1, num3 = 2;

	while (num1 < 8)
	{
		while (num2 < 9)
		{
			while (num3 < 10)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num2 + 1;
	}
	putchar('\n');

	return (0);
}
