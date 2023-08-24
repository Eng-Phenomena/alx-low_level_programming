#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding node at end of list
 * @head: pointer to pointer to the head
 * @str: string  of struct
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new = malloc(sizeof(list_t));
        unsigned int lenght = 0;
	list_t *end = *head;

	while (end->next)
	{
		end = end->next;
	}
        if (new == NULL)
                return (NULL);

        new->str = strdup(str);

        while (str[lenght])
                lenght++;
        new->len = lenght;
        new->next = NULL;

	if (*head ==NULL)
	{
		*head = new;
		return (new);
	}

	end->next = new;

        return (new);
}
