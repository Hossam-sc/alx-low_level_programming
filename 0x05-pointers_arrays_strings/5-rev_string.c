#include "main.h"

/**
 * rev_string - this characters in reverse.
 *@s: this is a parameter to change.
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j] != 0)
	{
		j++;
	}
	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
