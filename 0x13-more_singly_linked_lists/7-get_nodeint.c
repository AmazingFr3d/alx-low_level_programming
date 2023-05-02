#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;
	listint_t *temp = head;

	for (c = 0; index > c && temp != NULL; c++)
	{
		temp = temp->next;
	}
	return (temp);
}
