#include "lists.h"

/**
 * get_nodeint_at_index - getting node at index
 * @head: header of list
 * @index: the index
 * Return: the index of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
