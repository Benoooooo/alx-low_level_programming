#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to  the name of the perseon
 * @f: is the function of that pointe the to the char
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
