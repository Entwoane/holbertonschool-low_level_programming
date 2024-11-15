#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 * Return NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *namecpy;
	char *ownercpy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	namecpy = malloc(strlen(name) + 1);
		if (namecpy == NULL)
		{
			free(d);
			return (NULL);
		}
	strcpy(namecpy, name);

	ownercpy = malloc(strlen(owner) + 1);
		if (ownercpy == NULL)
		{
			free(namecpy);
			free(d);
			return (NULL);
		}
	strcpy(ownercpy, owner);

	d->name = namecpy;
	d->age = age;
	d->owner = ownercpy;

	return (d);
}
