#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - create arrarys of characters
* @size: is the size of the charater
* @c: is the character to be printed
* Return: NULL if size is 0 and ctr if NULL
* else return crt;
*/
char *create_array(unsigned int size, char c)
{
char *crt;
unsigned int lent;
if (size == 0)
{
return (NULL);
}

crt = (char *)malloc(size * sizeof(char));

if (crt == NULL)
{
return (NULL);
}
lent = 0;
while (lent < size)
{

crt[lent] = c;

lent++;

}

return (crt);
}
