#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line.
 * @n: is the number of elements of the array to
 * printed Numbers must be separated by comma, followed by a space. The
 * should be displayed in the same order as they are stored in the array
 * you are allowed to use printf
 * @a: is the pointer to the numbers;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
