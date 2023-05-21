#include <stdio.h>
/**
 * main - print the alphabet in lowercase, folloed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	a = 'a';

	for (; a <= 'z';)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
