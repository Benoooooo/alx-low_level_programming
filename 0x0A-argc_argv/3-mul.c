#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers and return result
 * @argc: the the count of the list
 * @argv: is the charaters inputed
 * Return: 0;
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int sum, num1, num2;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum  = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
