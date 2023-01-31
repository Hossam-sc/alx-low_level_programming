#include "lists.h"

/**
 * add_nodeint_end - that function add new node at the end
 *@head: the name of list
 *@n: number
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *pointer;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	pointer = *head;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = add;
	return (add);
}
