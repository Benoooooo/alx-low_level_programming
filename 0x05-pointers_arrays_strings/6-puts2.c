#include "main.h"
/**
 *put2 - prints string
 *str: function parameter
 *Returns: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[1]);
		i++;
	}
	_putchar('\n');
}
