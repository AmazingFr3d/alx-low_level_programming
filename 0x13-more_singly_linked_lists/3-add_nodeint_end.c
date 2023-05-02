#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @n: Int to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
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
