#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @n: Interger for the new node
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
