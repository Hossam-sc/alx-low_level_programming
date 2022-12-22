#include "main.h"

/**
 * *cap_string - function that capitalizes all words of string
 *@c: pointer of characters
 * Return: c
 */
char *cap_string(char *c)
{
	int i, j, cap = 32;
	int symb[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - cap;
		}
		cap = 0;
		for (j = 0; j <= 13; j++)
		{
			if (c[i] == symb[j])
			{
				j = 13;
				cap = 32;
			}
		}
	}
	return (c);
}
