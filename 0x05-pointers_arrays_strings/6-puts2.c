#include "main.h"

/**
 * puts2 - function that prints every other character of
 *  a string, starting with the first character
 *@str: pointer of string
 *Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		if (str[i] == '\0')
			_putchar('\n');
		i++;
	}
}
