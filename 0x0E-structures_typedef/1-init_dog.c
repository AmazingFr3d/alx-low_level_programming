#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct pointer
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
	if(d != NULL)
	{
		strncpy(d->name, name, sizeof(d->name) - 1);
		d->name[sizeof(d->name) - 1] = '\0';
		d->age = age;
		strncpy(d->owner, owner, sizeof(d->owner) - 1);
		d->owner[sizeof(d->owner) - 1] = '\0';
	}
	else
	{
		return;
	}
}
