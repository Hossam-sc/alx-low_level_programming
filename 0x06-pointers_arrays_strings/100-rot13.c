#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *@s: the pointer of charcater
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (c1[j] == s[i])
				s[i] = c2[j];
			else
				s[i] = s[i];
		}
	}
	return (s);
}
