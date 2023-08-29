#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deleting head node
 * @head: pointer to pointer of struct 
 * Return: head n;
 */

int pop_listint(listint_t **head)
{
	listint_t temp = *head;
	int tmp;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
