#include <stdio.h>
/**
 * main - prints the lower case and bese case numbers
 * a@: print the numbers
 * b@: print the alphabet
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
