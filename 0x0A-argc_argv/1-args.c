#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that accept two parameter and prints the number of
 * arguments passed int it
 * @argc: is the count of the program or number
 * @argv: is the array of numbers inputed
 * Return: 0.
 */
int main(int argc, char  __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
