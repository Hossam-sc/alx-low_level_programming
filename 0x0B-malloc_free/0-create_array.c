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

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
