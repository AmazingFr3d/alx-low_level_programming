#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *tmp;

	new_n = malloc(sizeof(list_t));
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
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_n;
	}
	return (new_n);
}
