#include <stdio.h>
/**
 * main - pointers declaration
 * Return: Always 0.
 */
int main(void)
{
	int num = 10;
	int *ptr = &num;

	printf("%d\n", num);
	printf("%p\n", &num);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	float x = 3.14;
	float *fptr = &x;

	printf("%f\n", *fptr);
	*fptr = 6.28;
	printf("%f\n", *fptr);

	return (0);
}
