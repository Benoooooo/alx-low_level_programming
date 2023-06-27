#include "function_pointers.h"
/**
 * array_iterator - function that executes a function parameter
 * @size: the size of the array
 * @action: the pointer to the function you need to use
 * @array: the array that holds the name iterator
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
