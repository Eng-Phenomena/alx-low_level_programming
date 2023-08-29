#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: head of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
