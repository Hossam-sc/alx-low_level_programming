#include "main.h"
#include <string.h>

/**
 * _srtlen - function that returns the length of a string
 *@s: the integer
 * Return: void
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s += 1;
	}
	return (len);
}
