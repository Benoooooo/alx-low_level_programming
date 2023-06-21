#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - function that initialze a variable my dog
 * @name: is name of the dog
 * @age: is the age of the dog
 * @owner: the owner of the dog
 * @d: the dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
