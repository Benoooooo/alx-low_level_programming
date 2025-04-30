#include "main.h"
/**
 * _sqrt_helper - helper function for _sqrt_recrusion
 * @n: number to find square root of
 * @guess: current guess for square root 
 * Return: natrual square root or -1
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	if (guess * guess > n)
		return -1;
	return _sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * if n does not have a natural square root, the function should return -1
 * @n: is the number of the square root to find
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return  (_sqrt_helper(n, 1));
}
