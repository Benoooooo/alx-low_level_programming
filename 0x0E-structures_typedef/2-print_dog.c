#include "dog.h"
/**
 * print_dog -function that prints struct dog
 * @d: is the pointer to the to be allocated
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	if (d ->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
		printf("name: %s\n", d->name);

	if (d -> age < 0)
	{
		printf("name: (nil)\n");
	}
	else
		printf("name: %f\n", d->age);
	if (d-> owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
		printf("owner: %s\n", d->owner);
}
