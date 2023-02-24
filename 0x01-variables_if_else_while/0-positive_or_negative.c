#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the mine of the function
 *
 *Return: positive if number is greater than  0,negative if less
 *and 0 if 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf ("int\n, is positive");
	} else if (n < 0)
	{
		printf ("int\n, is negative");
	} else
	{
		printf ("int\n, is 0");
	}

	return (0);
}
