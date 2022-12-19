#include "main.h"

/**
 * puts_half -  function that prints half of a string,
 *  followed by a new line
 *@str: is the pointerof the string
 * Return: void
 */
void puts_half(char *str)
{
	int n, m, len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if ((len % 2) == 0)
			m = len / 2;
		else
			m = (len + 1) / 2;
	}
	for (n = m; n < len; n++)
	{
		_putchar(str[len]);
	}
	_putchar('\0');
}
