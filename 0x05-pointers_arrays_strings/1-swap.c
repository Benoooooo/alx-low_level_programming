#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps the numbers pointers b
 * @b: swaps the total of the parameter
 */
void swap_int(int *a, int *b)
{
	int total;

	total = *a;
	*a = *b;
	*b = total;
}
