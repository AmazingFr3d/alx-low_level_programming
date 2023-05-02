#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}
