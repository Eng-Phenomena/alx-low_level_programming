#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adding node at given position
 * @head: header 
 * @idx: position
 * @n: value
 * Return: address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (NULL);
}
