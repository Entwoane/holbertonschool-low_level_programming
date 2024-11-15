
#include "dog.h"
#include <stdio.h>
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

	dog_t *new_dog;
	int namecpy = 0;
	int ownercpy = 0;
	int i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[namecpy] != '\0')
		namecpy++;
	while (owner[ownercpy] != '\0')
		ownercpy++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (namecpy + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (ownercpy + 1));
		if (!new_dog->owner)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
	for (i = 0; i <= namecpy; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= ownercpy; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;
	return (new_dog);
}
