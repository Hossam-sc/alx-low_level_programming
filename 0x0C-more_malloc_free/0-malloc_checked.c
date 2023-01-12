#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - Entry point
 *@b: size
 * Return: 0 Always
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
