#include <stdio.h>
void function(void);
/**
 * main - check the code
 * 
 * Return: alway 0
 */
int main(void)
{
	function();
	
	return (0);
}
/**
 * function - function the program that add two number
 */
void function(void)
{
	int a = 5, b = 7, sum;

	sum = a + b;

	printf("the add of a and b = %d\n", sum);
}
