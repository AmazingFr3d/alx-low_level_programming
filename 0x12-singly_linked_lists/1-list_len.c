#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Head pointer of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	do {
		c++;
		h = h->next;
	} while (h != NULL);
	return (c);
}
