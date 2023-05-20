#include <stdlib.h>
#include <time.h>
/**
* main - function that checks for random number
* n@ is the number that check for conditions
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
    {
       printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else 
    {
       printf("%d is zero\n", n);
    }
	return (0);
}
