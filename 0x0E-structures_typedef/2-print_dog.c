#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 * @d: struct dog input
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nill";
}
