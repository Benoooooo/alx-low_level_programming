#include "main.h"
/**
 *_pow_recursion - return the value of x raise to the power of y
 *@x: value to returned
 *@y: raised to the power of y
 *Return: if  y is lower than 0,
 *         return 1
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
