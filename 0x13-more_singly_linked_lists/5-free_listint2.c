#include "lists.h"

/**
 * free_listint2 - function that free the list
 *@head: a pointer of the frist node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
