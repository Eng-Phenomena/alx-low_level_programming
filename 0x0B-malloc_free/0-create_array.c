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

	if (size <= 0)
	{
		return (NULL);
	}


	for (; size >= 0; size--)
	{
		arr[size - 1] = c;
	}	

	return (arr);
}
