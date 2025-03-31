#include <stdio.h>

/**
 * swap - function that swaps two numbers
 * @a: the first number
 * @b: the second number
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * main - check the code
 * Return: the 0 after execution
 */
int main(void)
{
	int a = 5;
	int b = 10;

	printf("Before swap: a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("After swap: a=%d, b=%d\n", a, b);

	return (0);
}
