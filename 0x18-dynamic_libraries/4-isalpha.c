#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checkes fot alphabet character
 *
 * @c: parameter to be printed
 * Return: 1 if c is letter, lowercase or uppercase
 * otherwise returns 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)

		return (1);
	else
		return (0);
}
