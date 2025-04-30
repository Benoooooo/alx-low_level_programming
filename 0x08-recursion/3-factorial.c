#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * if n is lower than 0, the function should return -1 to indicate an error
 * factorial of 0 is 1
 * @n: is the number of the factor
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
