#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head of a listint_t linkedlist, and
 * returns the head node's data (n)
 * @head: is the pointer pointer as the head node
 * Return: the head node's data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
