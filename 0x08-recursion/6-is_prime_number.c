#include "main.h"

/**
 * find_prime - function that findes the prime number
 */
int find_prime(int n, int find)
{
	if (n % find == 0)
		return (0);
	if (find * find > n)
		return (1);
	return (find_prime(n, find + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * number, otherwise return 0
 * @n: is the input integer
 * Return: 1 if the input int is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
