#include <stdio.h>
/**
 *main - function that print lowcase alphabet in reverse
 *
 *Return: always 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
