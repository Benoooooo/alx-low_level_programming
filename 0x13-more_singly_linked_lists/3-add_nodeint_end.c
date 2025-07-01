#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new nod at the end of a listint_t
 * list
 * @head: is pointer pointer to the head
 * @n: is the value to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
