#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: struct dog being freed
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
