#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: doggo's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}