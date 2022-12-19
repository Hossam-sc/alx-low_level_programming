#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *  followed by a new line
 *@s: the pointer of string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = s[i] - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
