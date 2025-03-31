#include <stdio.h>
/**
 * increment - function that increment a valueo of num
 * @num: is the value to be incremented
 */
void increment(int *num)
{
	(*num)++;
}
/**
 * main - main function leads all the other function
 * Return: 0
 */
int main(void)
{
	int x = 7;

	printf("Before increment: x=%d\n", x);
	increment(&x);
	printf("After increment: x=%d\n", x);

	return (0);
}
