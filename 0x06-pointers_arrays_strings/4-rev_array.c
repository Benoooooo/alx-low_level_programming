#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * this code should swap to integers from one to the other start to end
 * @a: is the pointer to an array of integer
 * @n: is the number of the elements of the array
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
