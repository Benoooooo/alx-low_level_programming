#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: is the head of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_t;

	while (current != NULL)
	{
		next_t = current->next;
		free(current);
		current = next_t;
	}
}
