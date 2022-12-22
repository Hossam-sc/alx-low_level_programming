#include "main.h"

/**
 * *leet - function that encodes a string
 *@s: numbesr of leeters
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c1[j] == s[i])
				s[i] = c2[j];
		}
	}
	return (s);
}
