#include "main.h"
/**
* print_diagonal - draws the diagonal line on the terminal
* @n: where n is the number of times the character \ should be
* printed
*/
void print_diagonal(int n)
{

if (n <= 0)
{
putchar('\n');
}
else
{
char line = '\\';
int a, b;

for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == a)
{
putchar(line);
}
else if (b < a)
{
putchar(' ');
}

}
putchar('\n');
}
}
}
