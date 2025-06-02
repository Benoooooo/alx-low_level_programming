#include "dog.h"
/**
 * init_dog - function that initialixe a variable of type sturct dog
 * @d: is the pointer to the dog stuct in the main.h
 * @name: is the pointer to the name of the dog (main.h)
 * @age: is the pointer to age of the dog
 * @owner: is the pointer to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
