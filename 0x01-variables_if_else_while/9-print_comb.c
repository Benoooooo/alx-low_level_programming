#include <stdio.h>
/**
 * main - prints the base 16 lowercase numbers
 * a@: print the numbers using ascii
 * putchar@: used three times in the code
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
