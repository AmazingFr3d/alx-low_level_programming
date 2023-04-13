#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocation memory for an array
 * @nmemb: an array of element
 * @size: an integer
 * Return: 0 Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, z = 0;
	char *psr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	z = nmemb * size;
	psr = malloc(z);
	if (psr == NULL)
	{
		return (NULL);
	}
	while (z > x)
	{
		psr[x] = 0;
		x++;
	}
	return (psr);
}
