#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free dogs
 * @d: input parameter
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
