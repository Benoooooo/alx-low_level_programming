#ifndef DOG_H
#define DOG_H
/**
 * struct dog  - define a new types with elements
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - function that defines a new name for dog
 * @name: is the name pointer to the name of the dog
 * @age: is the age of the dog in float
 * @owner: is the name of the dog owner as pointer
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
/*void free_dog(dog_t *d);*/
#endif
