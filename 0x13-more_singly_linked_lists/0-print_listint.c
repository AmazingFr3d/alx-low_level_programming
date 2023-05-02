#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: Head pointer of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
