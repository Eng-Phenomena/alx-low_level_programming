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
	listint_h *new = malloc(sizeof(listint_h));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
