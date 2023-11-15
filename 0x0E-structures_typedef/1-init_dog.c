#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize var type struct dog
 * @d: struct dog pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description - struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
