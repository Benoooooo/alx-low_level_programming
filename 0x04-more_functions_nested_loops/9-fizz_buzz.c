#include <stdio.h>

/**
 * print_number - function that prints the number from the main code
 * @n: then num
 */

void print_number(int n)
{
	if (n > 99)
	{
		putchar((n / 100) + '0');
		putchar(((n % 10) / 10) + '0');
	}
	else if (n > 9)
	{
		putchar((n / 10) + '0');
	}
	putchar((n % 10) + '0');
}
/**
 * main - function that print from 1 to 100, for the multiples of three
 * print Fizz, for the multiples of five print Buzz, for the multiples of
 * fiftheen print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
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
			print_number(num);
		}
		if (num++ != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
