#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array: array to work on
 * @size: size of the array
 * @cmp: Pointer to the action function
 * Return: iint index and -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]) != 0)
			{
				return (c);
			}

		}
	}
	return (-1);
}
