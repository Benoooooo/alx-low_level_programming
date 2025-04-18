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
	char *ptr = str;
	char leet_map[256] = {0};
	
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	while (*ptr)
	{
		if (leet_map[(unsigned char)*ptr])
		{
			*ptr = leet_map[(unsigned char)*ptr];
		}
		ptr++;
	}
	return str;
}
