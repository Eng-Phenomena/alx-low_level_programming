#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - num of elemenst
 * @h: struct pointer
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
