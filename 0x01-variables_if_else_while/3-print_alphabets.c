#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - program that prints the alphabet in lowercase, and in
 * uppercase followed by a new line
 *
 * Return: aways (0)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
