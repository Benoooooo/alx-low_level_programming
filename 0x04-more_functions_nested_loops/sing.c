#include <stdio.h>

/**
 * print_star - function that prints star in nasted loop
 * @n: is the number of star to print
 */
void print_star(void)
{
	int col; /*num;*/

	for (int row = 5; row >= 1; row--)
	{
		for (col = 5; col > row; col--)
		{
			putchar(' ');
		}
		for (num = 5; num >= row; num--)
		{
			putchar(num + '0');
		}
		putchar('\n');
	}
}
/**
 * main - function main
 *
 * Return: 0
 */
int main(void)
{
	print_star();
	return (0);
}
