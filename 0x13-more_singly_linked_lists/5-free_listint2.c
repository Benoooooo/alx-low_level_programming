#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: is the head of the function
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next_t;

	while (current != NULL)
	{
		next_t = current->next;
		free(current);
		current = next_t;
	}
	*head = NULL;

}
