#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creation of an array of inteers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to a newly array
 */
int *array_range(int min, int max)
{
	int *q;
	int l;

	if (max < min)
	{
		return (NULL);
	}
	q = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (q == NULL)
	{
		return (NULL);
	}
	for (l = 0; max >= min; l++)
	{
		q[l] = min++;
	}
	return (q);
}
