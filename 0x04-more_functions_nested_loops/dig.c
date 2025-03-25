#include <stdio.h>

/**
 * print_square - function that prints square
 * @size: prints the square of the #
 */
void print_square(int size)
{
	int row, col, r;
	if (size <= 0)
	{
		putchar('\n');
	}

	for (row = 0; row < size; row++)
	{
		for(col = 0; col < row; col++)
		{
			putchar(' ');
		}
		for(r = 0; r < row + 1; r++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}

/**
 * main - this is the main function
 *
 * Return: 0
 */
int main(void)
{
	print_square(5);
	return (0);
}
