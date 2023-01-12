#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *@old_size: number min.
 *@new_size: number max.
 *@ptr: pointer.
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ret = ptr;
	unsigned int i;

	if (new_size == 0 && ret != NULL)
	{
		free(ret);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ret);
	}
	if (ret == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	str = malloc(new_size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(str + i) = *(ret + i);
	}
	free(ret);
	return (str);
}
