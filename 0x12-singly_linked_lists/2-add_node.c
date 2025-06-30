#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning og a list_t list
 * @head: is the pointer to pointer head
 * @str: is the pointer to the string to be printed
 * Return: the address os the new element, OR NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
