#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that free the doggos
 * @d: doggos
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
