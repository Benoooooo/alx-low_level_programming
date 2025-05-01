#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function that checke for lowercase character
 *
 * @c: is the character to be checked
 *
 * Return: 1 if c is lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
