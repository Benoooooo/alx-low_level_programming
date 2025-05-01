#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: is the character type
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
