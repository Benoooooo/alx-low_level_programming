#include <stdio.h>
/**
 *main - main function
 *@ch: prints the alphabet
 *Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha ++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
