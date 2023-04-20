#include <stdio.h>
#include "function_pointers.h"
/**
 * new_dog - initialize a variable of type struct dog
 * @d: dog struct pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner's name
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
		retun;
	}
}
