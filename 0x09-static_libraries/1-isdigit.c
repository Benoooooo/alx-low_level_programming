#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that chacks for digit through for a number
 * @c: is the integer character to scarn through
 * Return: 1 if c is digit else 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
