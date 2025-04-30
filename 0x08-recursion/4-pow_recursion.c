#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power
 * of y. if y i lowe than 0, the function shoud return -1
 * @x: is the main integer
 * @y: is the power or number to be raised
 * Return: the value of x reaised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
