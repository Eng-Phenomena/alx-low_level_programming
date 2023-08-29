#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - freeing linked list
 * @head: head list
 * Return: VOID
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
