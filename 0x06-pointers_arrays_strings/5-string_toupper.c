#include "main.h"

/**
 * *string_toupper - function that change all lowercase
 *  letters of string to uppercase
 *@c: number of letters
 * Return: void
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (0);
}
