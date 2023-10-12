#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting node at index
 * @head: header of list
 * @index: index of list
 * Return: 1 fo succes and -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head;

	while (tmp)
	{
		if (count == index)
		{
			(tmp->prev)->next = tmp->next;
			(tmp->next)->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
