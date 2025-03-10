#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all single numbers of base 10 start from 0
 * Return: always (0)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');

	return (0);
}
