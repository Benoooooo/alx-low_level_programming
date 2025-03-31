#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program that  caculat the seum of all even numbers
 * between two giveen integers
 * prompt the user to input two integers (start and end)
 * validate that start is less than or equal to end, if not swap the values
 * calcualte the sum of all even numbers in the range {start, end}
 * print result
 *
 * Return: always 0.
 */
int main(void)
{
	int fir, sec, num, num2, total;
	printf("enter two numbers first: ");
	scanf("%d", &fir);
	printf("enter the the second one: ");
	scanf("%d", &sec);

	if (fir <= sec)
	{
		num = fir % 2 == 0;
		num2 = sec % 2 == 0;
		total = num + num2;
		printf("The sum of even numbers between %d and %d is: %d\n", fir, sec, total);
	}
	else
	{
		int temp = fir;
		fir = sec;
		sec = temp;
	}

	return (0);
}
