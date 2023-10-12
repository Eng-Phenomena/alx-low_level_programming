#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: header node
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
