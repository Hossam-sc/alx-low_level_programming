#include "main.h"

/**
 * *cap_string - function that capitalizes all words of string
 *@c: pointer of characters
 * Return: c
 */
char *cap_string(char *c)
{
	int i, j;
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	for (j = 0; j < 14; j++)
	{
		if (c[i] >= 'a' && c[i] <= 'z' && c[i - 1] == symb[j])
			c[i] = c[i] - 32;
	}
	return (c);
}
