#include <stdio.h>

/**
 * main - always check the code
 * Return: 0
 */
int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr;

	int i = 0;
	while (arr[0] >= i)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
