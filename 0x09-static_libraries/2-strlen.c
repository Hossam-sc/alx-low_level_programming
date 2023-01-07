#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 *@s: the integer
 * Return: len of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
