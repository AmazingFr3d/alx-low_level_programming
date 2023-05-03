#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_n = NULL;
	listint_t *next_n;

	while (*head != NULL)
	{
		next_n = (*head)->next;
		(*head)->next = prev_n;
		prev_n = *head;
		*head = next_n;
	}
	*head = prev_n;
	return (prev_n);
}
