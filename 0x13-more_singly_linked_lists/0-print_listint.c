#include <stdio.h>
#include "lists.h"

/**
 * print_listint - that prints the objrct info
 * @h: the object of struct
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
