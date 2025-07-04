#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * list
 * @head: the head pointer
 * @n: is the number or value to insert
 * Return: the address of the element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
