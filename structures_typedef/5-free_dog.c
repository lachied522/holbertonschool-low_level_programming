#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct
 * @d: pointer to dog struct
 */
void free_dog(struct dog *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
