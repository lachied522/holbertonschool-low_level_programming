#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of type dog
 * @d: pointer to dog struct
 * @name: name string
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
