#include <stdio.h>

/**
 * main - checks the code
 * @argc: is the count
 * @argv: is the main one that prints the name add a new line
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
