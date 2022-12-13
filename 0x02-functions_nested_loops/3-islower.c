#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 *
 * Return: 1 if lowercase ,else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
