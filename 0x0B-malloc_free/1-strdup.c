#include <stdlib.h>
#include "main.h"

/**
 * _strdup - string dublicate
 * @str: string
 * Return: string pointer
 */

char *_strdup(char *str)
{
	char *arr = (char *)malloc(sizeof(str));
	unsigned int i = 0;

	if (arr == NULL)
		return (NULL);

	while (str != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
