#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - the function
 *
 *Return: return 5 if n less than is greater than 5 and
 *0 if is zero also less than 6 not 0 if less 6
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	} else if (digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	return (0);
}
