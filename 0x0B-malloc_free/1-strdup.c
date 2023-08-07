#include <stdlib.h>
#include "main.h"

/**
 * _strdup - string dublicate
 * @str: string
 * Return: string pointer
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *arr = (char *)malloc(sizeof(str) + 1);
	unsigned int i = 0;

	if (arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
