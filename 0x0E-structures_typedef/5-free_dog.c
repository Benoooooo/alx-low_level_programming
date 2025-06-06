#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - function that frees dog
 * @d: is the pointer to the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
