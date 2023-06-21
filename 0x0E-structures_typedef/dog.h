#ifndef DOG_H
#define DOG_H
/**
* struct dog -  sturct dog
* @name: stores the name of the dog
* @age:  stores the age to the dog
* @owner: stores the owner information with pointer
*
* Description: the header that stores the dogs information
* adding dog name, age of the dog, the owner name
*/
struct dog
{
	char *name;
	float  age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
