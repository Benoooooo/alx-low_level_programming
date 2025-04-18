#include "main.h"

/**
 * leet - function that ecodes a string intto 1337, letters to be replace
 * letters 'a' and 'A' should be replaced by 4
 * letters 'e' and 'E' should be replaced by 3
 * letters 'o' and 'O' should be replaced by 0
 * letters 't' and 'T' should be replaced by 7
 * letters 'l' and 'L' should be replaced by 1
 * you can only use one if in your code and you cna only use two loops
 * in your code, you not allowed to use switch and you not allowed to use
 * any ternary operation
 *
 * @e: is the string pointer to be replaced
 * Return: the character pointer
 */
char *leet(char *str)
{
	char o[] = "aAeEoOtTlL";
	char l[] = "4433007711";
	int i, j;

	for (i = 0; str[i]; i++)
		for (j = 0; o[j]; j++)
			if (str[i] == o[j])
				str[i] = l[j];
	return (str);
}
