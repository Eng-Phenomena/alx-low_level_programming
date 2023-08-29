#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adding node at end
 * @head: header poinyter
 * @n: interger
 * Return: the strcut pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->n = n;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
	return (new);
}
