#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: srtruct pointer
 * Return: num of lists
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
