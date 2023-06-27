#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: the name to print
 * @f: function pointer to char
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
