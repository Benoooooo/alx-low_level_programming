#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of jeck Bauer
 * starting from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int sec = 00, min;

	while (sec <= 23)
	{
		min = 00;
		while (min <= 59)
		{
			_putchar((sec / 10) + '0');
			_putchar((sec % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}
		sec++;
	}
}
