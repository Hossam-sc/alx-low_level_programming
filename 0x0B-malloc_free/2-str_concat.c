#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - entry point
 *@s1: first string
 *@s2: second string
 * Return: 0 Always
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *A1, *A2;

	A1 = s1;
	if (s1)
		while (*A1++)
			size1++;
	else
		s1 = "";
	A2 = s2;
	if (s2)
		while (*A1++)
			size2++;
	else
		s2 = "";
	A2 = malloc(size1 + size2 + 1);
	if (!A2)
		return (NULL);
	A1 = A2;
	while (*s1)
		*A1++ = *s1++;
	while (*s2)
		*A1++ = *s2++;
	*A1 = 0;
	return (A2);
}
