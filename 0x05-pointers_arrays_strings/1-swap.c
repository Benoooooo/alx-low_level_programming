#include "main.h"

/**
 * swap_int - functio that swaps the values of two integers
 * @a: is the first value to be swaped
 * @b: is the second value to be swaped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
