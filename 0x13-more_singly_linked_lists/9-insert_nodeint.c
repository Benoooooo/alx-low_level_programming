#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node at a given
 * position.
 * @head: is the pointer to pointer to the head of the node
 * @idx: is the index of the list where the new node should be added.
 * index starts at 0
 * @n: is the node value to be added
 * Return: return the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
