#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list
 * @head: the head pointer
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_t;

	while (current != NULL)
	{
		next_t = current->next;
		free(current->str);
		free(current);
		current = next_t;
	}
}
