#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating a dynamic size array
 * @size: int size
 * @c: initializing char
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}	

	return (arr);
}
