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
	int *str, i, len;

	if (min > max)
	{
		return (NULL);
	}
	for (len = 0; len < (max - min); len++)
		;

	str = malloc(sizeof(int) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		str[i] = min++;
	}
	return (str);
}
