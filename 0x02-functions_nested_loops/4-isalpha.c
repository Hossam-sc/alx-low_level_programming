#include "main.h"

/**
 * _isalpha - Function that checks for lowercase character
 * @c: character to test
 * Return: 1 if alphabet ,else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
