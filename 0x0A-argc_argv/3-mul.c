#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers and return result
 * @argc: the the count of the list
 * @argv: is the charaters inputed
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
