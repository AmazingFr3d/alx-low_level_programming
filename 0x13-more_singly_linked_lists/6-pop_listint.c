#include "lists.h"

/**
 * pop_listint - deletes the head nod of a list_t list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: None.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		x = temp->n;
		*head = (*head)->next;
		free(temp);
		return (x);
	}
}
