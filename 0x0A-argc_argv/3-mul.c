#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints multiple numbers
* @argc: the number to ber counted in the line
* @argv: the arguments to be returned
* Return: always 0;
*/

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
	}
	return (0);
}
