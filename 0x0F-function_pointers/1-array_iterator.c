#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * @array: array to work on
 * @size: size of the array
 * @action: Pointer to the action function
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (arry != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		return;
	}
}
