#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: String to be printed
 * @f: Pointer to a function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
