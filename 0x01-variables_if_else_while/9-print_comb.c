#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possibl combinations for
 * single-digit num
 * num must be separated by , followed by a space, also in asending
 * order, you can only use the putchar function, all your code shou
 * ld be in the main function
 * you can only use putchar four times maximum in your code
 * you are not allowed to use any variable of type char
 *
 * Return: always 0
 */

int main(void)
{
	int num_comb = 0;

	while (num_comb <= 9)
	{
		putchar(48 + num_comb);
		if (num_comb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num_comb++;
	}
	putchar('\n');

	return (0);
}
