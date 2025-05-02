#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that accept two parameter and prints the number of
 * arguments passed int it
 * @argc: is the count of the program or number
 * @argv: is the array of numbers inputed
 * Return: 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	exit (0);
}
