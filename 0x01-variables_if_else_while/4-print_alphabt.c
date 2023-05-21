#include <stdio.h>
/**
 * main - print the alphabet that except q and e
 * a@: print the number from a to z
 * Return: always 0 at the end of the function
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
