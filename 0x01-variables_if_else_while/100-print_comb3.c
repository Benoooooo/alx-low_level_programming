#include <stdio.h>
/**
 * main - print the double digit of base zero
 * a@: print the first single digit of base  zero
 * b@: print the second single digit of base one
 * Return: 0 at the end of the function
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
