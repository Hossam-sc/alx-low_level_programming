#include "lists.h"

/**
 * pop_listint - function that deletes a hesd node of list
 *@head: a pointer of the frist node of list
 * Return: value of node delete
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;
	return (value);
}
