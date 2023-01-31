#include "lists.h"

/**
 * free_listint - function that frees a list
 *@head: the name of the list
 * Return: the
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
