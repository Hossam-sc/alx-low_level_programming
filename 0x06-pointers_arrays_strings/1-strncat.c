#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *@n: number of bytes
 *@dest: the first pointer
 *@src: the second pointer
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
