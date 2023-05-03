#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the linked list
 * @idx: index where the new node should be added, starting at 0
 * @n: data value for the new node
 * Return: pointer to the new node, or NULL if it failed to add the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new_n, *prev_n, *cur_n;

	if (head == NULL)
	{
		return (NULL);
	}
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	prev_n = NULL;
	cur_n = *head;
	for (c = 0; c < idx && cur_n != NULL; c++)
	{
		prev_n = cur_n;
		cur_n = cur_n->next;
	}
	if (c < idx)
	{
		free(new_n);
		return (NULL);
	}
	prev_n->next = new_n;
	new_n->next = cur_n;
	return (new_n);
}
