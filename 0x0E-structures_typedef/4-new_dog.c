#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - function that to create a new dog and store a copy of name
 * @name: is the pointer to the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner of the dog
 * Return: a pointer to the function new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	while (name && name[name_len])
		name_len++;

	while (owner && owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		name_copy[i] = name[i];
	name_copy[name_len] = '\0';

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		owner_copy[i] = owner[i];
	owner_copy[owner_len] = '\0';

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
