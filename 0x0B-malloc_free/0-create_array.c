#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - point entry
 *@size: size input
 *@c: charachters
 * Return: 0 Always
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL || size == 0)
	{
		return (Null);
	}
	for (i = 0; i < size; i++)
	{
		array[0] = c;
	}
	return (array);
}
