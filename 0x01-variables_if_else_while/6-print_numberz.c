#include <stdio.h>
/**
 * main - print numbers of of base 10 starting from 0
 * a@: print the number the numbers
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
