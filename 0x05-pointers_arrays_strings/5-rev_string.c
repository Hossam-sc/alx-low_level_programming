#include "main.h"

/**
 * rev_string - this characters in reverse.
 *@s: this is a parameter to change.
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
