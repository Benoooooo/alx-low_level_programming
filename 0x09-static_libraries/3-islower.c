#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character and return the value
 *
 * @c: parameter to be printed
 * Return: 1 if there is lowercase
 * otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
