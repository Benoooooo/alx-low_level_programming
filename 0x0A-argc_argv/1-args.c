#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints th arguments passed into it
 */

int main(int argc,  char* argv[])
{
	int i;

	for ( i = 0; i < argc; i++)
	{
	 printf("argv[%d] = %s\n", i, arg[0]);
	}
	 
	 return (0);
}
