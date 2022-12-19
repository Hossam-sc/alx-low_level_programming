#include "main.h"

/**
 * rev_string - this characters in reverse.
 *@s: this is a parameter to change.
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
