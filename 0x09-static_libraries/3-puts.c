#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string, followed by a new line
 *@str: the string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
