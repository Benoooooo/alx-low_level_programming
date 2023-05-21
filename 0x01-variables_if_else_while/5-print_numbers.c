#include <stdio.h>
/**
 * main - prints the single digit
 * a@: output the  single digit
 * Return: always 0;
 */
int main(void)
{
	int a;

	for (a = 0; a < 10;  a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
