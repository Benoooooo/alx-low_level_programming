#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 * a@: print lowercase alphabat
 * b@: print uppercase alphabet
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 'a'; a <= 'z';)
	{
		putchar(a);
		a++;
	}
	for (b = 'A'; b <= 'Z';)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
