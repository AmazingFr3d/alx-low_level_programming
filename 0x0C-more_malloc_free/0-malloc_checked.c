#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocation of a memory using malloc
 * @b: integer to be allocated
 * Return: 0 Always
 */
void *malloc_checked(unsigned int b)
{
	void *tsr;

	tsr = malloc(b);
	if (tsr == NULL)
	{
		exit(98);
	}
	return (tsr);
}
