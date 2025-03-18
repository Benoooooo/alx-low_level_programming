#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point
 *
 * Discripton: function that assing a random number to the variable n each time
 * it is executed.
 *
 * Return: (0)
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
