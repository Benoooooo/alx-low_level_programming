#include "main.h"
/**
 * _pow_recursion - function that return the value of x reised to power of y
 * @x: is the value to be returned
 * @y: is the power
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);

	return (result);
}
