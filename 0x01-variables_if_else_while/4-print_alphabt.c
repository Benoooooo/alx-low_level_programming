#include <stdio.h>

/**
 * main - entry point
 *
 * Description - program that prints lower alphabet except q and e
 * Return: always return (0)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
