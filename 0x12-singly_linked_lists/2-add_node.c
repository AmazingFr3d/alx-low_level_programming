#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->str = strdup(str);
	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->len = strlen(str);
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
