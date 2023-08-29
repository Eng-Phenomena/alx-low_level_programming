#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node at beginning
 * @head: the header
 * @n: the value of int
 * Return: struct pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	return (new);
}
