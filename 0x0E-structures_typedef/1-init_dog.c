#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner's name
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
