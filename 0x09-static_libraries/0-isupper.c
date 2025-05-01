#include <ctype.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: is the integer that is returned
 * Return: 1 if c is uppercase otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
