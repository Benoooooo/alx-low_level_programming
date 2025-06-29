#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 * list
 * @h: is the head of the linked list
 * Return: the number of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
