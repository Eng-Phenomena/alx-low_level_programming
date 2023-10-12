#include "lists.h"

/**
 * sum_dlistint - sum of all elemnts in list
 * @head: head of list
 * Return: sum of elemnts
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
