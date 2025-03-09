#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by newline
 *
 * Return (0)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
