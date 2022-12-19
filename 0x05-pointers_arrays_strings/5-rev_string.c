#include "main.h"

/**
 * rev_string - this characters in reverse.
 *@s: this is a parameter to change.
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j, m;
	char *str, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	str = s;

	for (j = 0; j < (i - 1); i++)
	{
		for (m = j + 1; m > 0; m--)
		{
			temp = *(str + 1);
			*(str + 1) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
