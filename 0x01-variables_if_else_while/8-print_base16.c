#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that print all the number of base 16 in lowercase
 * Return: always (0)
 */

int main(void)
{
	char num = 48, alph = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alph <= 102)
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
