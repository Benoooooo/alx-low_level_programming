#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: always (0)
 */

int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');

	return (0);
}

