#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 *@head: the name of the list
 *@n: number
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
