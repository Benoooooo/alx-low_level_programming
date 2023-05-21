#include <stdio.h>
/**
 * main - print the lowercase in reversal
 * a@: print the number in reversal
 * Return: always 0;
 */
int  main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
