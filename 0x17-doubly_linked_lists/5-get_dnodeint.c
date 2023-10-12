#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at specific index
 * @head: header of list
 * @index: index of list
 * Return: node at specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
