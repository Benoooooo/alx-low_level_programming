#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenate all the arguments of your program
 * each argument should be followed by a \n in the new string
 * @ac: is the argument count
 * @av: pointer to argumet vector
 * Return: NULL if ac, av and pointer fails
 */
char *argstostr(int ac, char **av)
{
	int i, total_length = 0, position = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			total_length += strlen(av[i]) + 1;
			
	}
	ptr = malloc(sizeof(char) * (total_length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(ptr + position, av[i]);
			position += strlen(av[i]);
			ptr[position++] = '\n';
		}
	}
	ptr[position] = '\0';
	return (ptr);
}
