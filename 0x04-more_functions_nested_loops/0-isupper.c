#include "main.h"
#include <ctype.h>

/**
 * Main - function that checks for uppercase character
 * @c: the character for testing
 * Return: 1 if c is uppercase, else 0
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
