#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: the first ponter to the node
 * Return: the sum of all the data n of a linstint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int i = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
