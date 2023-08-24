#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding node at beginning of list
 * @head: pointer to pointer to the head
 * @str: string  of struct
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int lenght = 0;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[lenght])
		lenght++;
	new->len = lenght;
	new->next = (*head);
	*head = new;

	return (new);
}
