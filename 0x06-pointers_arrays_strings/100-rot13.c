#include "main.h"

/**
 * rot13 - function that encodes a string using rot13, you can only use if
 * statement once in your code, you can only use two loops in your code
 * you are not allowed to use switch, you are not alowed to user any ternary
 * operation
 * @str: is the pointer string
 * Return: return the pointer to the
 */
char *rot13(char *str)
{
	char rot_13a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_13b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; rot_13a[j]; j++)
		{
			if (str[i] == rot_13a[j])
			{
				str[i] = rot_13b[j];
				break;
			}
		}
	}

	return (str);
}
