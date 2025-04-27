#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: is the pointer to pointer
 * @to: pointer to the main string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
