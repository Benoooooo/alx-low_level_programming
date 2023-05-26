#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: print the number and check
 * Return: 1 if c is uppercase
 * otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
