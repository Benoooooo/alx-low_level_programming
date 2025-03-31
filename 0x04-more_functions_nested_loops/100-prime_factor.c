#include <stdio.h>

/**
 * primeFactors - function that print all the prime factores of a given
 * number n
 * @n: is the number to fine
 */
void primeFactors(int n)
{
	int j = 1;

	while (n % 2 == 0)
	{
		if (!j)
			printf(" ");
		printf("%lu" , 2UL);
		n /= 2;
		j = 0;
	}
	unsigned long int i;

	for ( i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			if (!j)
				printf(" ");
			printf("%lu", i);
			n /= i;
			j = 0;
		}
	}

	if (n > 2)
	{
		if (!j)
			printf(" ");
		printf("%u", n);
	}
	printf("\n");
}
/**
 * main - function that checks for finds and prints the largest print factor of
 * the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n = 612852475143;

	primeFactors(n);
	return (0);
}
