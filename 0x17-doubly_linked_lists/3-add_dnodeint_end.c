#include "lists.h"

/**
 * add_dnodeint_end - adding a node at end of the list
 * @head: header of the list
 * @n: elemnt of node
 * Return: node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	*head = tmp;
	return (new);
}
