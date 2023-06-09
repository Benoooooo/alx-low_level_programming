#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: is the numbers to be used
 * Return: if n is lower than 0, return -1, and 0 is 1
 */
int factorial(int n)
{
	int a = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	a *= factorial(n - 1);

	return (a);
}
