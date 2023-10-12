#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting node at index
 * @h: header address
 * @idx: index
 * @n: elemnt of node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (!new)
		return (NULL);
	new->n = n;

	if (!tmp && idx == 0)
	{
		*h = new;
		return (new);
	}
	while (tmp)
	{
		if (idx == count)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			(tmp->prev)->next = new;
			tmp->prev = new;
			return (new);
		}
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
