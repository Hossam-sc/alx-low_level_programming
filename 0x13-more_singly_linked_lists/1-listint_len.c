#include "lists.h"

/**
 * listint_len - function that return the number of elements
 *@h: the number of lists
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
