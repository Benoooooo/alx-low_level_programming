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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);

	if (n > 5)
	{
		printf("Last digit of" n "and is greater than 5\n");
	} else if (n < 6)
	{
		printf("Last digit of" n "6 and is less than 6 and not 0\n");
	} else
	{
		printf("Last digit of" n "and is 0\n");
	}
	return (0);
}
