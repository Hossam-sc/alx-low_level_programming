#include "main.h"

/**
 * puts_half -  function that prints half of a string,
 *  followed by a new line
 *@str: is the pointerof the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[len] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
