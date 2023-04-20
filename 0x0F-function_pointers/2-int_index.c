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

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 1)
			{
				return (i);
			}

		}
	}
	else
	{
		return (-1);
	}
}
