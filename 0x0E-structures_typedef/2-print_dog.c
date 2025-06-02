#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - function that prints a struct dog, fi an element of d is NULL
 * print (nil) insted of this element.(if name is NULL, print name: (nil)
 * if d is NULL print nothing
 *
 * @d: is the pointer to dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
