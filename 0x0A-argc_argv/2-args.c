#include <stdio.h>
/**
 * main - program that print all the argument it receices
 * @argc:  print the number of argment
 * @argv:  the arg to be printed;
 * Return: always 0;
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
