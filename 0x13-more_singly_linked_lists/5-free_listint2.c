#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freeing linked list
 * @head: head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
