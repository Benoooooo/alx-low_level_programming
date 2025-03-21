#include <stdio.h>

int main(void)
{
	int b = 0;
	while (b <= 9)
	{
		if (b == 2)
			continue;
		putchar(b + '0');
		b++;
	}
	putchar('\n');
}
