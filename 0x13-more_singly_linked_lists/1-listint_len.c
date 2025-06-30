#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list
 * @h: is the head pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
