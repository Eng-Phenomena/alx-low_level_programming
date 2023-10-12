#include "lists.h"

/**
 * free_dlistint - freeing a linked list
 * @head: head of list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
