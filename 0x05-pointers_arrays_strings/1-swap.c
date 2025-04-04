#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: is the first integer
 * @b: is the second pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
