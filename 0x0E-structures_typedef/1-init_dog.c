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
		d->name = malloc(strlen(name) + 1);
		d->owner = malloc(strlen(owner) + 1);
		if (d->name != NULL && d->owner != NULL)
		{
			strcpy(d->name, name);
			d->age = age;
			strcpy(d->owner, owner);
		}
		else
		{
			free(d->name);
			free(d->owner);
			printf("Memory allocation failed\n");
			exit(EXIT_FAILURE);
		}
	}
}
