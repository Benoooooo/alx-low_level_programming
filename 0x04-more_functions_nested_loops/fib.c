#include <stdio.h>

/**
 * main - write a program that prints the number from 1 to 50, but for
 * multipules of 3, print Fizz instead of the number, for the multipules
 * of 5, print Buzz instead of the number, for the multipules of the both
 * 3 and 5, print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 1;

	while (num <= 50)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (num % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (num % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (num > 9)
			{
				putchar((num / 10) + '0');
			}
			putchar((num % 10) + '0');
		}
		if (num != 50)
		{
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
}
