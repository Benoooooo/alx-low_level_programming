#include <stdio.h>

/**
 *main - function prints the number base from 0 to base 10
 *
 *Return: always 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)

		putchar((numb % 10) + '0');

	putchar('\n');

	return (0);
}
