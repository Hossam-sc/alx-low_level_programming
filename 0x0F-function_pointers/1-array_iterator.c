#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates an array
 *@array: an array
 *@size: the size
 *@action: something
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
