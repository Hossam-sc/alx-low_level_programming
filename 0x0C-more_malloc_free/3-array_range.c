#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - function that creates an array of integers
 *@min: the smallest integer
 *@max: the largest integer
 * Return: the array
 */
int *array_range(int min, int max)
{
	unsigned int *str, k;

	if  (min > max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; min <= max; k++, min++)
	{
		*(str + k) = min;
	}
	return (str);
}
