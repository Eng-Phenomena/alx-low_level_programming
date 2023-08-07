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

	int i = 0;

	for (i = 0; arr[i] != '\0'; i++)
	{
		arr[size - 1] = c;
	}	

	return (arr);
}
