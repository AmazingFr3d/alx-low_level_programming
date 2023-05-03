#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node to be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *prev_n, *cur_n;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		cur_n = *head;
		*head = (*head)->next;
		free(cur_n);
		return (1);
	}
	prev_n = NULL;
	cur_n = *head;
	for (c = 0; c < index && cur_n != NULL; c++)
	{
		prev_n = cur_n;
		cur_n = cur_n->next;
	}
	if (cur_n == NULL)
	{
		return (-1);
	}
	prev_n->next = cur_n->next;
	free(cur_n);
	return (1);
}
