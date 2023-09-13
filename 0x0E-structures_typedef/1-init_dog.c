#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type dog
 * @d: pointer.
 * @age: age.
 * @name: name.
 * @owner: owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
